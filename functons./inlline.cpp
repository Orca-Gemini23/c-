#include<iostream>
using namespace std;

inline double product(int x, int y){
    return (x * y);
}

inline double div(int a, int b){
    return (x / y);
}

int main(){
    int a = 24;
    int b = 35;

    cout << product(a, b) << endl;
    cout << div(a, b) << endl;
    return 0;
}