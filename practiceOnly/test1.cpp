// Given an integer array nums, return the length of the longest strictly increasing 
// subsequence
// .

 

// Example 1:

// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
// Example 2:

// Input: nums = [0,1,0,3,2,3] [2,1,4,6,5,3,7,8,9,10]
// Output: 4

#include<iostream>
#include<vector>
using namespace std;

int lis(vector<int> &v) {
    int n = v.size();
    int ans = 1;
    for(int i = 0; i < n; i++) {
        int val = v[i];
        int cnt = 1;
        for(int j = i+1; j < n; j++) {
            if(v[j] > val) {
                cnt++;
                val = v[j];
            }
        }
        ans = max(ans,cnt);
    }
    return ans;
}

int main() {
    vector<int> v = {10,9,2,5,3,7,101,18};

    int ans = lis(v);

    cout << ans << endl;

    return 0;
}