#include<iostream>
#include<vector>
using namespace std;

bool isprime(int n) {
    if(n == 1 || n == 0)
        return 0;
    
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        if(isprime(i))
            cout << i << " ";
    }

    return 0;
    
}