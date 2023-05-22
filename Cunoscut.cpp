#include "Cunoscut.h"
#include "Enum.h"

string Cunoscut::GetNrTelefon()
{
    return nr_telefon;
}

string Cunoscut::GetTip()
{
    //string type = "Cunoscut";
    int index = static_cast<int>(type::Cunoscut);
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
