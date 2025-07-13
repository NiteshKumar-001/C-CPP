#include <stdio.h>

float circle_area(float radius) {
    return 3.14 * radius * radius;
}

float circle_perimeter(float radius) {
    return 2 * 3.14 * radius;
}

float rectangle_area(float length, float width) {
    return length * width;
}

float rectangle_perimeter(float length, float width) {
    return 2 * (length + width);
}

float square_area(float side) {
    return side * side;
}

float square_perimeter(float side) {
    return 4 * side;
}

float triangle_area(float base, float height) {
    return 0.5 * base * height;
}

float triangle_perimeter(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

int main() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    float length;
    printf("Enter the length: ");
    scanf("%f",&length);
    float width;
    printf("Enter the width: ");
    scanf("%f",&width);
    float side;
    printf("Enter the side: ");
    scanf("%f",&side);
    float base;
    printf("Enter the base: ");
    scanf("%f",&base);
    float height;
    printf("Enter the height: ");
    scanf("%f",&height);

    printf("Circle - Area: %.2f, Perimeter: %.2f\n", circle_area(radius), circle_perimeter(radius));
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", rectangle_area(length, width), rectangle_perimeter(length, width));
    printf("Square - Area: %.2f, Perimeter: %.2f\n", square_area(side), square_perimeter(side));
    printf("Triangle - Area: %.2f, Perimeter: %.2f\n", triangle_area(base, height), triangle_perimeter(side, side, side));

    return 0;
}
