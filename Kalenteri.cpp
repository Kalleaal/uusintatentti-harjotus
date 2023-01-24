#include "Kalenteri.h"

using namespace std;

Kalenteri::Kalenteri(std::string nimi_)
{
	nimi = nimi_;
}

void Kalenteri::lis‰‰Tapahtuma(Tapahtuma* uusiTapahtuma)
{
	tapahtumat.push_back(uusiTapahtuma);

}

void Kalenteri::tulostaKaikkiTapahtumat()
{
	for (int i = 0; i < tapahtumat.size(); i++)
	{
		tapahtumat[i] -> tulosta();


	}

}
