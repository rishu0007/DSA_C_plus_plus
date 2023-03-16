#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2; //we applied this formula for mid because we want to avoid error due to large integer values like 2^31-1

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        //going to right wala part as arr[mid] < key
        if(key > arr[mid]) {
            start = mid + 1;
        }

        else {
            //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1; //key not found
}

int main() {
    
    int even[] = {2,4,6,8,12,18};
    int odd[] = {3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 6);
    cout<<"Index of 6 is:"<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 14);
    cout<<"Index of 14 is:"<<oddIndex<<endl;

    return 0;
}