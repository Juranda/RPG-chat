#pragma once
#include <iostream>
#include <string>
#include "Arma.h"

Arma::Arma(int dano, DamageType tipo, std::string nome) {

	this->damage = dano;
	this->tipoDeArma = tipo;
	this->nome = nome;
}

Arma::DamageType Arma::PegarTipoDeDano()
{
	return this->tipoDeArma;
}


int Arma::PegarDano()
{
	return this->damage;
}

std::string Arma::PegarNome()
{
	return this->nome;
}

void Arma::CausarDano()
{
	std::cout << "Causado " << this->damage << "de dano." << std::endl;


}
