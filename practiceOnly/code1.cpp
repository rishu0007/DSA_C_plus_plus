// This is oops revision file


// 1 : Creating class and allocating object

// Static and Dynamic creation of object

// About constructor

#include<bits/stdc++.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;
    char *name;

    void print() {
        cout << endl;
        cout << "Name : " << this->name << endl;
        cout << "Health " << this->health << endl;
        cout << "Level " << this->level << endl;
    }
    
    Hero() {
        cout << "Default Constructor called " << endl;
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health) {
        this->health = health;  // kisi bhi current object ka address this me store rhta h. So, this is a pointer
        // for above health hum aisa bhi bol skte h ki object ke health me hum input health pass kr diye h
        cout << "this-> " << this << endl;
    }

    Hero(int health, char level) {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero& temp) {
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
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

    void setLevel(char l) {
        level = l;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

};

int main() {

    // *********** Deep and shallow copy ********
    Hero h1;
    h1.setHealth(12);
    h1.setLevel('D');
    char name[6] = "Rishu";
    h1.setName(name);

    h1.print();



    // // ******** Copy constructor *********
    // Hero suresh(70, 'C');
    // suresh.print();

    // // copy constructor called
    // Hero ritesh(suresh);
    // ritesh.print();



    // // ****** This keyword *******
    // Hero ramesh(10);
    // cout << "Address of Ramesh is : " << &ramesh << endl;



    // ***** Constructor Calling *********
    // cout << "hi" << endl;
    // Hero h1;  // constructor called
    // cout << "hello" << endl;
    // Hero *h2 = new Hero; // constructor called




    // ****** creation of object **********
    // // this is static allocation
    // Hero h1;

    // h1.setHealth(80);
    // h1.setLevel('A');

    // cout << "The level is: " << h1.getLevel() << endl;
    // cout << "The health is: " << h1.getHealth() << endl;

    // // this is dynamic allocation of object
    // Hero *h2 = new Hero;
    // h2->setHealth(90);
    // h2->setLevel('B');
    // cout << "Health is : " << h2->getHealth() << endl;
    // cout << "Level is : " << h2->level;


    return 0;
}