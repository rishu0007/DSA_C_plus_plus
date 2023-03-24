#include<iostream>
using namespace std;

int& func(int a) {
    int num = a;
    int &ans = num;
    return ans;
}

void update2(int &n) {
    n++;
    
}

void update1(int n) {
    n++;

}

int main() {

    int n = 5;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    func(n);

    return 0;
}