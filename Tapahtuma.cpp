#include "Tapahtuma.h"

Tapahtuma::Tapahtuma(std::string tapahtumanNimi_, std::string paikka_, std::string paivamaara_)
{
	tapahtumanNimi = tapahtumanNimi_;
	paikka = paikka_;
	paivamaara = paivamaara_;

}

void Tapahtuma::tulosta()
{

	std::cout << "Tapahtuman nimi: " << tapahtumanNimi << std::endl;
	std::cout << "Tapahtuma paikka: " << paikka << std::endl;
	std::cout << "Tapahtuman päivämäärä: " << paivamaara << std::endl;

}
