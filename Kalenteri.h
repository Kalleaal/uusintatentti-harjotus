#pragma once
#include <vector>
#include "Tapahtuma.h"
#include "D:/Hy�ty/Koodaus/Repository/The Projekt/uusintatentti harjotus/Tapahtuma.h"


class Kalenteri
{
public:

	Kalenteri( std::string nimi_);
	void lis��Tapahtuma( Tapahtuma* uusiTapahtuma );
	void tulostaKaikkiTapahtumat();
	

private:
	std::string nimi;
	std::vector<Tapahtuma*> tapahtumat;
};

