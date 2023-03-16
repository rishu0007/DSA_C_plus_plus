#include<iostream>
using namespace std;

int giveSubarr( int a[], int n, int s) 
{
    int l = 0, r = 0, csum = a[0];
    while(r < n) {
        if(csum == s) {
            return {l+1};
        }

        if( csum < s) {
            r++;
            csum += a[r];
            continue;
        }

        if(csum > s) {
            csum -= a[l];
            l++;
            continue;
        }
    }

} 

int main() {
    int arr[5] = {1, 2, 3, 7, 5};
    cout<<giveSubarr(arr, 5, 18);
    return 0;
} 