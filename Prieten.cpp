#include "Prieten.h"
#include "Enum.h"

string Prieten::GetAdresa()
{
	return adresa;
}

string Prieten::GetDataNastere() {
	return data_nastere;
}
string Prieten::GetNrTelefon()
{
	return nr_telefon;
}
string Prieten::GetTip()
{
    int index = static_cast<int>(type::Prieten);
    string tip;
    switch (index)
    {
    case 0: {
        tip = "Prieten";
        break;
    }
    case 1: {
        tip = "Cunoscut";
        break;
    }
    case 2: {
        tip = "Coleg";
        break;
    }
    }
    return tip;
}