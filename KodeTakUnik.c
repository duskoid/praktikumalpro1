
#include <stdio.h>

int main (){
    /*Kamus*/
    long n, sum, satuan;
    
    scanf ("%ld", &n);
    while (n != 0){
        satuan = n % 10;
        sum  += satuan;
        n /= 10;
    } 

    while (sum > 9){
        n = sum;
        sum = 0;
        while (n != 0){
            satuan = n % 10;
            sum  += satuan;
            n /= 10;
        }
    }
    printf("%ld\n", sum);

    return 0;
}