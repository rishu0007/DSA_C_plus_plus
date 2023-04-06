#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char level;

    Hero(int health) {
        cout << "this " << this << endl;
        this -> health = health;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
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
    Hero ramesh(10);
    cout << "Address of ramesh " << &ramesh << endl;
    ramesh.getHealth();

    return 0;
}