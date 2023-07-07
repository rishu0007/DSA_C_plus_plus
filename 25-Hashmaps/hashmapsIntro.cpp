#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

    // creation
    unordered_map<string,int> m;

    // insertion

    //1
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string,int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    // what will happen

    // pahli bar insert krte hai to creation hoti hai and dushri bar inseert krte h to updation hotii h
   
    m["mera"] = 2;    

    // search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    cout << m["unknownKey"] << endl;
    cout << m.at("unknownKey") << endl;

    // size
    cout << m.size() << endl;

    // to check presence
    cout << m.count("love") << endl;

    // erase
    m.erase("love");
    cout << m.size() << endl;

    // for(auto i:m) {
    //     cout << i.first << " "  << i.second << endl;
    // }

    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}