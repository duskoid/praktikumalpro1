#include <stdio.h>

int main (){
    int n, x, jmlgenap = 0, jmlganjil = 0, sblmx = 1; // sblmx = angka sebelum x, buat ngekeep track nilai 0
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        //syarat terjadinya operasi adalah di input sebelumnya TIDAK ADA input 0
        if (x%2 == 0 && sblmx != 0){
            jmlgenap += x;
        } else if (x%2 !=0 && sblmx != 0){
            jmlganjil += x;
        }
        //memastikan angka sebelum x ngga berubah lagi jika ketemu 0, shg kalo sekali ketemu 0, operasi penjumlahan tdk dilanjut
        if (sblmx != 0){
            sblmx = x;
        }
    }
    
    printf ("%d %d\n", jmlgenap, jmlganjil);
    return 0;
}
