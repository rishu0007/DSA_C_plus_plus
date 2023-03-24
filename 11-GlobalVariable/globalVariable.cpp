#include<iostream>
using namespace std;

int score = 15;  // Global Variable

void a (int &i) {
    cout << score << " in a" << endl;
    cout << i << endl;
}

int main() {
    
    cout << score << " in main function " << endl;

    int i = 5;
    a(i);


    return 0;
}