#include<stdio.h>
#include<math.h>
int main() {
    float area, circum, PI=3.14, radius, periRectangle, triangle, areaRectangle;
    float length= 9, width = 6;
    printf("radius value: ");
    scanf("%f", &radius);
    area = 2 * PI * (radius*radius);
    circum = 2 * PI * radius;
    triangle = sqrt(pow((5+6), 2) + pow((7-8), 2));
    periRectangle= 2 * (length + width);
    areaRectangle = length * width;
    printf("\nArea of the Circle is %f\n", area);
    printf("Circumference of the Circle is %f\n", circum);
    printf("Area of the equivalent Triangle is %f\n", triangle);
    printf("Perimeter of Rectangle is %f\n", periRectangle);
    printf("Area of the Rectangle is %f\n", areaRectangle);
    return 0;
}