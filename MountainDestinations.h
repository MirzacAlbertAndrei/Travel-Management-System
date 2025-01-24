#pragma once
#include <iostream>
#include "Destinations.h"
using namespace std;

class MountainDestinations : public Destinations
{
public:
	string nameofmountain;
	int nrskischools;

	void afisNameofmountain() {
		cout << " name of mountain " << endl;
	}
	void apelare() {
		turist.afisAgetourist();
		cout << " age of mounatin tourist  - override mountain" << endl;
	}
		void num_static()
		{
			cout << "number of mountain visitors last year" << endl;
		}
		virtual void num_dynamic()
		{
			cout << "number of  mountain visitors this year" << endl;

	}

};

