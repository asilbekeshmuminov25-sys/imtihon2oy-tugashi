#include <stdio.h>
#include <string.h>

int main() {
    char soz[100];

    scanf("%99s", soz);

    printf("Uzunligi: %lu", strlen(soz));

}