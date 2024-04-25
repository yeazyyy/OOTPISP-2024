#pragma once
#include "Worker.h"
#include <string>
class Engineer : public Worker
{
private:
	std::string education;

public:
	Engineer() = default;
	Engineer(const std::string_view &name_, const int age_, const std::string &prof_, const std::string &educ_);

	inline std::string getEduc() const { return education; };
	void showVirt() const override;
};
