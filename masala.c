#include <stdio.h>

int main(){
    int x;

    x = 15;
    int *pointer_x = &x;
    *pointer_x = 25;
    printf("Yangi qiymat: %d", *pointer_x);
}