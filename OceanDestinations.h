#pragma once
#include <iostream>
#include "BeachDestinations.h"
using namespace std;

class OceanDestinations : public BeachDestinations
{
public:
	string nameofocean;
	int tempofocean;

	void afisNameofocean() {
		cout << " name of ocean " << endl;
	}
	void apelare() {
		turist.afisAgetourist();
		cout << " age of ocean tourist - override ocean " << endl;
	}
		void num_static()
		{
			cout << "number of ocean visitors last year" << endl;
		}
		virtual void num_dynamic()
		{
			cout << "number of ocean visitors this year" << endl;


	}
};

