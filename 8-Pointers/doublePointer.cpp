#include<iostream>
using namespace std;

void update(int **p) {
    // p = p + 1;
    //kuch change hoga?? -- No

    // *p = *p + 1;
    //kuch change hoga?? -- Yes

    **p = **p + 1;
    //kuch change hoga?? -- Yes

}

int main() {
/*
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl << "sab sahi chal raha hai" << endl ;

    cout << "printing p " << p << endl;
    cout << "address of p " << &p << endl;
    cout << "address of p " << p2 << endl;
    cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;
    
   cout << endl << endl;
   cout << "before " << i << endl;
   cout << "before " << p << endl;
   cout << "before " << p2 << endl;
   update(p2);
   cout << "After " << i << endl;
   cout << "After " << p << endl;
   cout << "After " << p2 << endl;
   cout << endl << endl;
*/

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;


    return 0;
}