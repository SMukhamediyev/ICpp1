#include <iostream>

int main(int argc, char* argv[]) {

	{
		int hodnota;
		double s, j;
		hodnota << "Bude Sever: ";
		cin >> s;
		hodnota << "Bude Jih: ";
		cin >> j;
		switch (hodnota) // начало оператора switch
		{
		case 1: // если hodnota = 0
		{
			hodnota << s << " - " << j << " = " << s-j << endl; // 0-2pi
			break;
		}
		case 2: // если hodnota = 2
		{
			hodnota << j << " - " << s << " = " << a - b << endl; // 2pi-0
			break;
		}
		
		}
		default: // если count равно любому другому значению
			hodnota << "Neni spravny cislo" << endl;
		}
		system("pause");
		return 0;
	}
}
