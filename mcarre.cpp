#include <iostream>
using namespace std;
#include "carre.h"

int main()
{
	CCarre test;
	int sx1;
	int sy1;
	int cote1;
	cout << "sx";
	cin >> sx1;
	cout << "sy";
	cin >> sy1;
	cout << "cote";
	cin >> cote1;
	test.Setsx(sx1);
	test.Setsy(sy1);
	test.Setcote(cote1);
	test.Afficher();
	cout << endl << test.Getsx() << " ; " << test.Getsy() << " ; " << test.GetCote();
}