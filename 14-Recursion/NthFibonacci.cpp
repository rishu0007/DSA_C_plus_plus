// Program to find Nth fibonacci number using Recursion. In this program we calculated fibonacci number
// using multiple recursive calls that is in this program we called recursive functions f(i-1) and f(i-2)

#include<iostream>
using namespace std;

int f(int i) {
    if( i <= 1 )
        return i;

    int secondLast = f(i-1);
    int last = f(i-2);

    return secondLast + last;
}

int main() {
    int n;
    cin >> n;

    cout << n << "th Fibonacci number is " << f(n) << endl;

    return 0;
}