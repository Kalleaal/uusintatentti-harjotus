#pragma once
#include <vector>
#include "Tapahtuma.h"
#include "D:/Hyöty/Koodaus/Repository/The Projekt/uusintatentti harjotus/Tapahtuma.h"


class Kalenteri
{
public:

	Kalenteri( std::string nimi_);
	void lisääTapahtuma( Tapahtuma* uusiTapahtuma );
	void tulostaKaikkiTapahtumat();
	

private:
	std::string nimi;
	std::vector<Tapahtuma*> tapahtumat;
};

