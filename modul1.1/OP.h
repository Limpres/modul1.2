#pragma once

#include <iostream>

using namespace std;

class MnojinaInt {
private:
	int* mas;
	int n;
public:
	MnojinaInt(int* massiv, int size);
	MnojinaInt(const MnojinaInt& mnoj) {
		n = mnoj.n;
		mas = new int[n];
		for (int i = 0; i < n; i++) {
			mas[i] = mnoj.mas[i];
		}
	}
	void operator+= (int toAdd);
	void operator-= (int toDelete);
	bool operator== (MnojinaInt mnoj);

	MnojinaInt & operator= (const MnojinaInt & mnoj) {
		return MnojinaInt(mnoj);
	}
	friend ostream& operator<<(ostream& os, const MnojinaInt& dt);
};