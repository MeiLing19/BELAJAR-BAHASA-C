#include <stdio.h>

void main (){

int i, a=0, b=1, c, n;
    for (i=0; i<12; i++){
        a=b;
        b=c;
        c=a+b;

        printf ("%d ",c);
    }
}
