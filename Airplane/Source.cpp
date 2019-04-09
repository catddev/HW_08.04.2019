#include"Airplane.h"

int main() {

	char tmp[20];
	strcpy_s(tmp, "Airbus-360");
	cout << "Enter a type of airplane" << endl;
	Airplane a1(tmp, 750, 136);
	Airplane a2 = a1;

	a1.add_fuel(250);
	a1.print();
	a2.print();

	a1.full_tank();
	a2.full_tank();

	a1.full_salon();
	a2.full_salon();

	cout << "There are 2 airplanes:" << endl;
	a1.print();
	a2.print();

	if (a1 == a2) cout << "the same type" << endl;
	else cout << "different types" << endl;

	system("pause");
	return 0;
}