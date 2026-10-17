#include <stdio.h>

int katta(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Katta son: %d", katta(a, b));

}