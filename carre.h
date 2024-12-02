#pragma once

class CCarre
{
public:
	void Setsx(int sx1);
	void Setsy(int sy1);
	void Setcote(int cote1);
	void Afficher();

	int Getsx();
	int Getsy();
	int GetCote();

	void Deplacer(char direction, int saut);

private:
	int sx;
	int sy;
	int cote;
};

