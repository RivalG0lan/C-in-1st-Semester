#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah_barang, i;
    float harga, total;
    char lanjut;

    printf("=========================================\n");
    printf("SELAMAT DATANG DI PROGRAM KASIR SEDERHANA\n");
    printf("=========================================\n");
    printf("\n");

    do {
        total = 0;

        printf("Masukkan jumlah barang anda : ");
        scanf("%d", &jumlah_barang);

        if (jumlah_barang <= 0) {
            printf("Jumlah tidak valid\n\n");
        } else {
            printf("Jumlahnya valid !!\n\n");
        }


        if (jumlah_barang > 0) {
            for (i = 1; i <= jumlah_barang; i++) {
                printf("Masukkan harga barang ke-%d: ", i);
                scanf("%f", &harga);
                total += harga;
            }
            printf("Total belanja: Rp %.2f\n", total);
        }

        float uangAnda;
        printf("Silahkan masukkan uang yang anda miliki\n");
        printf("Rp ");
        scanf("%f", &uangAnda);
        printf("\n");

        if (uangAnda < total) {
            printf("Uang anda tidak cukup !!\n");
        } else {
            printf("Kembalian anda adalah Rp %.2f\n", uangAnda - total);
        }


        printf("Apakah anda mau menghitung lagi (y/n)?\n");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');
    printf("\n");
    printf("==========================================\n");
    printf("Terimakasih Telah Menggunakan Program Ini \n");
    printf("==========================================\n");
    return 0;
}















































/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah_barang, i;
    float harga, total = 0.0;
    char lanjut;

    printf("=========================================\n");
    printf("SELAMAT DATANG DI PROGRAM KASIR SEDERHANA\n");
    printf("=========================================\n");
    printf("\n");

    do {
        total = 0;

        printf("Masukkan jumlah barang anda : ");
        scanf("%d", &jumlah_barang);

        if (jumlah_barang <= 0) {
        printf("Jumlah tidak valid\n \n");
        printf("\n");
        } else {
        printf("Jumlahnya valid !!\n");
        printf("\n");
        }

        if (jumlah_barang > 0) {
        for (i = 1; i <= jumlah_barang; i++) {
        printf("Masukkan harga barang ke-%d: ", i);
        scanf("%f", &harga);
        total += harga;
        }
        printf("Total belanja: Rp %.2f\n", total);
        }

        float uangAnda;
        printf("Silahkan masukkan uang yang anda miliki\n");
        printf("Rp");
        scanf("%f", &uangAnda);
        printf("\n");

        if (uangAnda < total) {
            printf("Uang anda tidak cukup !!\n");
        } else {
            printf("Kembalian anda adalah = Rp%.2f", uangAnda - total);
        }
printf("\n");
        printf("Apakah anda mau menghitung lagi (y/n)?\n");
        scanf("%c", &lanjut);


}while ( lanjut == 'y' || lanjut == 'Y' );



return 0;
}
/*



















    /*printf("Masukkan jumlah barang anda : ");
    scanf("%d", &jumlah_barang);

    if (jumlah_barang <= 0) {
        printf("Jumlah tidak valid\n \n");
        printf("\n");
    } else {
        printf("Jumlahnya valid !!\n");
        printf("\n");
    }

    if (jumlah_barang > 0) {
    for (i = 1; i <= jumlah_barang; i++) {
        printf("Masukkan harga barang ke-%d: ", i);
        scanf("%f", &harga);
        total += harga;
    }
    printf("Total belanja: Rp %.2f\n", total);
    }

    float uangAnda;
    printf("Silahkan masukkan uang yang anda miliki\n");
    printf("Rp");
    scanf("%f", &uangAnda);
    printf("\n");

    if (uangAnda < total) {
        printf("Uang anda tidak cukup !!\n");
    } else {
    printf("Kembalian anda adalah\nRp%.2f", uangAnda - total);
    }
return 0; */

































/*
    printf("=========================================\n");
    printf("SELAMAT DATANG DI PROGRAM KASIR SEDERHANA\n");
    printf("=========================================\n");
    printf("\n");*/



    /*int jumlah_barang, i;
    float harga, total = 0.0;
    printf("Masukkan jumlah barang anda : ");
    scanf("%d", &jumlah_barang);

    if (jumlah_barang <= 0) {
        printf("Jumlah tidak valid\n \n");
        printf("\n");
    } else {
        printf("Jumlahnya valid !!\n");
        printf("\n");
    }

    if (jumlah_barang > 0) {
        for (i = 1; i <= jumlah_barang; i++) {
            printf("Masukkan harga barang ke-%d: ", i);
            scanf("%f", &harga);
            total += harga;
        }

        printf("Total belanja: Rp %.2f\n", total);
    }

    float uangAnda;
    printf("Silahkan masukkan uang  yang anda miliki\n");
    printf("Rp");
    scanf("%f", & uangAnda);
    printf("\n");
    if (uangAnda <= harga) {
        printf("Uang anda tidak cukup !!");
    } elseif (uangAnda >= harga) {
        printf("Berikut kembalian anda = \nRp")
        printf(uangAnda - harga);
    }
    return 0;*/
