#include <stdio.h>
#include <math.h>

double calc(double a, double b){
    return sin(a)*cos(b) + cos(a)*sin(b);
}

int main(){
    double a, b;

    printf("Введите a и b:\n");

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        double result = calc(a, b);
        printf("Результат: %.4f\n", result);
        printf("Введите a и b:\n");
    }

    return 0;
}