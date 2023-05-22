#include "Agenda.h"

Contact* Agenda::cauta(string nume)
{
    for(auto i : contacte)
        if(i->GetNume() == nume)
            return i;
    return nullptr;
    /*
    ALTERNATIV
    vector <Contact*> :: iterator it;
    it = find(contacte.begin(), contacte.end(), Contact(nume))??
    */
}

vector<Contact*> Agenda::GetPrieteni()
{
    vector<Contact*>friends;
    for (auto i : contacte)
        if (i->GetTip() == "Prieten")
            friends.push_back(i);
    if(friends.size()!= 0)
        return friends;
}

void Agenda::Sterge(string nume)
{
    for (int i = 0; i < contacte.size(); ++i)
        if (contacte[i]->GetNume() == nume)
            contacte.erase(contacte.begin() + i);//de ce merge cu -> dar nu cu .
}

void Agenda::Adauga(Contact* c)
{
    contacte.push_back(c);
}

void Agenda::Print()
{
    int ind = 0;
    for (auto i : contacte)
    {
        ind++;
        //cout << i->GetNume();//cum pot accesa cu .?
        printf("%d %s \n", ind, (*i).GetNume().c_str());
    }
}
