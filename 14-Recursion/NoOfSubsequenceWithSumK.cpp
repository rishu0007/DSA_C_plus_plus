#include<iostream>
using namespace std;

int printS(int index, int s, int sum, int arr[], int n) {
    if(index == n) {
        if (s == sum)
            return 1;
        else {
            return 0;
        }
    }

    s += arr[index];
    int l = printS(index+1,s,sum,arr,n);

    s -= arr[index];
    int r = printS(index+1,s,sum,arr,n);

    return l+r;
}

int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;

    cout << "Number of subsequences with sum " << sum << " : " << printS(0,0,sum,arr,n);

    return 0;
}