#include <iostream>
#include <string>
#include "Personagem.h"
#include "Arma.h"
#include "BancoDeArmasRandom.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;


int main(int argc, char argv[]) {
	
	BancoDeArmasRandom bancoDeArmas;

	for (int i = 0; i < 10; i++) {
		Arma* arma = &bancoDeArmas.banco[rand() % bancoDeArmas.banco.size()];
		string tipo;


		switch (arma->PegarTipoDeDano())
		{
			default:
				break;
			case Arma::DamageType::Água : tipo = "Agua";
				break;
			case Arma::DamageType::Fogo: tipo = "Fogo";
				break;
			case Arma::DamageType::Terra: tipo = "Terra";
				break;
			case Arma::DamageType::Ar: tipo = "Ar";
				break;
		}
		cout << "Nome: " << arma->PegarNome() << endl;
		cout << "Tipo: " << tipo << endl;
		cout << "Dano: " << arma->PegarDano() << endl;
		cout << "------------------------------------------" << endl;
	}

	return 0;
}