#include<iostream>
using namespace std;

double cube(int x){
    int result = x * x * x;
    return  result;
}
int main(){
    int c;
    c = cube(5);
    cout << c << endl;
    return 0;
}