#include "Personagem.h"
#include "Arma.h"
#include <vector>

Personagem::Personagem(std::string _nome, Arma _arma)
{
	arma = &_arma;
	nome = _nome;
	falas = {
	"Eu sou mt foda man, peguei a espada do vulcão",
	"Vendo casca de tartaruga 1000zao na mao",
	"Acho que o lobby ta muito lagado",
	"Sigmas nunca dormem, eles vivem...",
	"Arrombado",
	("A minha arma {} e muito foda", _arma.PegarNome()),
	"Acabei de voltar da farm rapaziada B)",
	"Certo, agora vou sair, ja ta tarde",
	"Nunca pensei que seria tao feliz com pixeis na minha tela, obrigado juranda",
	"Foda essa nova atualizacao ein"
	};
}

std::string Personagem::PegarNome()
{
	return this->nome;
}

Arma Personagem::PegarArma()
{
	return Arma(21,Arma::DamageType::Ar,"Arco");
}

void Personagem::falar()
{
	std::cout << this->nome << ": " << this->falas[rand() % falas.size()] << std::endl;
}
