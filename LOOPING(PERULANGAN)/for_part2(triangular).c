#include <stdio.h>

void main(){
    int i, j, jumlah;
    printf("Masukkan bilangan triangular = ");
    scanf("%d", &i);
    for(int j=i-1; j>0; j--){
            i+=j;
    }
    printf("\n");
    printf("hasil : %d\n", i);
}