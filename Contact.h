#pragma once
#include <string>
#include <iostream>
using namespace std;
class Contact {
protected:
	string nume;
public:
	//pot sa nu adaug un Constructor?
	Contact(string name)
	{
		nume = name;
	}
	string GetNume() {
		return nume;
	};
	virtual string GetTip() = 0;
};