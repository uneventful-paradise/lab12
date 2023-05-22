#pragma once
#include "Contact.h"
#include <string>

using namespace std;

class Prieten : public Contact
{
	string data_nastere;
	string adresa;
	string nr_telefon;
public:
	//constructor a = new Prieten():nume("Andrei")....
	Prieten(string name, string birthday, string address, string phone_number) : Contact(name){
		//nume = name;
		data_nastere = birthday;
		adresa = address;
		nr_telefon = phone_number;
	}
	string GetAdresa();
	string GetDataNastere();
	string GetNrTelefon();
	string GetTip();
};

