#include "Personagem.h"
#include "Arma.h"
#include <vector>

Personagem::Personagem(std::string _nome, Arma _arma)
{
	this->arma = &_arma;
	this->nome = _nome;
	this->falas = {
	"Eu sou mt foda man, peguei a espada do vulcao",
	"Vendo cascas de tartaruga-de-cristal",
	"acho que o lobby ta muito lagado",
	"Sigmas nunca dormem, eles vivem...",
	"arrombados",
	"filhos das putas",
	arma->PegarNome() + " e muito foda man",
	"Acabei de voltar da farm rapaziada B)",
	"Certo, agora vou sair, ja ta tarde",
	"Nunca pensei que seria tao feliz com pixeis na minha tela, obrigado juranda",
	"Foda essa nova atualizacao ein",
	"Ta muito dificil passar o DLF",
	"VENDO CONTAS SEGUE O DISC: #******",
	"w",
	"ss",
	"SIM",
	"muito bom",
	"porr não da pra rir ***"
	"nao",
	"festinha na casa dos dev",
	"fic"
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
	std::cout << this->nome << ": " << this->falas[rand() % falas.size()] << "\n" << std::endl;
}
