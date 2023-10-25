#include<iostream>
#include<vector>
using namespace std;

int findOdd() {
    int ans = 0;
    for(int i = 1; i <= 50; i++) {
            if(i % 2 != 0) {
                ans += i;
            }
    }
    return ans;
}

int findSum(string input) {
    int anss;
    if(input == "odd") {
        anss = findOdd();
    }
    else if(input == "even") {
        for(int i = 1; i <= 50; i++) {
            if(i % 2 == 0) {
                anss += i;
            }
        }
    }
    else {
        for(int i = 1; i <= 50; i++) {
            anss += i;
        }
    }
    return anss;
}

int main() {

    string input;
    cin >> input;

    int res = findSum(input);

    cout << res;

    return 0;
}