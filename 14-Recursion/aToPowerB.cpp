// Program to calculate a to the power b


#include<iostream>
using namespace std;
#define ll long long

ll int calPower(int a, int b) {
    if ( b == 0 ) {
        return 1;
    }

    if ( b == 1) 
        return a;

    int ans = calPower(a,b/2);

    if (b&1) {
        return a*ans*ans;
    }
    else {
        return ans*ans;
    }
}

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    ll int ans = calPower(a,b);

    cout << ans << endl;

    return 0;
}