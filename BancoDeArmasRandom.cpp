#include "BancoDeArmasRandom.h"
#include "Arma.h"
#include <vector>
using namespace std;

BancoDeArmasRandom::BancoDeArmasRandom()
{
	vector<string> nomesParaArmas = {
		"Arco",
		"Adaga",
		"Espada",
		"Maça",
		"Martelo",
		"Machado",
		"Lança",
		"Canhão"
	};

	for (int i = 0; i < 30; i++) {

		Arma arma(rand() % 500,
		Arma::DamageType(rand() % 4),
		nomesParaArmas[rand() % nomesParaArmas.size()]);
		banco.push_back(arma);
	}
}
