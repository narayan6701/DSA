#include <stdio.h>

// Function Declaration
int sum(int a, int b);

// Function Definition
int sum(int a, int b) {
    return a + b;
}

int main() {
    int result;
    result = sum(5, 3); // Function Call
    printf("The sum is: %d\n", result);
    return 0;
}



