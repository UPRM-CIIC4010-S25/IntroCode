#include<stdio.h>
#include<math.h>

int main() {
    int A, B, C;
    printf("What is side A?");
    scanf("%d", &A);
    printf("What is side B?");
    scanf("%d", &B);
    printf("What is side C?");
    scanf("%d", &C);

    float s = (A + B + C)/2;

    double area = sqrt(s*(s-A)*(s-B)*(s-C));

    printf("The area is %f", area);
}
