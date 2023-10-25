#include<iostream>
#include<map>
using namespace std;

int main() {
    // map<int,string> studends = {{1,"Rishu"},{2,"Shalu"},{3,"Ankit"},{4,"Ridhi"}};
    map<int,string> students;
    students[1] = "Rishu";
    students[2] = "Shalu";
    students[3] = "Ankit";
    students[4] = "Ridhi";
    students.insert(make_pair(5,"Bibha"));

    for(int i = 0; i < students.size(); i++) {
        cout << students[i] << endl;
    }

    return 0;
}