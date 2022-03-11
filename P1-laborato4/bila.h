#include <iostream>
#include <stdlib.h>
using namespace std;

class CBila {
private:
	int nr_asociat;
	bool stare_curenta;
public:
	int get_nr_asociat();
	bool get_stare_curenta();
	void set_nr_asociat(int n);
	void set_stare_curenta(bool m);
};
