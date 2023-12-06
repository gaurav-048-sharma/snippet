#include <stdio.h>

int main() {
    int F, C;
    printf("enter the Fahrenheit value : ");
    scanf("%d", &F);
    C = (F - 32) * 5/9;
    printf("the temperature in celcius is : %d", C);

    return 0;
}