#pragma once
#include "Person.h"
#include <string>
class Worker : public Person
{
private:
	std::string prof = "";

public:
	Worker() = default;
	Worker(const std::string_view &name_, const int age_, const std::string &prof_);

	inline std::string getProf() const { return prof; };

	void showVirt() const override;
};
