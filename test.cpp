#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    map<int, string> myMap;

    myMap.insert(make_pair(1, "Matvey"));
    myMap.insert(make_pair(2, "Khanzhin"));
    myMap.insert(make_pair(3, "Aleksandrovich"));

    map<int, string>::const_iterator it;
    it = myMap.begin();

    while (it != myMap.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
}