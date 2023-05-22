#pragma once
#include "Contact.h"
#include "Coleg.h"
#include "Cunoscut.h"
#include "Prieten.h"
#include <vector>
#include <iostream>
using namespace std;
class Agenda
{
	vector<Contact*>contacte; //= vector<Contact*>(100);//daca vreau sa inuitializez dimensiunea
public:
	Contact* cauta(string nume);
	vector<Contact*>GetPrieteni();
	void Sterge(string nume);
	void Adauga(Contact*c);
	void Print();
};

