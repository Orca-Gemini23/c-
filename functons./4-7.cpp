#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double power(double m, int n){
    double result = pow(m, n);
    return result;
}
double power(double m, long int n = 2){
    double result = pow(m, n);
    return result;
}

int main(){
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    int c = power(a, b);
    cout << c << endl;
    int d = power(a);
    cout << d << endl;
    return 0;
}