#include"stdio.h"


void suma(int a, int b, int *c){
    *c = a + b;
}

void multiplicacion(int a, int b, int *c){
    *c = 0;
    for(int i = 0; i < b; i++)
        suma(a, *c, c);
}

void main(){
    int a, b, c;
    a = 7, b = 8;
    multiplicacion(a, b, &c);
    printf("%d", c);
}