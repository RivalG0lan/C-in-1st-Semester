#include <stdio.h>

/*
void main(){
    int matriks[3][3] = {
        {1, 3, 5},
        {5, 3, 1},
        {6, 2, 3}
    };

    printf("Isi Data pada indeks ke-(2,1): %d\n", matriks[2][1]);
}
*/



void main(){
    // membuat array dari tinggi badan
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};

    //  length itu sama dengan n
    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += tinggi_badan[i];
    }

    // rata-rata tinggi badanS
    float rata_rata = (float)sum / (float)length;

    printf("Rata-rata tinggi badan: %.2f\n", rata_rata);
}


/*
void main () {
    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };


    int size = sizeof(array);


    int length = sizeof(*array);

    printf("\t %i\n", length);
}
*/


/*
void main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    // mencetak isi array dengan perulangan
    int length = sizeof(nilai) / sizeof(*nilai);
    for (int i = 0; i < length; i++){
        printf("Nilai ke-%d: %d\n", i,nilai[i]);
    }
}
*/


/*
void main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    // mencetak isi array dengan perulangan
    for(int i = 0; i < 5; i++){
       printf("Nilai ke-%d: %d\n", i ,nilai[i]);
    }
}
*/
