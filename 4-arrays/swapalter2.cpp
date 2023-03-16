#include<iostream>
using namespace std;

int main() {
    int odd[5]={5,7,2,1,0};

    for(int i=1; i<5; i+=2) {

        swap(odd[i], odd[i-1]);

    }
    for(int i=0; i<5; i++) {
        cout<<odd[i]<<" ";
    }
}