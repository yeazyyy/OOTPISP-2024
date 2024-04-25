#pragma once
#include <string>

class Person
{
private:
	std::string name;
	int age;
	Person *next = nullptr;

public:
	Person() = default;
	explicit Person(const std::string_view &name_, const int age_);
	inline std::string getName() const { return name; };
	inline int getAge() const { return age; };
	inline Person *getNext() const { return next; };

	void showNVirt() const;
	virtual void showVirt() const;

	void add();

	void setName(const std::string_view &name_);
	void setAge(const int age_);

	virtual ~Person() = default;

	static void printAll();

protected:
	void setNext(Person *nextNode);
	static Person *begin;
	static Person *last;
};
