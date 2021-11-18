#include <iostream>
using namespace std;
#define PI 3.14

// so overloading is mainly the compiler guessing the best data type for the function.

double area(double rad){
    long int result = PI * rad * rad;
    return result;
}

double area(int length, int breadth){
    double result = 0.5 * length * breadth;
    return result;
}

int main(){
    int rad, l, b;
    cout << "Enter the radius: ";
    cin >> rad;
    cout << "Enter the l and b: ";
    cin >> l >> b;
    int c = area(rad);
    int d = area(l, b);
    cout << c << endl;
    cout << d << endl;
    return 0;
}