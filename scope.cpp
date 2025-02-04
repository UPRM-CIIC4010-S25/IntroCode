#include<iostream>

using namespace std;

// Parameter b is a local variable
int add_ten(int b) {
    int a = 10; // Local variable a
    return b + a;
}
// Global variable a
int a = 25; 
int main() {
    int a = 12; // Local variable a
    int b = 20; // Local variable b
    cout << add_ten(a) << endl;

}