#pragma once
#include <string>
#include <iostream>
using namespace std;

class Tapahtuma
{
public:
	Tapahtuma(std::string tapahtumanNimi_, std::string paikka_, std::string paivamaara_);
	void tulosta();


private:

	string tapahtumanNimi;
	string paikka;
	string paivamaara;

};

