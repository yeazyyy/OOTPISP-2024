# Лабораторная работа №2 #

## Наследование и виртуальрые функции ##

## Вариант 2 ##

## Цель работы ##

Получить практические навыки создания иерархии классов и использования статических компонентов класса.

### Конструктор базового класса ###

``` c++
Person::Person(const string& name_, const int age_) :name(name_), age(age_)
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
```

### Статические поля класса ###

```c++
static Person* begin;
static Person* last;
```

#### Метод просмотра списка ####

```c++
void Person::printAll()
{
    auto ptr = begin;
    while (ptr != nullptr)
    {
        cout << ptr->getName() <<endl;
        cout << ptr->getAge() << endl;
        cout << endl;
        ptr = ptr->getNext();
    }
}
```

#### Метод добавления объекта в список ####

```c++
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
}```
