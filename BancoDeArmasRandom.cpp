#include "BancoDeArmasRandom.h"
#include "Arma.h"
#include <vector>
#include <random>

BancoDeArmasRandom::BancoDeArmasRandom()
{
	std::string nomesParaArmas[] = {
		"Arco",
		"Adaga",
		"Espada",
		"Massa",
		"Martelo",
		"Machado",
		"Lanca",
		"Canhao"
	};

	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> dist500(1, 500);
	std::uniform_int_distribution<std::mt19937::result_type> dist4(0, 3);
	std::uniform_int_distribution<std::mt19937::result_type> distNome(0, nomesParaArmas->length() -1);


	for (int i = 0; i < 30; i++) {
		Arma arma(dist500(rng),
			Arma::DamageType(dist4(rng)),
			nomesParaArmas[distNome(rng)]);
		banco.push_back(arma);
	}
	
}

Arma BancoDeArmasRandom::PegarArmaAleatoria()
{
	return this->banco[0,banco.size()-1];
}
