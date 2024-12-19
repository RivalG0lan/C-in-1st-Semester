#include <stdio.h>
#include <stdlib.h>
float mampua1, mampua2;
char nama[40];

float ukuranJempol(float jempolKiri, float jempolKanan) {
    printf("Masukkan panjang jempol KIRI anda !\n");
    scanf(" %f", & jempolKiri);
    printf("Masukkan panjang jempol KANAN anda !\n");
    scanf (" %f", &jempolKanan );
    float totalpanjangJempol = (jempolKanan + jempolKiri);
    printf("\n\nMaka panjang total ukuran jempol anda = %.2f ", totalpanjangJempol);
    return totalpanjangJempol;
}

void sapaan(char penamaan[]) {
    printf("Harap masukkan nama anda ya !\n");
    scanf("%[^\n]", penamaan);
    printf("hallo kawanku %s\n", penamaan);

}

int main () {
    sapaan(nama);
    ukuranJempol(mampua1, mampua2);
    return 0;
}
