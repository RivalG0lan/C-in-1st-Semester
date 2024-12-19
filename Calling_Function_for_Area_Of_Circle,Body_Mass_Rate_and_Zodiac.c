#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int kelilingLingkaran(float jariJari) {
    float hasil = 2*PI*jariJari;
    printf("Keliling Lingkaran = 2 x %f x %f = %f\n", PI, jariJari, hasil);
    return 0;
}

void bmrPria (int beratBadan, int tinggiBadan, int usia) {
    float hasil = (88.362+(13.397*beratBadan)) + (4.799*tinggiBadan) - (5.677*usia);
    printf("Basal Metabolic Rate Anda adalah = (88.362+(13.397*%i)) + (4.799*%i) - (5.677*%i)\n= %f Kalori/Hari", beratBadan, tinggiBadan,usia,hasil);
}

void bmrWanita (int beratBadan, int tinggiBadan, int usia) {
    float hasil = (447.593+(9.247*beratBadan)) + (3.098*tinggiBadan) - (4.330*usia);
    printf("Basal Metabolic Rate Anda adalah = (447.593+(9.247*%i)) + (3.098*%i) - (4.330*%i)\n= %f Kalori/Hari", beratBadan, tinggiBadan,usia,hasil);
}

void penentuZodiak(int bulan, int hari) {
    if ((bulan == 3 && hari >= 21) || (bulan == 4 && hari <= 19)) {
        printf("Zodiak kamu adalah Aries.\n");
    } else if (bulan > 12 || hari > 31) {
        printf("\nZodiak anda Diluar nalar pikiran saya.\n");
    } else if ((bulan == 4 && hari >= 20) || (bulan == 5 && hari <= 20)) {
        printf("Zodiak kamu adalah Taurus.\n");
    } else if ((bulan == 5 && hari >= 21) || (bulan == 6 && hari <= 20)) {
        printf("Zodiak kamu adalah Gemini.\n");
    } else if ((bulan == 6 && hari >= 21) || (bulan == 7 && hari <= 22)) {
        printf("Zodiak kamu adalah Cancer.\n");
    } else if ((bulan == 7 && hari >= 23) || (bulan == 8 && hari <= 22)) {
        printf("Zodiak kamu adalah Leo.\n");
    } else if ((bulan == 8 && hari >= 23) || (bulan == 9 && hari <= 22)) {
        printf("Zodiak kamu adalah Virgo.\n");
    } else if ((bulan == 9 && hari >= 23) || (bulan == 10 && hari <= 22)) {
        printf("Zodiak kamu adalah Libra.\n");
    } else if ((bulan == 10 && hari >= 23) || (bulan == 11 && hari <= 21)) {
        printf("Zodiak kamu adalah Scorpio.\n");
    } else if ((bulan == 11 && hari >= 22) || (bulan == 12 && hari <= 21)) {
        printf("Zodiak kamu adalah Sagitarius.\n");
    } else if ((bulan == 12 && hari >= 22) || (bulan == 1 && hari <= 19)) {
        printf("Zodiak kamu adalah Capricorn.\n");
    } else if ((bulan == 1 && hari >= 20) || (bulan == 2 && hari <= 18)) {
        printf("Zodiak kamu adalah Aquarius.\n");
    } else if ((bulan == 2 && hari >= 19) || (bulan == 3 && hari <= 20)) {
        printf("Zodiak kamu adalah Pisces.\n");
    } else {
        printf("\nZodiak anda Diluar nalar pikiran saya.\n");
    }
}

int main (){

    printf("============= SELAMAT DATANG DI ==============\n");
    printf("== PROGRAM MEMANGGIL FUNGSI DILUAR INT MAIN ==\n");
    printf("==============================================\n\n");
    printf("DIBUAT OLEH : RIVALDO NAINGGOLAN D3 TI USU 24-043\n");

    int pilihApa;
    char lagiKah;

    float jariJari;

    int beratBadan;
    int tinggiBadan;
    int usia;
    char gender;

    int bulan;
    int hari;

    do {
        do {
            printf("\nKamu mau memanggil fungsi apa nih ?\n");
            printf(" 1. Fungsi penghitung Keliling Lingkaran dengan return function.\n");
            printf(" 2. Fungsi penghitung Pengukur Kebutuhan Kalori Harian dengan void function\n");
            printf(" 3. Fungsi Penentu Zodiak kamu dengan void function\n\n");
            printf("(1/2/3) ?\n");
            scanf("%i", &pilihApa);
            if (pilihApa > 3) {
                printf("\nPilihan kamu tidak valid, harap ulang ya !!\n\n");
            }
        } while (pilihApa > 3);

        switch (pilihApa) {
          case 1 :
            printf("\nSilahkan masukkan Jari Jari lingkaran!!\n");
            scanf("%f", &jariJari);
            kelilingLingkaran(jariJari);
            break;
          case 2 :
            printf ("\nMasukkan Berat Badan(Kg) anda !!\n");
            scanf("%i", &beratBadan);
            printf ("Masukkan Tinggi Badan(Cm) anda !!\n");
            scanf("%i", &tinggiBadan);
            printf ("Masukkan Usia anda !!\n");
            scanf("%i", &usia);
            printf ("Silahkan masukkan gender anda !! (L/P)\n");
            scanf("%s", &gender);
            if (gender == 'L' || gender == 'l' ) {
                bmrPria(beratBadan, tinggiBadan, usia);
            } else if (gender == 'P' || gender == 'p') {
                bmrWanita(beratBadan, tinggiBadan, usia);
            } else {
                printf("There are 2 Genders !!!");
            } break;
          case 3 :
            printf("\nHarap masukkan bulan lahir kamu !! (1-12)\n");
            scanf("%i", &bulan);
            printf("Selanjutnya masukkan tanggal hari kelahiran kamu!! (1-31)\n");
            scanf("%i", &hari);
            penentuZodiak(bulan,hari);
            break;
        }

      printf ("\n\nApakah kamu mau memanggil fungsi yang lain lagi ? (y/t || y/n)\n");
      scanf(" %c", &lagiKah);

    } while (lagiKah == 'y' || lagiKah == 'Y');

    printf ("\n-----------------------------------------\n");
    printf ("TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI\n");
    printf ("-----------------------------------------\n");

  return 0;
}






















