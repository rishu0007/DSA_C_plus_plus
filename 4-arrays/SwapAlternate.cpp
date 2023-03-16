#include<iostream>
using namespace std;
 void swapAlter(int arr[], int size) {
    for(int i=0; i<size; i=i+2) {

        if(i+1 < size) {
            
        swap(arr[i], arr[i+1]);

        }
    }
 }

 void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

 int main() {
    int arr[6]={1,3,2,7,11,8};
    int brr[5]={3,7,0,5,1};

    swapAlter(arr,6);
    swapAlter(brr,5);

    print(arr,6);
    print(brr,5);
    return 0;
 }