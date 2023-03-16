#include<iostream>
using namespace std;

int getSum(int arr[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin>>size;

    int arr[100];
     for(int i=0; i<size; i++) {
        cin>>arr[i];
     }

     cout<<endl<<"Sum of elements of array-->"<<getSum(arr, size)<<endl;
}