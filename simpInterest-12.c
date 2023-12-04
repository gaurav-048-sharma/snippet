#include<stdio.h>
int main() {
    int p, t, simpleInterest;
    float r;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    simpleInterest = (p * t) * r / 100;
    printf("\nThe Simple Interest is %d.", simpleInterest);
    return 0;
}