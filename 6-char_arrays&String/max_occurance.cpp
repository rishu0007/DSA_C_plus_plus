#include<iostream>
#include<string.h>

using namespace std;

char getMaxOccCharacter( string s ) {
    int arr[26] = {0};

    //create an array of count of character 
    for ( int i = 0; i < s.size(); i++ ) {
        char ch = s[i];
        int number = 0;
        if ( ch >= 'a' && ch <= 'z' ) {
            number = ch - 'a';
        }

        else {
            number = ch - 'A';
        }
        arr[number]++;
    }
    // find maximum occurence of character 
    int maxi = -1, ans = 0;
    for ( int i = 0; i < 26; i++ ) {
        if ( maxi < arr[i] ) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main () {
    string s;
    cin >> s ;

    cout << "Most occured character is: " << getMaxOccCharacter(s);

    return 0;
}