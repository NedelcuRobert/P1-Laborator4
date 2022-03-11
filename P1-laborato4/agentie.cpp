#include "agentie.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int CAgentie::bila_rand(int timp) {
	srand(timp);
	int x = (rand() % 49) + 1;
	return x;
}

void CAgentie::initializare_bilet(CBila bilet[6],int timp) {
	for (int i = 0;i < 6;i++) {
		bilet[i].set_nr_asociat(bila_rand(timp+i));
		bilet[i].set_stare_curenta(true);
	}
}

void CAgentie::initializare_bilet_castigator(int timp) {
	for (int i = 0;i < 6;i++) {
		bilet_castigator[i].set_nr_asociat(bila_rand(timp+i));
		bilet_castigator[i].set_stare_curenta(true);
	}
}

int CAgentie::verificare_bilet(CBila bilet[6]) {

	for (int i = 0;i < 6;i++) {
		if (bilet[i].get_nr_asociat() != bilet_castigator[i].get_nr_asociat()) {
			return false;
		}
	}
	return true;
}

void CAgentie::afisare(CBila bilet1[6]) {
	for (int i = 0;i < 6;i++) {
		cout << bilet1[i].get_nr_asociat() << "(" << bilet1[i].get_stare_curenta() << ")" << " ";
	}
}

void CAgentie::afisare_bilet_castigator() {
	for (int i = 0;i < 6;i++) {
		cout << bilet_castigator[i].get_nr_asociat() << "(" << bilet_castigator->get_stare_curenta() << ")" << " ";
	}
}