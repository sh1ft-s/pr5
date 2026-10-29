#include <stdio.h>
#include <math.h>

int main(){
    
    double A = 0.0;
    double B = 3.0;
    double H = 0.5;
    int i = 1;

    printf("Итерация\tX\t\tY\n");

    for (double x = A; x <= B; x += H){
        double y = exp(x);
        printf("%d\t\t%.4f\t\t%.4f\n", i++, x, y);
    }

    return 0;
}