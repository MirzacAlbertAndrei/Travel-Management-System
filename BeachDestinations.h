#pragma once
#include <iostream>
#include "Destinations.h"
using namespace std;

class BeachDestinations : public Destinations
{
public:
	string nameofbeach;
	int nrswimschools;
	void afisNameofbeach() {
		cout << " name of beach " << endl;
	}
	void apelare() {
		turist.afisAgetourist();
		cout << " age of beach tourist - override beach " << endl;
	}
		void num_static()
		{
			cout << "number of beach visitors last year" << endl;
		}
		virtual void num_dynamic()
		{
			cout << "number of  beach visitors this year" << endl;

	}
protected:
	int nroflifeguards;
};

