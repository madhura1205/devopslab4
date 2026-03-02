#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 99, y = 88;
    printf("Sum: %d\n", add(x, y));
    return 0;
}
