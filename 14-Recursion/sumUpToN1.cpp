// In this we have calculated the sum from 1 to N using recursion by functional way

#include<iostream>
using namespace std;

int sum(int n) {

    // base condition
    if ( n == 0 ) 
        return 0;
    
    return n + sum(n-1);
}

int main() {
    int n;
    cin >> n;

    int ans = sum(n);

    cout << ans << endl;

    return 0;
}