#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


#define LEBAR 30
#define TINGGI 10

int dinoX, dinoY;
int rintangan_X, rintangan_Y;
int skor = 0;
int gameOver = 0;
char lagi;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void penggambaran_game() {
    system("cls");
    for (int y = 0; y < TINGGI; y++) {
        for (int x = 0; x < LEBAR; x++) {
            if (x == dinoX && y == dinoY) {
                printf("D");  // menam-pilkan dino kita cuy
            } else if (x == rintangan_X && y == rintangan_Y) {
                printf("#");  // ini rintangan atau kaktus kek biasa game chrome gitu
            } else if (y == TINGGI - 1) {
                printf("-");  // ini tanah dimana huruf d (dinosaurus kita) berpijak.
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("skor : %d\n", skor);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case ' ':
                if (dinoY == TINGGI - 2) {  // bakalan lompat kalau si D itu ditanah kita
                    dinoY -= 2;
                }
                break;
            case 'q':
                gameOver = 1;
                break;
        }
    }
}

void logic() {
    // nurunin si dino disaat mengudara
    if (dinoY < TINGGI - 2) {
        dinoY++;
    }

    // yang bikin halaman makin ke kiri kayak di subway surflah (halamann yang ditinggalkan karakter)
    rintangan_X--;

    // Reset halangan pas kita keluar layar
    if (rintangan_X < 0) {
        rintangan_X = LEBAR - 1;
        rintangan_Y = TINGGI - 2;
        skor++;
    }

    // buat ngecek apakah karakter kita tabrakan atau akhir dari permainan ini lah, ceritanya
    if (dinoX == rintangan_X && dinoY == rintangan_Y) {
        gameOver = 1;
    }
}

void reset_game() {
    dinoX = 5;
    dinoY = TINGGI - 2;
    rintangan_X = LEBAR - 1;
    rintangan_Y = TINGGI - 2;
    skor = 0;
    gameOver = 0;
}

int main() {
    dinoX = 5;
    dinoY = TINGGI - 2;
    rintangan_X = LEBAR - 1;
    rintangan_Y = TINGGI - 2;
    do {
        reset_game();
        while (!gameOver) {
        penggambaran_game();
        input();
        logic();
        Sleep(50);  // kita bisa buat ngatur kecepatan gamenya
        }

        printf("\nGame Selesai Skor Kamu : %d\n", skor);
        if (skor < 5 && skor > 0) {
            printf("Lumayan Skornya :) \n\n");
        } else if (skor > 5 && skor < 10) {
            printf("Skor yang bagus ;) \n\n");
        } else if (skor >=10) {
            printf("Wow SEPUHHH ! \n\n");
        } else {
            printf ("Seriusan gk cetak skor sama sekali nih ?\n\n");
        }
        printf("Mau main lagi ? (y/t) \n");
        scanf (" %c", & lagi);

    }while (lagi == 'y' || lagi == 'Y');

    printf("\n\n=====================================================\n");
    printf("TERIMAKASIH TELAH MENIKMATI DAN MEMAINKAN GAME KAMI !\n");
    printf("================ HAVE A GREAT DAY :) ================\n");
    printf("=====================================================\n");



    return 0;
}
