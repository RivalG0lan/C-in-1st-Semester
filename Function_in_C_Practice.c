#include <stdio.h>

/*void welcome (char nama []){
    printf("Selamat datang %s \n", nama);

}

int main() {
    welcome ("Rivaldo Nainggolan");
    return 0;
}*/


/*void welcome (int usia){
    printf("Usia anda adalah %i \n", usia);

}

int main() {
    welcome (18);
    return 0;
}*/
              // PARAMETER
int addition (int a, int b, int x) {
    int hasil = a + b; // variabel baru hasil
    printf("%d + %d + %d = %d", a,b,x,hasil);
    return hasil;
}

int pengurangan (int a, int b, int x) {
    int hasil = a - b; // variabel baru hasil
    printf("%d - %d - %d = %d", a,b,x,hasil);
    return hasil;
}


int perkalian (int a, int b, int x) {
    int hasil = a * b; // variabel baru hasil
    printf("%d * %d * %d = %d", a,b,x,hasil);
    return hasil;
}

float luasLingkaran(float pi, int jariJari) {
    float hasil = pi * (jariJari * jariJari); // Calculate area
    printf("%f * (%d * %d) = %f\n", pi, jariJari, jariJari, hasil); // Print calculation
    return hasil; // Return area
}


int main () {
    addition(5,4,2);
    printf("\n\n");
    perkalian(3,5,3);
    printf ("\n\n");
    pengurangan(30,5,15);
    printf("\n\n");
    luasLingkaran(3.14,2);
    return 0;
}

//nama kelompok 4
// ADHAN,ANISA,RIVALDO,SYAIKKAH,PETER
