#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 0;
    while ( n%2 == 0) {
        i++;
        n = n/2;
    }
    cout << i;
}