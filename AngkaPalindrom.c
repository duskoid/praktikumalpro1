#include <stdio.h>

int main(){
    //kamus
    int n, sat, m, reversen=0; //n = angka input, m = n yang akan dikurangi angka satuannya setiap iterasi, sat = angka satuan, reversen = n tapi dari belakang
    scanf("%d", &n);
    //assing m dengan nilai m untuk diambil satuannya
    m = n;

    while(m != 0){
        sat = m % 10;
        reversen = reversen*10 + sat;
        m /= 10;
    }
    if (reversen == n){
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}   