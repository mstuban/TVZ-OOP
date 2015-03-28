#include <iostream>
#include "Spil.h"
#include "Igrac.h"
using namespace std;

int main(void)
{
	Igrac *igraci = new Igrac[4];
	Spil spil;

	//Dodjela karata pojedincu
	for (int i = 0; i < 4; i++)
	{
		string tmpName;
		cout << "Unesite ime " << i + 1 << ". igraca: ";
		cin >> tmpName;
		igraci[i].setName(tmpName);
		igraci[i].dodijeli4Karte(spil);
	}

	//Ispisuje koje je karet dobio pojediji igrac
	for (int i = 0; i < 4; i++)
		igraci[i].ispisi();

	//Ispisuje nepodijeljene karte iz spila
	spil.ispisi();

	delete [] igraci;
	return 0;
}