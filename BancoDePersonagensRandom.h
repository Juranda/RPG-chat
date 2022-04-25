#pragma once
#include "BancoDeArmasRandom.h"
#include "Personagem.h"
#include <random>

struct BancoDePersonagensRandom
{
	/*
	Array de nomes de Jogadores
	Array de falas
	Pegar armas do banco random
	Criar personagens com essas armas
	*/
	std::string nomes[20];
	std::vector<Personagem> banco;
	BancoDePersonagensRandom();

};

