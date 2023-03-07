/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, count = 0, i = 2;

    printf("Enter n: ");
    scanf("%d", &n);

    while (count < n) {
        if (isPrime(i)) {
            count++;
        }

        i++;
    }

    printf("%dth prime number is: %d", n, i-1);

    return 0;
}