#include "Kalenteri.h"

using namespace std;

int main()
{

	
	Tapahtuma* tapahtuma_1 = new Tapahtuma("Kehityskeskustelu", "TA1 - 2H169", "1.5.2017");  // Dynaamiset oliot -> Talletettu heap muistiin
	Tapahtuma* tapahtuma_2 = new Tapahtuma("Kummit‰din syntt‰rit", "Ohkola", "12.5.2017");
	Tapahtuma* tapahtuma_3 = new Tapahtuma("Macbeth", "Kansallisteatteri", "4.6.2017");


	Kalenteri kalenteri("Oma kalenteri"); // automaattinen olio -> Talletettu stack pinopumistiin

	kalenteri.lis‰‰Tapahtuma(tapahtuma_1);
	kalenteri.lis‰‰Tapahtuma(tapahtuma_2);
	kalenteri.lis‰‰Tapahtuma(tapahtuma_3);




	// Luo kolme tapahtuma-oliota:
	// 1. Kehityskeskustelu, TA1-2H169, 1.5.2017
	// 2. Kummit‰din syntt‰rit, Ohkola, 12.5.2017
	// 3. Macbeth, Kansallisteatteri, 4.6.2017


	// Luo kalenteri-olio


	// Lis‰‰ tapahtuma-oliot kalenteriin


	// Tulosta kalenterin kaikki tapahtumat

	kalenteri.tulostaKaikkiTapahtumat();

}