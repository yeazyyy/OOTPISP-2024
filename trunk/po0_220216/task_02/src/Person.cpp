#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const string_view &name_, const int age_) : name(name_), age(age_)
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {
        last->setNext(this);
    }
    last = this;
}

void Person::showNVirt() const
{
    cout << "non virtua;" << endl;
    auto ptr = begin;
    while (ptr != nullptr)
    {
        cout << ptr->getName() << endl;
        cout << ptr->getAge() << endl;
        cout << endl;
        ptr = ptr->getNext();
    }
}

void Person::showVirt() const
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        cout << ptr->getName() << endl;
        cout << ptr->age;
        ptr = ptr->next;
    }
}

void Person::add()
{
    if (begin == nullptr)
    {
        begin = this;
    }
    next = nullptr;
    if (last != nullptr)
    {

        last->setNext(this);
    }
    last = this;
}

void Person::setName(const string_view &name_)
{
    this->name = name_;
}

void Person::setAge(const int age_)
{
    this->age = age_;
}

void Person::printAll()
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        cout << ptr->getName() << endl;
        cout << ptr->getAge() << endl;
        cout << endl;
        ptr = ptr->getNext();
    }
}

void Person::setNext(Person *nextNode)
{
    next = nextNode;
}

Person *Person::begin = nullptr;
Person *Person::last = nullptr;