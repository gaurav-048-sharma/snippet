#include<stdio.h>
int main() {
    int p, t;
    float r, compInterest;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);
    compInterest = p + ((p * t) * r / 100);
    printf("\nThe Compound Interest is %f", compInterest);
    return 0;
}