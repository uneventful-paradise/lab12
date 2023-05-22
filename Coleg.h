#pragma once
#include "Contact.h"
#include <iostream>
class Coleg : public Contact
{
	string serviciu;
	string adresa;
	string nr_telefon;
public:
	Coleg(string name, string job, string address, string phone_number) : Contact(name) {
		//nume = name;
		serviciu = job;
		adresa = address;
		nr_telefon = phone_number;
	}
	string GetServiciu();
	string GetNrTelefon();
	string GetAdresa();
	string GetTip();
};

