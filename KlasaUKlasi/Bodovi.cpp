#include "Bodovi.h"


Bodovi::Bodovi(int brBodova) : brBodova(brBodova) {}


Bodovi::~Bodovi()
{
}

int Bodovi::getBrBodova() const
{
	return this->brBodova;
}