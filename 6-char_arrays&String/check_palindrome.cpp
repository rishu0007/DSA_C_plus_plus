#include<iostream>
using namespace std;

char toLower(char ch) {
    if ( ch >= 'a' && ch <= 'z')
        return ch;
    
    else {
        char temp = ch - 'A' + 'a';
    }
}

bool checkPalindrome( char a[], int n ) {
    int s = 0;
    int e = n-1;
    while ( s <= e) {
        if ( toLower( a[s] ) != toLower( a[e] ) )
            return 0;

        else {
            s++;
            e--;
        }     
    }
    return 1; // idhar tak aa gaye ho to tum palindrome hi ho 
}

void reverse( char name[], int n ) {
    int s = 0;
    int e = n-1;
    while ( s < e) {
        swap ( name[s++], name[e--]);
    }
}

int getLength( char name[] ) {
    int count = 0;
    for ( int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Length of char arry is " << getLength(name) << endl;
    int length = getLength(name);

    reverse( name, length );

    cout << "String after reverse is: " << name << endl;

    cout<< "Palindrome or not: " << checkPalindrome(name, length) << endl;

}