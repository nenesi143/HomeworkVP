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

    // Просмотр изначального контейнера 1, 2 пункт задания

    while (it != myMap.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // Просмотр измененнного контейнера 3, 4 пункт задания

    it = myMap.begin();

    myMap.erase(2);
    myMap.insert(make_pair(2, "Krashovskii"));

    while (it != myMap.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // Создаю второй контейнер, 5 пункт задания

    map<int, string> myMap2;
    map<int, string>::const_iterator it2;

    myMap2.insert(make_pair(1, "Name"));
    myMap2.insert(make_pair(2, "Surname"));

    // Удаление элементов из 1 контейнера и перенос из второго контейнера 6, 7 пункт задания

    int n, key;

    cout << "Input n: "; // Кол-во элементов
    cin >> n;
    cout << "Input key: ";
    cin >> key;

    it = myMap.find(key);
    if (it != myMap.end()){
        for (int i = 0; i < n and it != myMap.end(); i++){
            auto toErase = it++;
            myMap.erase(toErase); 
        }
    }

    myMap.insert(myMap2.begin(), myMap2.end());

    it = myMap.begin();

    cout << "New myMap" << endl;
    while (it != myMap.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    cout << "MyMap2" << endl;

    it = myMap2.begin();

    while (it != myMap2.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
}