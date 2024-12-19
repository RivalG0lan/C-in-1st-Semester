#include <stdio.h>
#include <stdlib.h>

int main () {
    //int i = 0; //for sebenarnya tidak perlu inisialisasi int i = 0 karena inisialisasi tejadi di dalam for
    /*for(int i = 0; i<=10;i++) {
        printf("Perulangan ke-%d\n", i);
    }*/

    /*int i = 0;
    while (i<=5) {
        printf("iterasi ke-%d\n", i); i++;
    }*/

    //PERULANGAN DO WHILE
    /*char ulang = 'y';
    do {
        printf("Apakah anda ingin menggunakan program ini lagi ? (y/t) : ");
        scanf(" %c", &ulang);
    } while (ulang=='y' || ulang=='Y'); */

    //Perulangan Bersarang Nested Loop
    for (int i = 0; i<=3; i++) {
        for (int j = 0; j <= 3; j++) {
            printf("Perulangan ke-%d.%d\n", i,j);
        }
    }

    return 0;
}
