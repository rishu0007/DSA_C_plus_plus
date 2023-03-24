#include<iostream>
using namespace std;

bool linearSearch(int i, int arr[], int n, int &key) {
    if( i == n) {
        return false;
    }
    if(arr[i] == key) {
        return true;
    }

    linearSearch(i+1,arr, n, key);

}

int main() {
    int arr[] = {1,2,45,22,67};
    int n = 5;
    int key = 67;
    bool ans = linearSearch(0,arr,n,key);
    cout << ans;

    return 0;
}