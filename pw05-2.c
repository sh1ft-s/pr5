#include <stdio.h>

int main(){
    const int HEIGHT = 5;
    int num = 2;

    for (int i = 0; i < HEIGHT; i++){
        for (int s = 0; s < HEIGHT - 1 - i; s++){
            printf("    ");
        }

        for (int j = 0; j < 2 * i + 1; j++){
            printf("%3d ", num);
            num += 2;
        }

        printf("\n");
    }

    return 0;
}