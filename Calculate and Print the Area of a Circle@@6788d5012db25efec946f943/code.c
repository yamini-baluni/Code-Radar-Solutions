#include <stdio.h>
#define  PI 3.14159
int main() {
    float radius, Area;
    printf("enter:");
    scanf("%f", &radius);
    Area = PI*radius*radius;
    printf("Area: %.2f\n",Area);
    return 0;
}