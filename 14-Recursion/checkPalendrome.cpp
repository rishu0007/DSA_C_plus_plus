#include<iostream>
#include<string.h>
using namespace std;

bool checkPalendrome(int i, string &name) {
    int n = name.length();
    if ( i >= n/2)
        return true;

    if ( name[i] != name[n-i-1] )
        return false;

    checkPalendrome(i+1, name);
}

int main() {

    string name = "madam";

    cout << checkPalendrome(0,name);

    return 0;
}