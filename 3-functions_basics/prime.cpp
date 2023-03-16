#include<iostream>
using namespace std;

//1 -> prime number 
//0 -> not a prime number
bool isPrime(int n) {
    for (int i=2; i<n; i++) {

        //agar divide hua to not a prime number
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    if(isPrime(n)) {
        cout<<"Number is Prime"<<endl;
    }
    else {
        cout<<"Number is not Prime"<<endl;
    }
    
}