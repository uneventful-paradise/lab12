#include "Coleg.h"
#include "Enum.h"

string Coleg::GetServiciu()
{
    return serviciu;
}

string Coleg::GetNrTelefon()
{
    return nr_telefon;
}

string Coleg::GetAdresa()
{
    return adresa;
}

string Coleg::GetTip()
{
    int index = static_cast<int>(type::Coleg);
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
