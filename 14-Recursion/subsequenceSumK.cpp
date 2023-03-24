// Program to find subsequences with given sum

#include<iostream>
#include<vector>
using namespace std;

void printSub(int index, vector<int> &v, int s, int sum, int arr[], int n) {
    if (index == n) {
        if (s == sum) {
            for(int i : v) {
                cout << i << " " ;
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[index]);
    s += arr[index];
    printSub(index+1, v, s, sum, arr, n);

    v.pop_back();
    s -= arr[index];
    printSub(index+1, v, s, sum, arr, n);
}

int main(){

    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> v;
    cout << "Subsequence with sum " << sum << " are" << endl;
    printSub(0,v,0,sum,arr,n);

    return 0;
}