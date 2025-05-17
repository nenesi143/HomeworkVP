#include <iostream>

using namespace std;

class User {
    private:
        string m_name;
        string m_surname;
        int m_age;

    public:
        User(string name, string surname, int age) : m_name(name) , m_surname(surname), m_age(age) {};
        void print() const;
};