#include "OP.h"

using namespace std;

void main(){
	int priklad[4] = { 4, 6, 1 ,3 };
	MnojinaInt mnoj1(priklad, 4);
	MnojinaInt mnoj2 = mnoj1;
	mnoj2 += 2;
	cout << mnoj2;
	cout << endl;
	mnoj2 += 2;
	cout << mnoj2;
	cout << endl;
	mnoj2 -= 2;
	cout << mnoj2;
	cout << endl;
	MnojinaInt mnoj3 = mnoj2;
	cout << mnoj3;
	system("pause");
}