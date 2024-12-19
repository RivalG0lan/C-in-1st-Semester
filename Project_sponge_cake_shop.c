#include <stdio.h>
#include <stdlib.h> // Menambahkan header untuk system("cls")
#include <string.h>

#define MAX_PILIHAN 5

typedef struct {
    char nama[30];
    float harga;
    float faktorUkuran;  // Faktor pengali ukuran kue
} Kue;

void clearScreen() {
    system("cls");
}

void tampilkanMenu(Kue kue[], int jumlah) {
    printf("=============================< Menu Toko Kue >============================\n");
    for (int i = 0; i < jumlah; i++) {
        printf("||=> %d. %s.....................................Rp %.2f||\n", i + 1, kue[i].nama, kue[i].harga);
    }
    printf("===========================================================================\n");
}

// Fungsi untuk menghitung volume dan luas berdasarkan faktor pengali
void hitungUkuranKue(Kue kue) {
    float panjang = 43.0 * kue.faktorUkuran; // cm
    float lebar = 37.0 * kue.faktorUkuran;   // cm
    float tinggi = 2.0 * kue.faktorUkuran;   // cm

    // Menghitung luas permukaan balok
    float luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    // Menghitung volume balok
    float volume = panjang * lebar * tinggi;

    printf("Dimensi Kue: Panjang = %.2f cm, Lebar = %.2f cm, Tinggi = %.2f cm\n", panjang, lebar, tinggi);
    printf("Luas Permukaan: %.2f cm²\n", luas);
    printf("Volume: %.2f cm³\n\n", volume);
}

int main() {
    Kue kue[MAX_PILIHAN] = {
        {"Kue Bolu Alamak....",  40000, 4.0},   // Faktor pengali 4
        {"Kue Bolu Uwaw......",  20000, 2.0},     // Faktor pengali 2
        {"Kue Bolu Orisinil..",10000, 1.0},  // Faktor pengali 1
        {"Kue Bolu Saotik....",  5000, 0.5},   // Faktor pengali 0.5
        {"Kue Bolu Korupsi...",  2500, 0.25}, // Faktor pengali 0.25
    };

    int pilihan[MAX_PILIHAN] = {0};
    float totalTagihan = 0.0;  // Menggunakan float untuk totalTagihan
    float uangPembeli = 0.0;
    char jawab[3];

    while (1) {
        tampilkanMenu(kue, MAX_PILIHAN);
        printf("=======================================================\n");
        printf("=> Masukkan pilihan kue (1-%d) atau 0 untuk selesai: ", MAX_PILIHAN);
        int pilihanKue;
        scanf("%d", &pilihanKue);
        printf("=======================================================\n");

        // Cek apakah pilihan kue valid
        if (pilihanKue == 0) {
            break;
        } else if (pilihanKue < 1 || pilihanKue > MAX_PILIHAN) {
            printf("Pilihan tidak valid!\n");
            continue;
        }
        printf("===============================\n");
        printf("=> Masukkan jumlah kue %s: ", kue[pilihanKue - 1].nama);
        int jumlah;
        scanf("%d", &jumlah);
        printf("===============================\n");

        // Menghitung total tagihan
        totalTagihan += kue[pilihanKue - 1].harga * jumlah;

        // Menampilkan ukuran dan volume kue berdasarkan pilihan
        printf("Ukuran dan Volume Kue %s:\n", kue[pilihanKue - 1].nama);
        hitungUkuranKue(kue[pilihanKue - 1]);

        printf("===============================================\n");
        printf("Apakah Anda ingin memotong kue? (y/n): ");
        scanf("%s", jawab);
        printf("===============================================\n");

        if (strcmp(jawab, "y") == 0) {
            int potongan;
            printf("=============================================\n");
            printf("Berapa banyak potongan yang diinginkan? = ");
            scanf("%d", &potongan);
            printf("=============================================\n");
            if (potongan > 0) {
                printf("=========================================================================\n");
                printf("=> Setiap potongan akan memiliki luas dan volume sesuai dengan pilihan.\n");
                printf("=========================================================================\n");
                // Menghitung luas dan volume per potongan
                float panjang = 43.0 * kue[pilihanKue - 1].faktorUkuran;
                float lebar = 37.0 * kue[pilihanKue - 1].faktorUkuran;
                float tinggi = 2.0 * kue[pilihanKue - 1].faktorUkuran;

                float luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                float volume = panjang * lebar * tinggi;

                printf("Luas per potongan: %.2f cm²\n", luas / potongan);
                printf("Volume per potongan: %.2f cm³\n", volume / potongan);
            }
        }

        printf ("==============================\n");
        printf("Total tagihan: Rp %.2f\n", totalTagihan);
        printf("-------------------------------\n");
        printf("Masukkan uang pembeli: Rp ");
        scanf("%f", &uangPembeli);
        printf("===============================\n");

        if (uangPembeli >= totalTagihan) {
            float kembalian = uangPembeli - totalTagihan;
            printf("Kembalian Anda: Rp %.2f\n", kembalian);
        } else {
            printf("Uang anda tidak cukup! Kembali ke menu...\n");
            totalTagihan = 0;
            continue;
        }
        //clearScreen();
        printf("Apakah ada tambahan lagi? (y/n): ");
        scanf("%s", jawab);
        if (strcmp(jawab, "n") == 0) {
            break;
        }
    }

    printf("Terima kasih telah berbelanja!\n");
    return 0;
}
