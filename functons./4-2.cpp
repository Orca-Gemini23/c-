#include<iostream>
using namespace std;

void matrix(int m, int n){
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[10];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter the elements: " << i << j;
            cin >> arr[j];
        }
    }
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << j << " ";
        }
    }
}

int main(){
    int r, c;
    cin >> r >> c;
    matrix(r , c);
    return 0;
}

