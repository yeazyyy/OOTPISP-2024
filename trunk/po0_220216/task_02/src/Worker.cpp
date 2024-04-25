#include "Worker.h"
#include <string>
#include <iostream>
using namespace std;

Worker::Worker(const std::string_view &name_, const int age_, const std::string &prof_) : Person(name_, age_), prof(prof_)
{
}

void Worker::showVirt() const
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