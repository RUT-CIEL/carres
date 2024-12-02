#include <iostream>
using namespace std;
#include "carre.h"

void CCarre::Setsx(int sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
	this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
	this->cote = cote1;
}

void CCarre::Afficher()
{
	cout << "sx : " << this->sx << " ; " << "sy : " << this->sy << " ; " << "cote : " << this->cote;
}

int CCarre::Getsx()
{
	return this->sx;
}

int CCarre::Getsy()
{
	return this->sy;
}

int CCarre::GetCote()
{
	return this->cote;
}

void CCarre::Deplacer(char direction, int saut)
{
	switch (direction)
	{
	case 'n':
	{
		this->sy -= saut;
		break;
	}
	case 's':
	{
		this->sy += saut;
		break;
	}
	case 'o':
	{
		this->sx -= saut;
		break;
	}
	case 'e':
	{
		this->sx += saut;
		break;
	}
	}
}


