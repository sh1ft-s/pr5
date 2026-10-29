#include <stdio.h>

int main(){
    int N;

    while (1){
        printf("Введите N (N <= 0 для выхода):\n");
        scanf("%d", &N);

        if (N <= 0)
            break;

        double sum = 0.0;

        for (int i = 1; i <= N; i++){
            double factorial = 1.0;
            double sign = -1.0;

            for (int k = 1; k <= i; k++){
                factorial *= k;
            }

            if (i % 2 == 0){
                sign = 1.0;
            }

            sum += (sign / factorial);
        }

        printf("SUM: %.6f\n", sum);
    }

    return 0;
}