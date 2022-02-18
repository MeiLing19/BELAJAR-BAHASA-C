#include <stdio.h>
void main(){
 int i,j, n;
printf("masukan angka: ");
scanf("%d",&n);
 while(i<=4){
 int j=1;
 while(j<=i){
 printf("%d", j);
 j++;
 }
 printf("\n");
 i++;
 }
}