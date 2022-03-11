#include "bila.h"

int CBila::get_nr_asociat() { return nr_asociat; }

bool CBila::get_stare_curenta() { return stare_curenta; }

void CBila::set_nr_asociat(int n) {
	nr_asociat = n;
}

void CBila::set_stare_curenta(bool m) {
	stare_curenta = m;
}