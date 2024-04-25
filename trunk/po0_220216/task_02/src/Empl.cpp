#include "Empl.h"
#include <iostream>

using namespace std;

Empl::Empl(const std::string_view &name_, const int age_, const int exp_) : Person(name_, age_), exp(exp_)
{
}

void Empl::set(const std::string &name_, const int age_, const int exp_)
{
    this->setName(name_);
    this->setAge(age_);
    this->exp = exp_;
}

void Empl::showVirt() const
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