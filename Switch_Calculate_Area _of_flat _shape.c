#include <stdio.h>
#include <stdlib.h>

int main () {
    char namaPengguna [100] ;
    int Nim ;
    char asalKom [100];

    printf("==== TERIMAKASIH TELAH MENGINSTAL PENGHITUNG SEDERHANA ====\n");
    printf("==================== HALO PENGGUNA ========================\n");
    printf("========== MASUKKAN BIODATA ANDA TERLEBIH DAHULU ==========\n");
    printf("\n");
    printf("Nama = ");
    scanf("%[^\n]s", & namaPengguna);
    printf("Nim  = ");
    scanf("%i", & Nim);
    printf("Kom  = ");
    scanf("%s", & asalKom);
    printf("Terimakasih %s %i dari %s. telah menggunakan aplikasi \"Penghitung Keliling Bangun Ruang Sederhana\".\n", namaPengguna, Nim, asalKom);
    printf("\n");
    printf("\n");

    int pilihanBangunRuang;
    do {
        printf("Silahkan pilih salah satu dari ketiga Penghitung Keliling Bangun Ruang berikut !!\n");
        printf("1. Keliling Lingkaran.\n");
        printf("2. Keliling Segitiga.\n");
        printf("3. Keliling Persegi.\n");
        scanf("%i", & pilihanBangunRuang);
        if(pilihanBangunRuang <1 || pilihanBangunRuang >3) {
            printf("\nMohon maaf, tersedia hanya pilihan 1,2,3 buat sementara.\n");
         }

       printf("\n");
       printf("Anda telah memilih opsi bangun ruang %i.\n", pilihanBangunRuang);
       printf("\n");

       switch (pilihanBangunRuang) {
           case 1 :
            printf("==== Keliling Lingkaran ====\n");
            const float pi = 3.14;
            int jariJari ;
            printf("Masukkan Jari-Jari = ");
            scanf("%i", & jariJari);
            float kLingkaran = 2*pi*jariJari ;
            printf("Keliling lingkaran = %f\n", kLingkaran);
            printf("\n");
            break;

           case 2 :
            printf("==== Keliling Segitiga ====\n");
            float sisi1Segitiga;
            float sisi2Segitiga;
            float sisi3Segitiga;
            printf("Sisi Pertama(cm) = ");
            scanf("%f", &sisi1Segitiga);
            printf("Sisi Kedua(cm)   = ");
            scanf("%f", &sisi2Segitiga);
            printf("Sisi Ketiga(cm)  = ");
            scanf("%f", &sisi3Segitiga);
            float kelilingSegitiga = sisi1Segitiga+sisi2Segitiga+sisi3Segitiga;
            printf("Keliling Segitiga = %f\n", kelilingSegitiga);
            printf("\n");
            break;

           case 3 :
            printf("==== Keliling Persegi ====\n");
            float sisiPersegi ;
            printf("Sisi Persegi (cm) = ");
            scanf("%f", & sisiPersegi);
            float kelilingPersegi = 4*sisiPersegi;
            printf("Keliling Persegi = %f", kelilingPersegi);
            printf("\n");
            break;
            }
    } while(pilihanBangunRuang !=4);
}
