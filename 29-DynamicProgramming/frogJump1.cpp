// There is a frog on the '1st' step of an 'N' stairs long staircase. 
// The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th' 
// stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by
// absolute value of ( HEIGHT[i-1] - HEIGHT[j-1]). If the Frog is on 'ith' staircase, 
// he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum 
// total energy used by the frog to reach from '1st' stair to 'Nth' stair.

#include<bits/stdc++.h>
using namespace std;

int frogJump(int ind, vector<int>& v, vector<int>& dp) {
    if(ind == 0) return 0;
    if(dp[ind] != -1) return dp[ind];
    int left = frogJump(ind-1,v,dp) + abs(v[ind] - v[ind-1]);
    int right = INT_MAX;
    if(ind > 1) right = frogJump(ind-2,v,dp) + abs(v[ind] - v[ind-2]);
    return dp[ind] = min(left,right);
}

int main() {
    int n = 4;
    vector<int> v = {10,20,30,10};
    vector<int> dp(n+1, -1);
    cout << frogJump(n-1,v,dp);

    return 0;
}