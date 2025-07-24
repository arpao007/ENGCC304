#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter N : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Index:");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("Array:");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%3d", arr[i]);
        else
            printf("%3s", "#");
    }
    printf("\n");

    return 0;
}