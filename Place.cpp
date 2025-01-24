#include "Place.h"
#include <iostream>
using namespace std;

ostream &operator<<(ostream &os, const Place &obj) {
	obj.print(os);
	return os;
}