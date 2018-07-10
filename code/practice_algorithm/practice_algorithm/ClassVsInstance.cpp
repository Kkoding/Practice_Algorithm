#include <iostream>

using namespace std;

class Person {
public:
	int age;
	Person(int initialAge);
	void amIOld();
	void yearPasses();
};

Person::Person(int initialAge) {
	// Add some more code to run some checks on initialAge
	age = initialAge;
}

void Person::amIOld() {
	// Do some computations in here and print out the correct statement to the console 
	if (age < 0) {
		cout << "Age is not valid, setting age to 0." << endl;
		age = 0;
	}
	if (age < 13) cout << "You are young" << endl;
	else if (age < 18)
		cout << "You are teenager" << endl;
	else
		cout << "You are old" << endl;

}

void Person::yearPasses() {
	// Increment the age of the person in here
	age += 1;
}

int main()
{
	int t, age;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> age;
		Person p(age);
		p.amIOld();
		for (int j = 0; j < 3; ++j)
			p.yearPasses();
		p.amIOld();

		cout << endl;
	}
	// tetst
	system("pause");

}