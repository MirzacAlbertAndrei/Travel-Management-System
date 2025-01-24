#include <iostream>
#include "Destinations.h"
using namespace std;

int Destinations::nrObiecte = 0;

Destinations::Destinations() : Destinations{ "nedefinit", "nedefinit","nedefinit", 0 ,0 }
{
    //cout << "Constructor fara parametrii" << endl;

}
Destinations::Destinations(string continent,string country ) : continent{ continent }, country{ country }, name{ "nedefinit" }, population{ 0 }, streets{ 0 }
{
    //cout << "Constructor cu 2 parametrii" << endl;
    ++nrObiecte;
}
Destinations::Destinations(string continent, string country, string name, int population, int streets) : continent{ continent }, country{ country }, name{ name }, population{ population }, streets{ streets }
{
    //cout << "Constructor cu 5 parametrii" << endl;
    ++nrObiecte;
}
Destinations::Destinations(string country) : continent{ continent }, country{country}, name{"nedefinit"}, population{ 0 }, streets{ 0 } {
    this->country = country;
    this->continent = "nedefinit";
    ++nrObiecte;
}
Destinations::~Destinations()
{
    //cout << "Destructor" << endl;
}

void Destinations::set_continent(string cont)
{
    continent = cont;
}
string Destinations::get_continent()
{
    return continent;
}

void Destinations::set_country(string tara)
{
    country = tara;
}
string Destinations::get_country()
{
    return country;
}

void Destinations::set_name(string nume)
{
    name = nume;
}
string Destinations::get_name()
{
    return name;
}

void Destinations::set_population(int populatie)
{
    population = populatie;
}
int Destinations::get_population()
{
    return population;
}

void Destinations::set_streets(int numarstr)
{
    streets = numarstr;
}
int Destinations::get_streets()
{
    return streets;
}

void Destinations::test() const
{
    cout << endl << continent << endl << country <<  endl << name << endl << population << endl << streets << endl;
}
int Destinations::get_nrObiecte()
{
    return nrObiecte;
}