#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Arma.h"

class Personagem {
private:

	std::vector<std::string> falas;
	Arma* arma;
	std::string nome;

public:

	Personagem(std::string nome, Arma arma);

	void falar();

	std::string PegarNome();
	Arma PegarArma();
};