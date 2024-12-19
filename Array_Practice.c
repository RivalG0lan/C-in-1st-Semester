#include <stdio.h>

void main () {
    /*char huruf[] = {'a','b','c','d','e'};
    //printf("\tHuruf ke 3 adalah : %c\n", huruf[2]);
    huruf[2] = 'f';
    //printf("\tHuruf yang ke 3 di ganti ke = %c\n", huruf[2]);

    int ukuran = sizeof(huruf) ;
    printf("\tUkuran Array : %d\n", ukuran);
    */

    /*
    int nilai [5] = {1, 2, 3, 4, 5};
    for (int i = 0 ; i < 5 ;i++){
        printf("Data ke - %d = %d\n", i,nilai[i]);
    }
    */

    //array 1 dimensi
    /*
    int nilai[10] = {50, 45, 78, 30, 53, 100, 98, 95, 15, 34};
    int jumlahNilai = sizeof(nilai) / sizeof(nilai[0]);
    int total = 0;
    printf("Banyak elemen nilai = %i\n", jumlahNilai);
    printf("Rata rata = Total jumlah keseluruhan isi nilai elemen  /  Banyak elemen data nilai \n\n");

    for (int i = 0; i < jumlahNilai; i++) {
        total = total + nilai[i];
    }

    float average = (float)total / (float)jumlahNilai;
    printf("Rata-rata nilai adalah: %.2f\n", average);

    */

    //array 2 dimensi
    int bilangan [2][2] = {{100,200}, {300,400}};
    printf ("Isi Array\n\n");
    printf("%d %d\n", bilangan [0][0], bilangan [0][1]);
    printf("%d %d\n", bilangan [1][0], bilangan [1][1]);



}


