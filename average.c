#include<stdio.h>
int main() {
    int a,b,c, sum, average;
    printf("enter the 3 dgit value: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    average = sum/3;
    printf("sum is : %d\n", sum);
    printf("average is : %d", average);
}