//BACK UP
/*int main (){

    printf("============= SELAMAT DATANG DI ==============\n");
    printf("== PROGRAM MEMANGGIL FUNGSI DILUAR INT MAIN ==\n");
    printf("==============================================\n\n");
    printf("DIBUAT OLEH : RIVALDO NAINGGOLAN D3 TI USU 24-043");

    int pilihApa;
    char lagiKah;

    float jariJari;

    int beratBadan;
    int tinggiBadan;
    int usia;
    char gender;

    int bulan;
    int hari;


    do {
        printf("\nKamu Mau Memanggil fungsi apa nih ?\n");
        printf(" 1. Fungsi penghitung Keliling Lingkaran dengan int function.\n");
        printf(" 2. Fungsi penghitung Pengukur Kebutuhan Kalori Harian dengan void function\n");
        printf(" 3. Fungsi Penentu Zodiak kamu dengan void function\n\n");
        printf("(1/2/3) ?\n\n");
        scanf("%i", &pilihApa);
        if (pilihApa > 3) {
            printf("\nPilihan kamu tidak valid, harap ulang ya !!\n\n");
        }
    } while (pilihApa > 3);


    switch (pilihApa) {
        case 1 :
            printf("\nSilahkan masukkan Jari Jari lingkaran!!\n");
            scanf("%f", &jariJari);
            kelilingLingkaran(jariJari);
            break;
        case 2 :
            printf ("\nMasukkan Berat Badan(Kg) anda !!\n");
            scanf("%i", &beratBadan);
            printf ("Masukkan Tinggi Badan(Cm) anda !!\n");
            scanf("%i", &tinggiBadan);
            printf ("Masukkan Usia anda !!\n");
            scanf("%i", &usia);
            printf ("Silahkan masukkan gender anda !! (L/P)\n");
            scanf("%s", &gender);
            if (gender == 'L' || gender == 'l' ) {
                bmrPria(beratBadan, tinggiBadan, usia);
            } else if (gender == 'P' || gender == 'p') {
                bmrWanita(beratBadan, tinggiBadan, usia);
            } else {
                printf("There are 2 Genders !!!");
            } break;
        case 3 :
            printf("\nHarap masukkan bulan lahir kamu !! (1-12)\n");
            scanf("%i", &bulan);
            printf("Selanjutnya masukkan tanggal hari kelahiran kamu!! (1-31)\n");
            scanf("%i", &hari);
            penentuZodiak(bulan,hari);
            break;
    }

    printf ("\n\nApakah mau memanggil fungsi lain ?\n")
    scanf("%c", lagiKah);





  return 0;
}
*/









    /*
    float jariJari;
    printf("Silahkan masukkan Jari Jari lingkaran!!\n");
    scanf("%f", &jariJari);
    kelilingLingkaran(jariJari);
    */

    /*
    int beratBadan;
    int tinggiBadan;
    int usia;
    char gender;

    printf ("Masukkan Berat Badan(Kg) anda !!\n");
    scanf("%i", &beratBadan);
    printf ("Masukkan Tinggi Badan(Cm) anda !!\n");
    scanf("%i", &tinggiBadan);
    printf ("Masukkan Usia anda !!\n");
    scanf("%i", &usia);
    printf ("Silahkan masukkan gender anda !! (L/P)\n");
    scanf("%s", &gender);
    if (gender == 'L' || gender == 'l' ) {
        bmrPria(beratBadan, tinggiBadan, usia);
    } else if (gender == 'P' || gender == 'p') {
        bmrWanita(beratBadan, tinggiBadan, usia);
    } else {
        printf("There are 2 Genders !!!");
    }
    */

    /*
    int bulan;
    int hari;
    printf("Harap masukkan bulan lahir kamu !! (1-12)\n");
    scanf("%i", &bulan);
    printf("Selanjutnya masukkan tanggal hari kelahiran kamu!! (1-31)\n");
    scanf("%i", &hari);
    penentuZodiak(bulan,hari);
    */


