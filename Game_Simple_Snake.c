#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

#define WIDTH 20
#define HEIGHT 10

int x, y, fruit_x, fruit_y, score;
int snake[100][2]; //ni koordinat ularnya cuy
int snake_length;
int game_over;
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum direction dir;

void setup() {
    game_over = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruit_x = rand() % WIDTH;
    fruit_y = rand() % HEIGHT;
    score = 0;
    snake_length = 0;
}

void draw() {
    clear();
    for (int i = 0; i < WIDTH + 2; i++)
        printw("#");
    printw("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printw("#");
            if (i == y && j == x)
                printw("O"); //kepala ulernya
            else if (i == fruit_y && j == fruit_x)
                printw("F"); // buahnya nih
            else {
                int is_snake_part = 0;
                for (int k = 0; k < snake_length; k++) {
                    if (snake[k][0] == j && snake[k][1] == i) {
                        printw("o"); //badan ulernya
                        is_snake_part = 1;
                    }
                }
                if (!is_snake_part)
                    printw(" ");
            }
            if (j == WIDTH - 1)
                printw("#");
        }
        printw("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printw("#");
    printw("\nScore: %d\n", score);
    refresh();
}

void input() {
    keypad(stdscr, TRUE);
    halfdelay(1); //tunggu untuk input ke 1/10 kali perdetiknya cuy
    int c = getch();
    switch (c) {
        case KEY_LEFT:
            dir = LEFT;
            break;
        case KEY_RIGHT:
            dir = RIGHT;
            break;
        case KEY_UP:
            dir = UP;
            break;
        case KEY_DOWN:
            dir = DOWN;
            break;
        case 'q':
            game_over = 1; //nih keluar gamenya
            break;
    }
}

void logic() {
    int prev_x = snake[0][0];
    int prev_y = snake[0][1];
    int prev2_x, prev2_y;
    snake[0][0] = x;
    snake[0][1] = y;

    for (int i = 1; i < snake_length; i++) {
        prev2_x = snake[i][0];
        prev2_y = snake[i][1];
        snake[i][0] = prev_x;
        snake[i][1] = prev_y;
        prev_x = prev2_x;
        prev_y = prev2_y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < snake_length; i++) {
        if (snake[i][0] == x && snake[i][1] == y) {
            game_over = 1; // ulernya bisa nabrak sendiri
        }
    }

    if (x == fruit_x && y == fruit_y) {
        score += 10;
        fruit_x = rand() % WIDTH;
        fruit_y = rand() % HEIGHT;


/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

#define WIDTH 20
#define HEIGHT 10

int x, y, fruit_x, fruit_y, score;
int snake[100][2]; // Koordinat ular
int snake_length;
int game_over;
enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum direction dir;

void setup() {
    game_over = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruit_x = rand() % WIDTH;
    fruit_y = rand() % HEIGHT;
    score = 0;
    snake_length = 0;
}

void draw() {
    system("clear"); // Bersihkan layar (Linux/Unix)
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O"); // Kepala ular
            else if (i == fruit_y && j == fruit_x)
                printf("F"); // Buah
            else {
                int is_snake_part = 0;
                for (int k = 0; k < snake_length; k++) {
                    if (snake[k][0] == j && snake[k][1] == i) {
                        printf("o"); // Badan ular
                        is_snake_part = 1;
                    }
                }
                if (!is_snake_part)
                    printf(" ");
            }
            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\nScore: %d\n", score);
}

void input() {
    if (kbhit()) { // Memeriksa apakah ada input dari keyboard
        char c = getchar();
        switch (c) {
            case 'a':
                if (dir != RIGHT) dir = LEFT; // Mencegah ular berbalik
                break;
            case 'd':
                if (dir != LEFT) dir = RIGHT; // Mencegah ular berbalik
                break;
            case 'w':
                if (dir != DOWN) dir = UP; // Mencegah ular berbalik
                break;
            case 's':
                if (dir != UP) dir = DOWN; // Mencegah ular berbalik
                break;
            case 'q':
                game_over = 1; // Keluar dari game
                break;
        }
    }
}

int kbhit(void) {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

void logic() {
    int prev_x = snake[0][0];
    int prev_y = snake[0][1];
    int prev2_x, prev2_y;
    snake[0][0] = x;
    snake[0][1] = y;

    for (int i = 1; i < snake_length; i++) {
        prev2_x = snake[i][0];
        prev2_y = snake[i][1];
        snake[i][0] = prev_x;
        snake[i][1] = prev_y;
        prev_x = prev2_x;
        prev_y = prev2_y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
*/

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10

int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup() {
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
    nTail = 0;
}

void Draw() {
    system("cls"); // Clear the console

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#"); // Wall on the left

            if (i == y && j == x)
                printf("O"); // Snake head
            else if (i == fruitY && j == fruitX)
                printf("F"); // Fruit
            else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Snake tail
                        isTail = 1;
                    }
                }
                if (!isTail)
                    printf(" ");
            }

            if (j == WIDTH - 1)
                printf("#"); // Wall on the right
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            dir = STOP;
            break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            dir = STOP; // Game over
        }
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    Setup();
    while (dir != STOP) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Sleep to control the speed of the game
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10

int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void Setup() {
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
    nTail = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O"); // Ular
            else if (i == fruitY && j == fruitX)
                printf("F"); // Buah
            else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Ekor
                        isTail = 1;
                    }
                }
                if (!isTail)
                    printf(" ");
            }
            if (j == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                dir = STOP; // Menekan x untuk berhenti
                break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            dir = STOP; // Ular menabrak ekornya sendiri
        }
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    Setup();
    while (dir != STOP) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Delay
    }
    return 0;
}

