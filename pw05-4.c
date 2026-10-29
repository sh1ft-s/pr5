#include <stdio.h>

int main(){
    const int SIZE = 8;
    double arr[SIZE];

    arr[0] = 1.0;
    arr[1] = 2.0;

    for (int i = 2; i < SIZE; i++)    {
        double sum = 0.0;

        for (int j = 0; j < i; j++){
            sum += arr[j] * arr[i - 1 - j];
        }

        arr[i] = sum + arr[i - 1];
    }

    double max = arr[0];

    printf("Числа Шредера: ");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr[i]);

        if (arr[i] > max){
            max = arr[i];
        }
    }

    printf("\nMAX: %.2f\n", max);

    return 0;
}