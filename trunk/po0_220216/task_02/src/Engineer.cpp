#include "Engineer.h"
#include <string>
#include <iostream>

using namespace std;

Engineer::Engineer(const std::string_view &name_, const int age_, const std::string &prof_, const std::string &educ_)
    : Worker(name_, age_, prof_), education(educ_)
{
}

void Engineer::showVirt() const
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        cout << ptr->getName() << endl;
        cout << ptr->getAge();
        cout << endl;
        ptr = ptr->getNext();
        if (ptr == this->getNext())
            break;
    }
}