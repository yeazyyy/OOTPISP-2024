#pragma once
#include "Person.h"

class Empl : public Person
{
private:
	int exp;

public:
	Empl() = default;
	Empl(const std::string_view &name_, const int age_, const int exp_);

	void set(const std::string &name_, const int age_, const int exp_);

	inline int getExp() const { return exp; };

	void showVirt() const override;
};
