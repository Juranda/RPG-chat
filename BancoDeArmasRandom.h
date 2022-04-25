#pragma once
#include "Arma.h"
#include <vector>

struct BancoDeArmasRandom
{
	std::vector<Arma> banco;
	BancoDeArmasRandom();
	Arma PegarArmaAleatoria();

};

