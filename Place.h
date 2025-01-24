#pragma once
#include <iostream>
using namespace std;
class Place
{
	friend ostream &operator<<(ostream &, const Place &obj);
public:
	virtual void print(ostream &os) const = 0;
	virtual ~Place() {};

};

