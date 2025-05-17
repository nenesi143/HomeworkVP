#include <iostream>
#include "Class.h"

void User::print() const{
    cout << m_name << " " << m_surname << " " << m_age << endl;
}