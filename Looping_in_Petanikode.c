#include <stdio.h>
#include <stdlib.h>

void main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("Perulangan ke (%d, %d)\n", i, j);
        }
    }
}

/*
int main () {
    for(int i = 10; i >= 0; i--){
    printf("Perulangan ke-%i\n", i);
    }
    printf("\n\n");
    for(int counter = 10; counter >= 0; counter = counter -2){
    printf("Perulangan ke-%i\n", counter);
    }

    return 0;
}
*/


/*
void main(){
    for(int counter = 0; counter <= 50; counter+=2){
        printf("Perulangan ke- %i\n", counter);
    }
}
*/

/*
void main(){
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}
*/
