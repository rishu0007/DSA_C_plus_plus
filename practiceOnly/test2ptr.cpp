#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subarraySum(vector<int> &arr, int k) {
    int n = arr.size();
    int start = 0;
    int end = 0;
    int currSum = 0;

    vector<vector<int>> subarrays;

    while (end < n) {
        currSum += arr[end];

        while (currSum > k && start <= end) {
            currSum -= arr[start];
            start++;
        }

        // If the current sum equals the target sum, store the subarray
        if (currSum == k) {
            vector<int> subarray;
            for (int i = start; i <= end; i++) {
                subarray.push_back(arr[i]);
            }
            subarrays.push_back(subarray);
        }
        
        end++;
    }

    return subarrays;
}

int main() {

    vector<int> arr = {1,2,3};
    int k = 3;

    vector<vector<int>> subarr = subarraySum(arr,k);

    for(int i = 0; i < subarr.size(); i++) {
        for(int j = 0; j < subarr[i].size(); j++) {
            cout << subarr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}