#include <stdio.h>

int main () {
    /*int nilaiPertama = 45;
    float nilaiKedua = 78.2;
    int hasil = nilaiPertama + nilaiKedua;
    printf("nilai pertama = %d\n", nilaiPertama);
    printf("nilai kedua = %d\n", nilaiPertama);
    printf("jika %d ditambah %d maka", nilaiPertama, nilaiKedua);
    printf("Hasil = %d", hasil);*/


    /*int num1 = 3;
    int num2 = 4;
    int hasil = num1 + num2;
    ++hasil;
    printf("%d", hasil);*/


    // program buat hitung luas lingkaran
    /*int jariJari;
    const pi = 3.14;
    printf("Silahkan masukkan jari jarinya\n");
    scanf("")

    float luasLingkaran = pi * (jariJari*jariJari);
    printf("%f", luasLingkaran );*/



    //tipe data huruf char
    /*char c1 = 'A';
    printf("%c", c1);*/



    //tipe data string  jika ditambah kurung siku maka char jadistring
    /*char namaMahasiswa [] = "Pablo";
    printf("%s", namamahasiswa);*/



    //syntax untuk input data atau memasukkan data
    // hanya Scan F yang memakai & sebelum nama variabel
    /*
    char nama [] = "";
    int nim;

    printf("Masukkan nama : ");
    scanf("%s", & nama);

    printf("Masukkan nim : ");
    scanf("%d", & nim);

    printf("Nama : %s\n", nama);
    printf("Nim : %d\n", nim);
    */



    //CARA INPUT DATA STRING DENGAN SPASI
    /*
    spesial scanf, bisa digunakan buat scan angka namun angkanya masih bersifat string. dan harus di conversi ke int atau float
    char str[100];
    printf("Masukkan teks: ");
    scanf("%[^\n]", str);  // Membaca hingga newline enter

    fgets, bisa digunakan buat scan angka namun angkanya masih bersifat string. dan harus di conversi ke int atau float
    input[strcspn(input, "\n")] = '\0';  // Menghapus newline jika buffer cukup besar
    char str[100];
    printf("Masukkan teks: ");
    fgets(str, sizeof(str), stdin);
    printf("Input: %s", str);
    */




}
