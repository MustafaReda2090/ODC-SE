#pragma
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

class Product
{
public:
	virtual void checkStock(int n) = 0;
	virtual void removeProduct() = 0;
};

class Books : public Product
{
};

class Magazines : public Product
{
public:
	stack<string> magazines;
	Magazines() {
		magazines.push("Magazine 1");
		magazines.push("Magazine 2");
		magazines.push("Magazine 3");
		magazines.push("Magazine 4");
		magazines.push("Magazine 5");
		magazines.push("Magazine 6");
		magazines.push("Magazine 7");
		magazines.push("Magazine 8");
		magazines.push("Magazine 9");
	}
	void checkStock(int n) {
		if (n == 1) {
			if (magazines.size() > 3) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough magazines\n";
		}
		else if (n == 2) {
			if (!(magazines.empty())) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough magazines\n";
		}
		else
			cout << "Wrong choice\n";
	}
	void removeProduct() {
		if (magazines.empty())
			cout << "There is no magazines left\n";
		else
			magazines.pop();
	}
};

class ShortStories : public Product
{
public:
	stack<string> shortstories;
	ShortStories() {
		shortstories.push("Short story 1");
		shortstories.push("Short story 2");
		shortstories.push("Short story 3");
		shortstories.push("Short story 4");
		shortstories.push("Short story 5");
		shortstories.push("Short story 6");
		shortstories.push("Short story 7");
		shortstories.push("Short story 8");
		shortstories.push("Short story 9");

	}
	void checkStock(int n) {
		if (n == 1) {
			if (shortstories.size() > 3) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough short stories\n";
		}
		else if (n == 2) {
			if (!(shortstories.empty())) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough short stories\n";
		}
		else
			cout << "Wrong choice\n";
	}
	void removeProduct() {
		if (shortstories.empty())
			cout << "There is no short stories left\n";
		else
			shortstories.pop();
	}
};

class IslamicBooks : public Books
{
public:
	stack<string> islamicbooks;
	IslamicBooks() {
		islamicbooks.push("Islamic book 1");
		islamicbooks.push("Islamic book 2");
		islamicbooks.push("Islamic book 3");
		islamicbooks.push("Islamic book 4");
		islamicbooks.push("Islamic book 5");
		islamicbooks.push("Islamic book 6");
		islamicbooks.push("Islamic book 7");
		islamicbooks.push("Islamic book 8");
		islamicbooks.push("Islamic book 9");
	}
	void checkStock(int n) {
		if (n == 1) {
			if (islamicbooks.size() > 3) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough islamic books\n";
		}
		else if (n == 2) {
			if (!(islamicbooks.empty())) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough islamic books\n";
		}
		else
			cout << "Wrong choice\n";
	}
	void removeProduct() {
		if (islamicbooks.empty())
			cout << "There is no islamic books left\n";
		else
			islamicbooks.pop();
	}
};

class MedicalBooks : public Books
{
public:
	stack<string> medicalbooks;
	MedicalBooks() {
		medicalbooks.push("Medical book 1");
		medicalbooks.push("Medical book 2");
		medicalbooks.push("Medical book 3");
		medicalbooks.push("Medical book 4");
		medicalbooks.push("Medical book 5");
		medicalbooks.push("Medical book 6");
		medicalbooks.push("Medical book 7");
		medicalbooks.push("Medical book 8");
		medicalbooks.push("Medical book 9");
	}
	void checkStock(int n) {
		if (n == 1) {
			if (medicalbooks.size() > 3) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough medcial books\n";
		}
		else if (n == 2) {
			if (!(medicalbooks.empty())) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough isamlic books\n";
		}
		else
			cout << "Wrong choice\n";
	}
	void removeProduct() {
		if (medicalbooks.empty())
			cout << "There is no islamic books left\n";
		else
			medicalbooks.pop();
	}
};

class EngineeringBooks : public Books
{
public:
	stack<string> engineeringbooks;
	EngineeringBooks() {
		engineeringbooks.push("Engineering book 1");
		engineeringbooks.push("Engineering book 2");
		engineeringbooks.push("Engineering book 3");
		engineeringbooks.push("Engineering book 4");
		engineeringbooks.push("Engineering book 5");
		engineeringbooks.push("Engineering book 6");
		engineeringbooks.push("Engineering book 7");
		engineeringbooks.push("Engineering book 8");
		engineeringbooks.push("Engineering book 9");
	}
	void checkStock(int n) {
		if (n == 1) {
			if (engineeringbooks.size() > 3) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough engineering books\n";
		}
		else if (n == 2) {
			if (!(engineeringbooks.empty())) {
				removeProduct();
				cout << "Transaction is successfully done\n";
			}
			else
				cout << "There is no enough engineering books\n";
		}
		else
			cout << "Wrong choice\n";
	}
	void removeProduct() {
		if (engineeringbooks.empty())
			cout << "There is no engineering books left\n";
		else
			engineeringbooks.pop();
	}
};

