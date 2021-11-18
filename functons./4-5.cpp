#include<iostream>
using namespace std;

void largest(int a, int b, int c){
    if(a > b && a > c){
        cout << "A is largest" << endl;
    }
    else if( b > c && b > a){
        cout << "B is largest" << endl;
    }
    else if(c > a && c > b){
        cout << "C is largest" << endl;
    }
    else{
        cout << "Error" << endl;
    }
}
int main(){
    int m, n, r;
    cin >> m >> n >> r;
    largest(m, n, r);
    return 0;
}