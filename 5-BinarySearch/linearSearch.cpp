#include<iostream>
using namespace std;

int findMax ( int arr[], int size) {
    int max = INT32_MIN;
    for(int i = 0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[5] = {0, 2, 5, 1, 7};

    cout<<"max element is "<<findMax(arr, 5);

    return 0;
}