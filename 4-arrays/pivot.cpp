#include<iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int sum = 0;
    int current = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    for ( int j = 0; j < size; j++) {
        if ( current == (sum - (current + arr[j])) )
        return j;

        current += arr[j];
    }
    return -1;
}



int main() {
    int arr[6] = {2, 3, -1, 8, 4};

    cout << "Pivote index is " << getPivot(arr, 6);

    return 0;
}