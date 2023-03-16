#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number-";
    cin >> n;
    int i = 1;
    int k = 0;
    while (i<=n){
        int j = 1;
        while ( j <= n){
            char ch = 'A' + k;
            cout<< ch;
            k = k + 1;
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}
