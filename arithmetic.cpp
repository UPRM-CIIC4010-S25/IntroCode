#include<iostream>

using namespace std;

float sum(float A, float B) {
    return A + B;
}
float subtract(float A, float B) {
    return A-B;
}
float multiply(float A, float B) {
    return A*B;
}
float division(float A, float B) {
    if(B == 0){
        cout << "Division by 0!!";
        return -1;
    }
    else{
        return A/B;
    }
}
float modulo(int A, int B) {
    return A%B;
}
int main() {
    cout << "Example of aritmetic operations:\n";
    // Just a variable declaration, not initialized
    float var;
    // Variable was both declared and initialized
    float var1 = 25;
    // Variable was initialized
    var = 0;
    /* 
    Variables can have numbers in the names
    but cannot start with a number
    */
    int s8t = 0;
    int h8t= 0;
    // Applying different arithmetic operations
    cout << var1 << "+" << var << "=" << sum(var1, var) << endl;
    cout << var1 << "-" << var << "=" << subtract(var1, var) << endl;
    cout << var1 << "*" << var << "=" << multiply(var1, var) << endl;
    // No error when dividing by 0
    cout << var1 << "/" << var << "=" << division(var1, var) << endl;
    cout << var1 << "%" << var << "=" << modulo(var1, var) << endl;
    
}


