#include<iostream>
#include "refactor_from.h"

using namespace std;

int main() {
    int A, B, C;

    cout << "What is side A? ";
    cin >> A;
    cout << "What is side B? ";
    cin >> B;
    cout << "What is side C? ";
    cin >> C;

    cout << "The area is: " << getArea(A, B, C);

}