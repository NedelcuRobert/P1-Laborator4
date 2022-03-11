#include "bila.h"

class CAgentie {
private:
	CBila bilet_castigator[6];
public:
	int bila_rand(int timp);
	void initializare_bilet(CBila bilet[6],int timp);
	void initializare_bilet_castigator(int timp);
	int verificare_bilet(CBila bilet[6]);
	void afisare(CBila bilet1[6]);
	void afisare_bilet_castigator();
};