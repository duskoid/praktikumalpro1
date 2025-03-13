#include <stdio.h>

int main (){
    //kamus
    long n, sum, satuan;
    scanf ("%ld", &n);
    //add num n
    while (n != 0){
        satuan = n % 10;
        sum  += satuan;
        n /= 10;
    } 
    //add num of sum if sum still 2 digits
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
