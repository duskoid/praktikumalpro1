#include <stdio.h>

int main(){
    //kamus
    int n, sat, m, reversen=0; //n = angka input, m = n yang akan dikurangi angka satuannya setiap iterasi, sat = angka satuan, reversen = n tapi dari belakang
    scanf("%d", &n);
    //assign m dengan nilai m untuk diambil satuannya
    m = n;
    //reversing n
    while(m != 0){
        sat = m % 10; //ambili satuan dengan cari sisa pembagian 10
        reversen = reversen*10 + sat; //taro angka satuan yang terakhir dibaca jadi puluhan, tambah dengan angka satuan yg baru diambil
        m /= 10; //hilangkan angka satuan m
    }
    if (reversen == n){
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}   
