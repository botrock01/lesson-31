#include <iostream>
#include "Date.h"
#include "Soft.h"
#include "Free.h"
#include "shareware.h"

int main()
{
	/*Soft a;
	a.showInfo();*/

	Free b("VSCode","MICROSOFT");
	b.showInfo();
	cout << "Avaible: " << boolalpha << b.isAvaible() << endl;

	Shareware d;
	d.showInfo();
}
