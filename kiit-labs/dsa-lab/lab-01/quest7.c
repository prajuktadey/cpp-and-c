/*Define a structure for representing a point in two-dimensional Cartesian co-ordinate
system. Now, write a C program to perform the following tasks:
a. Compute the distance between two given points.
b. Compute the area of a triangle, given the co-ordinates of its three vertices.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
float x,y;
};


double getDistance(struct Point a, struct Point b)
{
    double distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}

double AreaTriangle(struct Point a, struct Point b, struct Point c)
{
    double area;
    area= (1.0/2.0)*(((a.x)*(b.y-c.y))+(b.x*(c.y-a.y))+(c.x*(a.y-b.y)));
}

    int main()
{
    struct Point a, b;
    printf("Enter coordinate of point a(x1,y1): ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter coordinate of point b(x2, y2): ");
    scanf("%f %f", &b.x, &b.y);
    printf("Distance between a and b: %f\n", getDistance(a, b));

    struct Point p,q,r;
    printf("Enter coordinate of point p(x1,y1): ");
    scanf("%f %f", &p.x, &p.y);
    printf("Enter coordinate of point q(x2, y2): ");
    scanf("%f %f", &q.x, &q.y);
    printf("Enter coordinate of point r(x3, y3): ");
    scanf("%f %f", &r.x, &r.y);
    printf("Area of a triangle: %f\n", AreaTriangle(p, q, r));


    return 0;
}
