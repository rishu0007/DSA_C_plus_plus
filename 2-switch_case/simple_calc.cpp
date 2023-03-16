#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter the two numbers here:";
    cin>>a>>b;
    char op;
    cout<<"Enter the operation you want to perform:";
    cin >> op;
    switch(op) {
        case '+': cout<<(a+b);
        break;

        case '-': cout<<(a-b);
        break;

        case '*': cout<<(a*b);
        break;

        case '/': cout<<(a/b);
        break;

        case '%': cout<<(a%b);
        break;

        default : cout<<"Enter the valid operation!!";
    }
    return 0;
}