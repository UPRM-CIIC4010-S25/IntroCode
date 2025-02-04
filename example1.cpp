#include <iostream>
using namespace std;

double getSum(double a, double b) {
    double sum = a + b;
    return sum;
}
int main()
{
    double num1 = 5;
    double num2, sum;
    num2 = 12;
    sum = getSum(num1, num2);
    cout << "The sum is " << sum << " Yay!";
    
}
