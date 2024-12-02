#include <iostream>
using namespace std;
#include "carre.h"

int main()
{
	CCarre test;
	int sx1;
	int sy1;
	int cote1;
	int saut;
	char direction;
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
	cout << endl << endl << "saut : ";
	cin >> saut;
	cout << "irection : ";
	cin >> direction;
	test.Deplacer(direction, saut);
	test.Afficher();
}