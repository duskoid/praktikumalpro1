#include <stdio.h>

int main(){
    //kamus
    int n, t; //n = luas awal, t = waktu
    scanf ("%d %d", &n, &t);
    for (int i = 1; i <= t; i++){
        n += 9;
        printf ("tahun ke-%d = %d\n", i, n);
    }
    return 0;
}