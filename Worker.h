#pragma
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

class Worker
{
protected:
	double salary;
public:
	virtual bool checkName(string fullname) = 0;
};

class FixedWorker : public Worker
{
private:
	string fixedNames[10] = { "Lewis Morris Brown", "Ansel Elliott Fletcher", "Leslie Cosmo Stanton", "Richard Tyson Hilton", "Lesley Don Elliston",
		"Milford Cameron Toft", "Jamison Mick Merritt", "Sarah Michelle Watison", "Noah Barney Devin", "Mike Bryon Robson" };
public:
	bool checkName(string fullname) {
		bool temp = false;
		for (int i = 0; i < size(fixedNames); i++) {
			if (fullname == fixedNames[i]) {
				temp = true;
				break;
			}
		}
		if (temp == true)
			return true;
		else
			return false;
	}
};

class UnfixedWorker : public Worker
{
private:
	string unfixedNames[6] = { "Sunday Tex Layton", "Mathiew John Robin", "Steve Harvey Acker", "David Fox Adams", "Jennifer Tyson Devin",
		"Olivia Alex Zester" };
public:
	bool checkName(string fullname) {
		bool temp = false;
		for (int i = 0; i < size(unfixedNames); i++) {
			if (fullname == unfixedNames[i]) {
				temp = true;
				break;
			}
		}
		if (temp == true)
			return true;
		else
			return false;
	}
};

