#include"OP.h"

ostream& operator<<(ostream& os, const MnojinaInt& dt)
{
	for (int i = 0; i < dt.n; i++) {
		cout << dt.mas[i] << " ";
	}
	cout << endl;
	return os;
}

void MnojinaInt::operator+= (int toAdd) {
	for (int i = 0; i < n; i++) {
		if (toAdd == mas[i])
			return;
	}
	int* newMass = new int[n + 1];
	for (int i = 0; i < n; i++) {
		newMass[i] = mas[i];
	}
	newMass[n] = toAdd;
	delete[] mas;
	mas = newMass;
	++n;
}

void MnojinaInt::operator-= (int toDelete) {
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (toDelete == mas[i])
			index = i;
	}
	if (index < 0)
		return;
	int* newMass = new int[n - 1];
	for (int i = 0; i < index; i++) {
		newMass[i] = mas[i];
	}
	for (int i = index + 1; i < n; i++) {
		newMass[i - 1] = mas[i];
	}
	delete[] mas;
	mas = newMass;
	--n;
}
bool MnojinaInt::operator== (MnojinaInt mnoj) {
	if (n != mnoj.n)
		return false;
	for (int i = 0; i < n; i++) {
		if (mas[i] != mnoj.mas[i])
			return false;
	}
	return true;
}

MnojinaInt::MnojinaInt(int* massiv, int size) {
	mas = massiv;
	n = size;
}