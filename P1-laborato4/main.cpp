#include "agentie.h"
#include <iostream>

using namespace std;

int main() {

	CAgentie agentie;

	const int dim=3;

	CBila bilete[dim][6];

	for (int i = 0;i < dim;i++) {
		agentie.initializare_bilet(bilete[i], 5+i);
	}

	agentie.initializare_bilet_castigator(6);
	cout << "Bilete" << endl;
	for (int i = 0;i < dim;i++) {
		cout << "\nBiletul " << i+1 <<":" << endl;
		agentie.afisare(bilete[i]);
	}

	cout << "\n\nRezultat extragere 6/49 Lotto:" << endl;

	agentie.afisare_bilet_castigator();

	cout << "\n\n";
	cout << "Verificare bilete" << endl;
	for (int i = 0;i < dim;i++) {
		if (agentie.verificare_bilet(bilete[i]) == 1) {
			cout << "Biletul "<<i+1<<" castigator" << endl;
		}
		else {
			cout << "Biletul "<<i+1<<" necastigator" << endl;
		}
	}

	return 0;
}