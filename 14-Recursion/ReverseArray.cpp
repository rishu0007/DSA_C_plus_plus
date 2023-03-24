#include<iostream>
using namespace std;

void reverseArr(int s, int arr[], int e) {
    if (s >= e)
        return;

    swap(arr[s], arr[e]);

    reverseArr(s+1, arr, e-1);
}

int main() {

    int arr[5] = {1,2,3,4,5};

    reverseArr(0, arr, 4);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " " ;
    }

    return 0;

}