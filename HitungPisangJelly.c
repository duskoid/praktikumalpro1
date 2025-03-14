#include <stdio.h>

int main (){
    int n, x, jmlgenap = 0, jmlganjil = 0, sblmx = 1;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        if (x%2 == 0 && sblmx != 0){
            jmlgenap += x;
        } else if (x%2 !=0 && sblmx != 0){
            jmlganjil += x;
        }
        if (sblmx != 0){
            sblmx = x;
        }
    }
    
    printf ("%d %d\n", jmlgenap, jmlganjil);
    return 0;
}