#include <stdio.h>

// Function declaration
void add(int a, int b);

int main() {
    add(8, 30); // Function call
    return 0;
}

// Function definition
void add(int a, int b) {
    int c = a + b;
    printf("result = %d\n", c);
}
