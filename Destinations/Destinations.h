#pragma once
#include <iostream>
#include "Tourists.h"
#include "Place.h"
using namespace std;


class Destinations : public Place
{
public:
    void num_static()
    {
        cout << "number of visitors last year" << endl;
    }
    virtual void num_dynamic()
    {
        cout << "number of visitors this year" << endl;
    }

    virtual void print(ostream &os) const override {
        os << "These are our destinations!" ;
    }


    int nrshops;
    int nrparks;

    void afisName() {
        cout << " name " << endl;
    }
    void apelare() {
        turist.afisAgetourist();
        cout << " age " << endl;
    }

protected:
    int nrhouses;
    int nrrestaurants;
    Tourists turist;
    
 
private:
    static int nrObiecte;
    string continent;
    string country;
    string name;
    int population;
    int streets;

public:
    Destinations();
    Destinations(string country);
    Destinations(string continent, string country);
    Destinations(string continent, string country, string name, int population, int streets);

    ~Destinations();

    void set_continent(string cont);
    string get_continent();

    void set_country(string tara);
    string get_country();

    void set_name(string nume);
    string get_name();

    void set_population(int populatie);
    int get_population();

    void set_streets(int numarstr);
    int get_streets();

    void test() const;
    static int get_nrObiecte();

};


