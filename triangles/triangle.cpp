#include<iostream>
#include<cmath>

using namespace std;

void sayHello() {
    cout << "HELLO!"<<endl;
}

int main() {
    int A, B, C;

    cout << "What is side A? ";
    cin >> A;
    cout << "What is side B? ";
    cin >> B;
    cout << "What is side C? ";
    cin >> C;

    float s = (A+B+C)/2;
    double area = sqrt(s*(s-A)*(s-B)*(s-C));

    cout << "The area is: " << area;
    return 0;
}