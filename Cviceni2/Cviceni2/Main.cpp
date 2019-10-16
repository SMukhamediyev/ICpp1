
#include <iostream>
#include "Pokladna.h"
using namespace std;


int main() {
	Pokladna* pokladna = new Pokladna();

	Uctenka uctenka1 = pokladna->vystavUctenku(100, 0.1);
	Uctenka uctenka2 = pokladna->vystavUctenku(200, 0.2);
	Uctenka uctenka3 = pokladna->vystavUctenku(300, 0.3);

	cout << uctenka1.getCisloUctenky() << endl;
	cout << uctenka2.getCisloUctenky() << endl;
	cout << uctenka3.getCisloUctenky() << endl << endl;

	cout << pokladna->dejUctenku(1000).getCisloUctenky() << endl;
	cout << pokladna->dejUctenku(1001).getCisloUctenky() << endl;
	cout << pokladna->dejUctenku(1002).getCisloUctenky() << endl << endl;

	cout << pokladna->dejCastku() << endl;
	cout << pokladna->dejCastkuVcDph() << endl;

	delete(pokladna);

	return 0;
}