#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int x = 0, y = 0;
    printf("Sum: %d\n", add(x, y));
    printf("Subtraction: %d\n", subtract(x, y));
    return 0;
}

