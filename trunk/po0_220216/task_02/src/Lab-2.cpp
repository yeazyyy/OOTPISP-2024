#include <iostream>.
#include "Engineer.h"
#include "Worker.h"
#include "Empl.h"
#include "Person.h"


using namespace std;

int main()
{
	auto empl_1 = Empl("Maks", 52, 25);
	auto engineer_1 = Engineer("Ignat", 41, "driver", "higher");
	auto worker_1 = Worker("Egor", 88, "student");
	auto person = Person();

	empl_1.setAge(25);

	person.setAge(11);
	person.setName("Gleb");
	person.add();
	cout << "NON VIRTUAL:" << endl;
	worker_1.showNVirt();

	cout << endl << "VIRTUAL:" << endl;
	engineer_1.showVirt();
		

}
