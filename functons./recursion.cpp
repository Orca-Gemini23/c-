#include <iostream>
using namespace std;

double factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}

int main(){
    double number;
    cout << "Enter the number: ";
    cin  >> number;
    cout << factorial(number) << endl;
    return 0;
}