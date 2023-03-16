#include<iostream>
using namespace std;

int getMin(int num[], int n) {
    int mini = INT32_MAX;
    for( int i=0; i<n; i++) {

        //min is predefined function which will return the minimum of mini and num[i]
        mini = min(mini, num[i]);
    }

    //returning minimum value
    return mini;
}

int getMax(int num[], int n) {
    int maxi = INT32_MIN;
    for(int i=0; i<n; i++) {

        //max is predefined function which will return the maximum of maxi and num[i]
        maxi = max(maxi, num[i]);
    }

    //returning maximum value
    return maxi;
}

int main() {
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++) {
        cin>>num[i];
    }

    cout<<"Maximum element of the array is:"<<getMax(num,size)<<endl;
    cout<<"Minimum element of the array is:"<<getMin(num,size)<<endl;
}