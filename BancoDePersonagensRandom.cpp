#include "BancoDePersonagensRandom.h"

BancoDePersonagensRandom::BancoDePersonagensRandom()
{
	std::string nomes[] = {
	"Serecia", "Ucuthward", "Charbri", "Gardcy",
	"Markris", "Tri", "Hewethel", "Phera", "Burvell",
	"Arddon", "Ba'cen", "Werdcar", "Eadfrea", "Tricar",
	"Wardever", "Rid", "Na", "Grimron", "Ferthard","Mancon"
	};
	std::vector<Arma> armas = BancoDeArmasRandom().banco;

	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> distNome(0, nomes->length()-1);
	std::uniform_int_distribution<std::mt19937::result_type> distArma(0, armas.size()-1);


	for (int i = 0; i < 30; i++) {
		Personagem pers(nomes[distNome(rng)],
			armas[distArma(rng)]
		);
		this->banco.push_back(pers);
	}




}
