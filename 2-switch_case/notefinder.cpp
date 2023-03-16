#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int hun, fif, twn, one;
    switch(1) {
        case 1: hun = (num/100);
                num = num % 100;
                cout<<"Number of hundred rupee notes are:"<<hun<<endl;
        
        case 2: fif = num/50;
                num = num % 50;
                cout<<"Number of fifty rupee notes are:"<<fif<<endl;

        case 3: twn = num/20;
                num = num % 20;
                cout<<"Number of twenty rupee notes are:"<<twn<<endl;

        case 4: one = num/1;
                num = num % 1;
                cout<<"Number of one rupee coins are:"<<one<<endl;
    }
    return 0;
}