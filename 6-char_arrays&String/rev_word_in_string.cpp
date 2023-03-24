#include<iostream>
#include<string.h>
using namespace std;

int main() {
    string str = "my name is rishu";

    int start = 0;
    int p = 0;

    for ( int i = 0; i <= str.size(); i++ ) {

        if ( str[p] == ' ' || str[p] == '\0') {
            int end = p-1;

            while ( start <= end ) {
                swap( str[start++] , str[end--]);
            }
            
            start = p + 1;
        } 

        p++;

    }

    cout<<str;

}