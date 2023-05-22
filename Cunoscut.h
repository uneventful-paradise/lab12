#pragma once
#include "Contact.h"
class Cunoscut : public Contact
{
	string nr_telefon;
public:
	Cunoscut(string name, string phone_number) : Contact(name) { nr_telefon = phone_number; }
	string GetNrTelefon();
	string GetTip();
};

