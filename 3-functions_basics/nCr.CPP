#include<iostream>
using namespace std;
int fac(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact= fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int nume = fac(n);

    int deno = fac(r) * fac(n-r);

    int ans = nume/deno;

    return ans;
}

int main() {
    int n, r;
    cin>>n>>r;
    int answer = nCr(n,r);
    cout<<"The value of nCr is:"<<answer<<endl;
}