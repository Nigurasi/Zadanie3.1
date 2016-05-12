/* PROGRAM ZANEGOWANY
Program sprawdzajacy, czy masz szanse na dostanie sie do Hogwartu. Jako parametry linii polecen przyjmuje:
	-czy chcesz sie dostac do Hogwartu (t/n)
	-czy twoi rodzice zyja (t/n)
	-czy ma sie skrytke w banku Gringota (t/n)
	-czy mieszka sie w Anglii (t/n)
	-znajomosc mowy wezow (t/n)
	-posiadanie sowy, kota, szczura, nic (1 - sowa, 2 - kot, 3 - szczur, 0 - nic)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void blad();

int main(int argc, char* argv[]){
	if (argc < 7) blad();

	int dom;
	int rodzice;
	int bank;
	int ang;
	int weze;
	int zw = atoi(argv[6]);

	if (strcmp(argv[1], "t") || strcmp(argv[1], "T")) dom = 1;
	else dom = 0;

	if (strcmp(argv[2], "t") || strcmp(argv[2], "T")) rodzice = 1;
	else rodzice = 0;

	if (strcmp(argv[3], "t") || strcmp(argv[3], "T")) bank = 1;
	else bank = 0;

	if (strcmp(argv[4], "t") || strcmp(argv[4], "T")) ang = 1;
	else ang = 0;

	if (strcmp(argv[5], "t") || strcmp(argv[5], "T")) weze = 1;
	else weze = 0;

	if ( ((dom != 1))
	|| ( ((rodzice != 2) || ((( ang != 0) || (zw <= 0)) && ((weze != 0) || (bank != 0))))
	&& (( rodzice != 0) || (zw != 1) || (bank != 1) || (weze != 1) || (ang != 1))) ) printf("1");
	else printf("0");

return 0;

}

void blad(){
	printf("Wystapil blad!\n");
	exit(0);
}
