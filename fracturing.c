// ********************************************************
// fall-2024-cop-3223-assignment1.c
// Author: Cameron Kayghobadi
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: The assignment teaches students how to make a 
// program by breaking it into smaller functions that convert specific tasks, like calculating distance, perimeter,
// area, width, and height.
// Input: The program takes four inputs: the x and y coordinates for two points (x1, y1) and (x2, y2).
//
// Output: The program takes four inputs: there is the x and y coordinates for two points (x1, y1) and (x2, y2).
// ********************************************************

#include <stdio.h>
#include <math.h>

// Define constant
#define PI 3.14159

// Functions
int main();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate distance 
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // Ask for the coordinates
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Calculate the actual distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Prints the points and distance
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate perimeter using the distance
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;

    // Print the perimeter
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return perimeter;
}

// Function to calculate area using the distance
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * radius * radius;

    // Print the area
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return area;
}

// Function to calculate width between two points
double calculateWidth() {
    double x1, x2, width;

    // Ask user for the coordinates
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter x2: ");
    scanf("%lf", &x2);

    // Calculate width
    width = fabs(x2 - x1);

    // Print the width
    printf("Point #1 entered: x1 = %.2lf\n", x1);
    printf("Point #2 entered: x2 = %.2lf\n", x2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return width;
}

// Function to calculate height between two points
double calculateHeight() {
    double y1, y2, height;

    // Ask for the coordinates
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Calculate height
    height = fabs(y2 - y1);

    // Print the height
    printf("Point #1 entered: y1 = %.2lf\n", y1);
    printf("Point #2 entered: y2 = %.2lf\n", y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return height;
}
