#include<iostream>
using namespace std;
    // 1-> even
    // 0 -> odd

bool isEven(int a) {
    if(a & 1) {
        return 0;
    }

    return 1;
}

int main() {
    int num;
    cin>>num;
    
    // since the function "isEven" is returning boolean value so we wrote it inside if statement 
    // so if the value of isEven() is true that is 1, then the statement "Number is even" will be printed 

    if( isEven(num) ) {
        cout<<"Number is even"<<endl;
    }
    else {
        cout<<"Number is odd"<<endl;
    }
    return 0;
}