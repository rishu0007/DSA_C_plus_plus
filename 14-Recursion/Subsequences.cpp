#include<iostream>
#include<vector>
using namespace std;

void printF(int ind, vector<int> &v, int arr[], int n) {
    if (ind == n) {
        for(int i : v) {
            cout << i << " ";
        }
        if(v.size() == 0) {
            cout << "{}" << endl;
        }
        cout << endl;
        return;
    }
// take or pick the particular index into the subsequence
    v.push_back(arr[ind]);
    printF(ind+1,v,arr,n);
    v.pop_back();
// not pick or not take condition, this element is not added to your sebsequence
    printF(ind+1,v,arr,n);
}

int main() {
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> v;
    printF(0,v,arr,n);

    return 0;
}