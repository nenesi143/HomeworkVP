#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main(){

    // Создание контейнера, сортировка, вывод 1, 2, 3 пункты задания

    srand(time(0));
    vector<long> myVector;

    for (int i = 0; i < 10; i++){
        myVector.push_back(rand() % 100);
    }
    
    vector<long>::const_iterator it = myVector.begin();

    cout << "Default container" << endl;

    while (it != myVector.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    sort(myVector.begin(), myVector.end(), greater<long>());
    it = myVector.begin();

    cout << "Sorted in descending container" << endl;

    while (it != myVector.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Нахождение элементов, перенос во второй контейнер, вывод этого контейнера 4, 5, 6 пункты задания

    vector<long> myVector2;

    int filter;
    cout << "More than: ";
    cin >> filter;

    copy_if(myVector.begin(), myVector.end(), back_inserter(myVector2), [filter](long x) {return x > filter;});

    it = myVector2.begin();

    while (it != myVector2.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Сортировка по возрастанию, вывод контейнеров, слияние 7, 8, 9 пункты задания

    sort(myVector.begin(), myVector.end());
    sort(myVector2.begin(), myVector2.end());

    cout << "Sorted in ascending order" << endl;

    it = myVector.begin();

    while (it != myVector.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    it = myVector2.begin();

    while (it != myVector2.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    vector<long> merged;
    merged.insert(merged.end(), myVector.begin(), myVector.end());
    merged.insert(merged.end(), myVector2.begin(), myVector2.end());
    
    it = merged.begin();

    cout << "Merged container" << endl;

    while (it != merged.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Есть ли элементы, удовлетворяющие условию в 3 контейнере 11, 12 пункты задания

    int count = count_if(merged.begin(), merged.end(), [](long x) {return x % 2 == 0;});

    if (count != 0){
        cout << "Number of even elements: " << count << endl;
    }
    else{
        cout << "There are no even elements" << endl;
    }
}
