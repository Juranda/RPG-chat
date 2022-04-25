#pragma once
#include <iostream>
#include <string>

class Arma
{	
public:

	enum class DamageType {
		Água,
		Fogo,
		Terra,
		Ar
	};

	Arma(int dano, DamageType tipo, std::string nome);

	DamageType PegarTipoDeDano();
	int PegarDano();
	std::string PegarNome();

private:
	DamageType tipoDeArma;
	int damage;
	std::string nome;
};

