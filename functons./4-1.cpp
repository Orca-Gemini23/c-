#include<iostream>
using namespace std;
int main(){
    int m, n;
    int arr[10];

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter the array: " << i << j;
            cin >> arr[j];
        }
    }
    return 0;
}