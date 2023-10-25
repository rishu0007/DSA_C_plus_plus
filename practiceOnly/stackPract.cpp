#include<iostream>
using namespace std;

class Stack {
    public:
    int size;
    int top;
    int *arr;

    // constructor
    Stack(int size) {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } 
        else {
            cout << "underflow" << endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top < 0) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {

    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "The top element is " << st.peek() << endl;

    return 0;
}
