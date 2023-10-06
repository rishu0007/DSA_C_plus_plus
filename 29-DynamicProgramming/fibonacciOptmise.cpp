#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    for(int i = 2; i <= n; i++) {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    cout << prev;

    return 0;
}

// TC O(N), SC O(1)