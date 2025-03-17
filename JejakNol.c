#include <stdio.h>

int main (){
    int n, zeros = 0, temp;
    scanf ("%d", &n);
    
    for (int i = 1; i <= n; i++){
        if (i % 5 == 0 && i != 0){
            temp = i;
            while (temp % 5 == 0 && temp != 0){
                zeros++;
                temp /= 5;
            }
        }
    }
    printf ("%d\n", zeros);
    return 0;
}