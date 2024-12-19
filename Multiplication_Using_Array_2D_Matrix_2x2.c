#include <stdio.h>

int main () {
    printf("===========================================================\n");
    printf("Program Perkalian Matriks 2x2 dengan nilai Skalar dari User\n");
    printf("===========================================================\n\n");
    printf("========= Dibuat Oleh : =========\n");
    printf(" Nama  : Rivaldo Nainggolan\n");
    printf(" Kelas : 1A\n");
    printf(" KOM   : A2\n");
    printf(" Prodi : D-3 Teknik Informatika\n");
    printf(" NIM   : 24-1712-043\n");
    printf("=================================\n\n");

    int baris0kolom0;
    int baris0kolom1;
    int baris1kolom0;
    int baris1kolom1;
    int skalarUser;
    char cobaLagi;

    printf(" Harap diingat bahwa Matriks Ordo 2x2.\n");
    printf(" ==== Array dimulai dari indeks 0 ====\n\n");
    printf(" [ a   b ]\n");
    printf(" [ c   d ]\n\n");
    printf(" a = baris 0 kolom 0 [0.0]\n");
    printf(" b = baris 0 kolom 1 [0.1]\n");
    printf(" c = baris 1 kolom 0 [1.0]\n");
    printf(" d = baris 1 kolom 1 [1.1]\n\n\n");

    do {
        printf(" \nPerkalian Matris dengan Skalar\n");
        printf("- Inputlah Elemen [0.0] = ");
        scanf("%i", & baris0kolom0);
        printf("- Inputlah Elemen [0.1] = ");
        scanf("%i", & baris0kolom1);
        printf("- Inputlah Elemen [1.0] = ");
        scanf("%i", & baris1kolom0);
        printf("- Inputlah Elemen [1.1] = ");
        scanf("%i", & baris1kolom1);

        printf(" Matriks 2x2 : \n\n");

        int matriks2 [2][2] = {{baris0kolom0,baris0kolom1}, {baris1kolom0,baris1kolom1}};
        printf(" [ %d  %d ]\n", matriks2 [0][0], matriks2 [0][1]);
        printf(" [ %d  %d ]\n", matriks2 [1][0], matriks2 [1][1]);

        printf("\nMasukkan nilai skalar yang mau dikalikan ke dalam matriks !!\n= ");
        scanf("%i", & skalarUser);

        int kaliMatriks00 = (skalarUser * matriks2 [0][0]);
        int kaliMatriks01 = (skalarUser * matriks2 [0][1]);
        int kaliMatriks10 = (skalarUser * matriks2 [1][0]);
        int kaliMatriks11 = (skalarUser * matriks2 [1][1]);

        printf(" Hasil perkalian matriks dengan skalar adalah : \n");
        printf(" [ %i  %i ]\n", kaliMatriks00, kaliMatriks01);
        printf(" [ %i  %i ]\n\n", kaliMatriks10, kaliMatriks11);

        printf("apakah mau mencoba skalar dan elemen matriks dengan input baru ? (y/t)");
        scanf(" %c", & cobaLagi);
    } while (cobaLagi == 'Y' || cobaLagi == 'y');

    printf("\n=================================================\n");
    printf("TERIMAKASIH TELAH MENGGUNAKAN PROGRAM SAYA INI !!\n");
    printf("============== May God Bless You !! =============\n");
    printf("=================================================\n");

    return 0;
}






/*int baris0kolom0;
    int baris0kolom1;
    int baris1kolom0;
    int baris1kolom1;
    int skalarUser;
    char cobaLagi;

    printf(" Harap diingat bahwa Matriks Ordo 2x2.\n");
    printf(" ==== Array dimulai dari indeks 0 ====\n\n");
    printf(" [ a   b ]\n");
    printf(" [ c   d ]\n\n");
    printf(" a = baris 0 kolom 0 [0.0]\n");
    printf(" b = baris 0 kolom 1 [0.1]\n");
    printf(" c = baris 1 kolom 0 [1.0]\n");
    printf(" d = baris 1 kolom 1 [1.1]\n\n");


    printf(" Perkalian Matris dengan Skalar\n");
    printf("- Inputlah Elemen [0.0] = ");
    scanf("%i", & baris0kolom0);
    printf("- Inputlah Elemen [0.1] = ");
    scanf("%i", & baris0kolom1);
    printf("- Inputlah Elemen [1.0] = ");
    scanf("%i", & baris1kolom0);
    printf("- Inputlah Elemen [1.1] = ");
    scanf("%i", & baris1kolom1);

    printf(" Matriks 2x2 : \n\n");

    int matriks2 [2][2] = {{baris0kolom0,baris0kolom1}, {baris1kolom0,baris1kolom1}};
    printf(" [ %d  %d ]\n", matriks2 [0][0], matriks2 [0][1]);
    printf(" [ %d  %d ]\n", matriks2 [1][0], matriks2 [1][1]);

    printf("\nMasukkan nilai skalar yang mau dikalikan ke dalam matriks !!\n= ");
    scanf("%i", & skalarUser);

    int kaliMatriks00 = (skalarUser * matriks2 [0][0]);
    int kaliMatriks01 = (skalarUser * matriks2 [0][1]);
    int kaliMatriks10 = (skalarUser * matriks2 [1][0]);
    int kaliMatriks11 = (skalarUser * matriks2 [1][1]);

    printf(" Hasil perkalian matriks dengan skalar adalah : \n");
    printf(" [ %i  %i ]\n", kaliMatriks00, kaliMatriks01);
    printf(" [ %i  %i ]\n\n", kaliMatriks10, kaliMatriks11);

    printf("apakah mau mencoba skalar dan elemen matriks dengan input baru ? (y/t)");
    scanf("%c", & cobaLagi);
    */
