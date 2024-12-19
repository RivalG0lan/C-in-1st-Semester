#include <stdio.h>
#include <stdlib.h>?

int main() {
    int i;
    char namaUser[50];
    int nimUser;
    char asalKom[30];
    int pilihan;
    char lagi;

    printf("========================================\n");
    printf("Program Perkalian Menggunakan Perulangan\n");
    printf("========================================\n\n");
    printf("Masukkan data diri anda !\n");
    printf("Nama = ");
    scanf("%[^\n]", &namaUser);
    //Semisal kodingan Eror kalau aku pakek scanf("%[^\n]", &namaUser);
    //fgets(namaUser, sizeof(namaUser), stdin);
    //size_t penghapusKarakter = strlen(namaUser);
    //if (penghapusKarakter > 0 && namaUser[penghapusKarakter - 1] == '\n') {
    //    namaUser[penghapusKarakter - 1] = '\0';
    //}
    printf("Nim  = ");
    scanf("%d", &nimUser);
    printf("Kom  = ");
    scanf("%s", &asalKom);
    printf("\nHalo %s %d dari Kom %s !\n", namaUser,nimUser,asalKom);

    do{
    printf("\n");
    printf("Silahkan pilih perkalian berapa!\n");
    printf("  1. Perkalian 2 pakek Looping For.\n");
    printf("  2. Perkalian 3 pakek Looping While.\n");
    printf("  3. Perkalian 4 pakek Looping Do-While.\n");
    printf("Pilih mana (1/2/3) = ");
    scanf("%i", &pilihan);


        switch(pilihan) {
            case 1:
                printf("Perkalian 2:\n");
                for (i = 1; i <= 10; i++) {
                    printf("2 x %d = %d\n", i, 2 * i);
                }
                break;
            case 2 :
                printf("Perkalian 3:\n");
                i = 1;
                while (i <= 10) {
                    printf("3 x %d = %d\n", i, 3 * i);
                    i++;
                }
                break;
            case 3 :
                printf("Perkalian 4:\n");
                i = 1;
                do {
                    printf("4 x %d = %d\n", i, 4 * i);
                    i++;
                } while (i <= 10);
                break;
            default:
                printf("Pilihan tidak valid!!\n");
                break;

        }
    printf("Mau memilih lagi ? (y/t)\n");
    scanf(" %c", &lagi);

    }while (lagi == 'y' || lagi== 'Y');
    printf("\n\n");
    printf("========================================\n");
    printf("==============Terimakasih===============\n");
    printf("==========Telah Menggunakan=============\n");
    printf("=======Program Looping diatas===========\n");
    printf("========================================\n");

    return 0;
}
