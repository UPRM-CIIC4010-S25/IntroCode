#include<cmath>

double getArea(double A, double B, double C) {
    float s = (A+B+C)/2;
    double area = sqrt(s*(s-A)*(s-B)*(s-C));

    return area;
}