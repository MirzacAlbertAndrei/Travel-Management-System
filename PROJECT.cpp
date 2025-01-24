#include <iostream>

#include "Destinations.h"
#include "BeachDestinations.h"
#include "MountainDestinations.h"
#include "OceanDestinations.h"
#include "Tourists.h"
#include "Place.h"
using namespace std;

void number_static( Destinations &obj)
{
	cout << "a lot of people visit this place!" << endl;
	obj.num_static();
}
void fct1(Destinations &obj)
{
	cout << obj << endl;
}
void fct2(Place &obj)
{
	cout << obj << endl;
}

int main()
{
	Destinations Roma;
	MountainDestinations Sinaia;
	BeachDestinations Costinesti;
	OceanDestinations Miami;

	Destinations* ROMA = new Destinations();
	Destinations* SINAIA = new MountainDestinations();
	Destinations* COSTINESTI = new BeachDestinations();
	Destinations* MIAMI = new OceanDestinations();
    
	cout <<endl << "Static!" << endl;
	
	number_static(Sinaia);
	number_static(Costinesti);
	number_static(Miami);
	
	cout << endl << "Dynamic!" << endl;
	ROMA->num_dynamic();
	SINAIA->num_dynamic();
	COSTINESTI->num_dynamic();
	MIAMI->num_dynamic();

	delete ROMA;
	delete SINAIA;
	delete COSTINESTI;
	delete MIAMI;


	cout << endl << "Interface!" << endl;
	Destinations* ptr = new Destinations();
	cout << *ptr << endl;
	fct1(*ptr);
	fct2(*ptr);

	cout << endl;

	Destinations Londra;
	MountainDestinations Brasov;
	BeachDestinations Constanta;
	OceanDestinations Lisabona;
	Tourists Turist1;

	Londra.apelare();
	Brasov.apelare();
	Constanta.apelare();
	Lisabona.apelare();

	Lisabona.afisName();
	Lisabona.afisNameofocean();
	Constanta.afisNameofbeach();
	Lisabona.afisNameofbeach();
	Brasov.afisNameofmountain();



	
	Destinations Oras3("Asia", "Japonia");
	Destinations Oras4("Europa", "Italia", "Roma", 250000 , 15000);
	Destinations Oras5("Romania");
	const Destinations Oras6("America de Nord", "USA");

	Destinations Oras1;

	Oras1.set_continent("Europa");
	Oras1.set_country("Romania");
	Oras1.set_name("Barlad");
	Oras1.set_population(10000);
	Oras1.set_streets(700);

	Destinations* Oras2 = new Destinations();
	Oras2->set_continent("Europa");
	Oras2->set_country("Romania");
	Oras2->set_name("Galati");
	Oras2->set_population(40000);
	Oras2->set_streets(5000);

	Oras3.test();
	Oras4.test();
	Oras5.test();
	Oras6.test();
	cout << endl;

	cout << "Oras1:" << endl;
	cout << "Continent: " << Oras1.get_continent() << endl;
	cout << "Tara: " << Oras1.get_country() << endl;
	cout << "Nume: " << Oras1.get_name() << endl;
	cout << "Populatie: " << Oras1.get_population() << endl;
	cout << "Numar strazi: " << Oras1.get_streets() << endl;

	cout << endl << "Oras2:" << endl;
	cout << "Continent: " << Oras2->get_continent() << endl;
	cout << "Tara: " << Oras2->get_country() << endl;
	cout << "Nume: " << Oras2->get_name() << endl;
	cout << "Populatie: " << Oras2->get_population() << endl;
	cout << "Numar strazi: " << Oras2->get_streets() << endl;
	delete Oras2;
	

	return 0;
}
