#include <stdio.h>

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    double avg = calculateAverage(numbers, n);
    printf("Average: %.2lf\n", avg);

    return 0;
}
