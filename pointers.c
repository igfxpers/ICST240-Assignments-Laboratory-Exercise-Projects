#include<stdio.h>

int main(){

    float *p, *q, A = 2.3, B = 456.9;
    p = &A;
    printf("*p = %.2f A = %.2f p = %p\n", *p,A,p);
    q = p;
    printf("*p = %.2f A = %.2f p = %p\n", *q,A,q);
    p = &B;
    printf("*p = %.2f A = %.2f p = %p\n", *p,B,p);
    return 0;
}