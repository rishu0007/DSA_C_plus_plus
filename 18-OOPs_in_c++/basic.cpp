#include<iostream>
using namespace std;

class Hero {
    // properties
    public:
    int health;
    char level;
};

int main() {

    // creation of Object
    Hero ramesh;

    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "heath is: " << ramesh.health << endl;
    cout << "level is: " << ramesh.level << endl;


    return 0;
}