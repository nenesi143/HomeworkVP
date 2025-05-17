#include <iostream>
#include <list>
#include <iterator>
#include "Class.h"

using namespace std;

int main(){

    // Просмотр изначального контейнера 1, 2 пункт задания

    list<User> myList = {
        User("Matvey", "Khanzhin", 19),
        User("Motya", "Krashovskii", 143),
        User("first", "second", 20),
        User("Ogo", "Aga", 99)
    };

    list<User>::const_iterator it = myList.begin(); 

    cout << "Default list" << endl;

    while (it != myList.end()){
        it->print();
        it++;
    }

    // Просмотр измененнного контейнера 3, 4 пункт задания

    it = myList.begin();
    it = myList.erase(it);
    myList.insert(it, User("name", "surname", 100));

    it = myList.begin();

    cout << "Changed list" << endl;

    while (it != myList.end()){
        it->print();
        it++;
    }

    // Создаю второй контейнер, 5 пункт задания

    list<User> myList2 {
        User("Vsevolod", "Cherepanov", 18),
        User("Maxim", "Nespanov", 19)
    };

    // Удаление элементов из 1 контейнера и перенос из второго контейнера 6, 7 пункт задания

    int n, key;
    cout << "Input n: "; // Кол-во элементов
    cin >> n;
    cout << "Input key: ";
    cin >> key;

    it = myList.begin();
    advance(it, key - 1); // Увеличиваем итератор на key + 1

    for (int i = 0; i < n and it != myList.end(); i++){
        auto toErase = it;
        it = myList.erase(it);
    }

    it = myList.begin();

    it = myList.end();
    myList.insert(it, myList2.begin(), myList2.end());

    it = myList.begin();

    cout << "first container" << endl;

    while (it != myList.end()){
        it->print();
        it++;
    }

    cout << "second container" << endl;

    it = myList2.begin();
    
    while (it != myList2.end()){
        it->print();
        it++;
    }
}