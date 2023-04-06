#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char level;

    Hero() {
        cout << "Constructor Called" << endl;
    }

    int getHealth() {
        return health;
    }

    char get Level() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    } 
};

int main() {

    // object created statically
    Hero ramesh;


/*
    // dynamic allocation
    Hero *b = new Hero;
    (*b).setLevel('A');
    (*b).setHealth(70);

    cout << "Health is : " << (*b).getHealth() << endl;
    cout << "Level is: " << (*b).level << endl;

    */

    return 0;
}