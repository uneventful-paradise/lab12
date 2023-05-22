#include <iostream>
#include "Agenda.h"
#include "Contact.h"
#include "Coleg.h"
#include "Cunoscut.h"
#include "Prieten.h"

int main()
{
	Agenda a;
	Coleg c("Andrei", "mecanic", "str popandaului nr 35", "0766543232");
	Coleg* ptr = &c;
	Cunoscut* ptr2 = new Cunoscut("Mihai", "0229876543");
	printf("tipul obiectului de pe pozitia 2 este: %s\n", ptr2->GetTip().c_str());
	printf("_______________________________________________________\n");
	a.Adauga(ptr);
	a.Adauga(ptr2);
	printf("continutul vectorului de contacte:\n");
	a.Print();
	printf("_______________________________________________________\n");
	Prieten* p = new Prieten("Radu Mandrea Alexandru B)","15 decembrie 2003", "La Gaudeamus", "0788594215");
	Prieten* p2 = new Prieten("Floreiner","12 decembrie 2005", "La Animale", "0782294215");
	a.Adauga(p);
	a.Adauga(p2);
	printf("vectorul de prieteni este:\n");
	vector<Contact*>prietenasi;
	prietenasi = a.GetPrieteni();
	//a.GetPrieteni();
	for (auto i : prietenasi)
		printf("%s\n", i->GetNume().c_str());
	printf("_______________________________________________________\n");
	Cunoscut* p3 = new Cunoscut("Login024", "02402402424");
	a.Adauga(p3);
	printf("continutul vectorului de contacte:\n");
	a.Print();
	printf("_______________________________________________________\n");
}
