#include <iostream>
using namespace std;

int main() {
	int a,b;
	int t, res1, res2;
	for(int i = 0; i < t; i++) {
	    cin>>a>>b;
	    res1 = 7 - a;
	    res2 = 7 - b;
	    if (a > b) {
	        cout<<res1;
	    }
	    else {
	        cout<<res2;
	    }
	}
	return 0;
}