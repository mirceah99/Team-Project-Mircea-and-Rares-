#pragma once


#include <iostream>
using namespace std;
class mircea {

public: static void  cati_ani_are_mircea(int varsta_lui_mircea)
{
	if (varsta_lui_mircea == 21) { std::cout << "corect!"; }
	if (varsta_lui_mircea != 21) { cout << "gresit"; }

}



};

void confirma_identitatea(int ce_varsta_are_mircea)
{
	if (ce_varsta_are_mircea == 21) { std::cout << "corect!"; }
	if (ce_varsta_are_mircea != 21) { cout << "gresit"; }
}