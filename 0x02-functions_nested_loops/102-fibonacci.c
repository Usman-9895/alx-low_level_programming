#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
void print_fibonacci(int n);

int main() {
    print_fibonacci(50);
    return 0;
}

void print_fibonacci(int n) {
    int first = 1, second = 2, next, i;
    printf("%d, %d", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