*/

#include <stdio.h>
#include <conio.h>

char map[20][20];
char player = '^', food = 'O';
char tail[10] = {'*','*','*','*','*','*','*','*','*','*'};
int y = 12;
int x = 3;
int a[10];
int b[10];
char walk;
int score = 0;
int n = 0, p = 10, q = 10, rand = 2, R = 1, i, j;

void generateMap(int p, int q, int R);
void outputMap(int score);
void moveUp();
void moveDown();
void moveLeft();
void moveRight();

int main(){
	int i,j;
	system("color a");
	do{
		system("cls");
		generateMap(p,q,R);
		outputMap(score);
		walk = getch();
		for(i=9; i>0; i--){
			a[i] = a[i-1];b[i] = b[i-1];
		}
		a[0] = y;b[0] = x;
		switch(walk){
			case 'w':
				moveUp();
				break;
			case 's':
				moveDown();
				break;
			case 'a':
				moveLeft();
				break;
			case 'd':
				moveRight();
				break;
		}

		}while(score < 10);
	system("cls");
	printf("\t\t+==============================+\n");
	printf("\t\t|      CONGRATULATION !!!      |\n");
	printf("\t\t+==============================+\n");
	printf("Your Score : 10");
	getch();
	return 0;
}

void generateMap(int p, int q, int R){
	int i,j;
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			map[i][j] = ' ';
		}
	}
	map[0][0] = '+';
	map[19][0] = '+';
	map[19][19] = '+';
	map[0][19] = '+';
	for(i=1; i<19; i++){
		map[i][0] = '|';
		map[i][19]= '|';
	}
	for(j=1; j<19; j++){
		map[0][j] = '=';
		map[19][j] = '=';
	}
	map[y][x] = player;
	for(i=0; i<R; i++){
		map[a[i]][b[i]] = tail[i];
	}
	map[p][q] = food;
}

void outputMap(int score){
	int i,j;
	for(i=0; i<20; i++){
		for(j=0; j<20; j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
	printf("Score: 00%d",score);
}
void moveUp(){
	if(map[y - 1][x] == ' '){
				y--;
				map[y][x] = player;
				}
				else if(map[y - 1][x] == food){
					p *= (rand + y * 3);q *= (rand + x * 9);
					if(p >= 19) p %= 13;p++;
					if(q >= 19) q %= 16;q++;
					score++;
					R++;
				}
				player = '^';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveDown(){
	if(map[y+1][x] == ' '){
				y++;
				map[y][x] = player;
	}
				else if(map[y + 1][x] == food){
					p *= (rand + y * 6);q *= (rand + x * 8);
					if(p >= 19) p %= 18;p++;
					if(q >= 19) q %= 15;q++;
					score++;
					R++;
				}
				player = 'v';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveLeft(){
	if (map[y][x-1] == ' '){
				x--;
				map[y][x] = player;
				}
				else if(map[y][x-1] == food){
					p *= (rand + y * 5);q *= (rand + x * 7);
					if(p >= 19) p %= 18;p++;
					if(q >= 19) q %= 17;q++;
					score++;
					R++;
				}
				player = '<';
				for(i=0; i<R; i++){
					for(j=0; j<R; j++){
						map[a[i]][b[j]] = tail[n];
						n++;
					}
				}
}
void moveRight(){
	if(map[y][x+1] == ' '){
				x++;
				map[y][x] = player;
				}
				else if(map[y][x+1] == food){
					p *= (rand + y * 2);q *= (rand + x * 3);
					if(p >= 19) p %= 18;p++;
					if(q >= 19) q %= 18;q++;
					score++;
					R++;
				}
				player = '>';
				for(i=0; i<R; i++){
						for(j=0; j<R; j++){
							map[a[i]][b[j]] = tail[n];
							n++;
					}
				}
}
