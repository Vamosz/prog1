#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(){
	
	int ev = 2000, honap = 1, nap = 1, hetnapja = 5;		//2000.jan.1. szombat volt
	int honapok[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	string napok[7] = {"Hétfő", "Kedd", "Szerda", "Csütörtök", "Péntek", "Szombat", "Vasárnap"};
	int szul_ev, szul_hon, szul_nap;

	cout << "Add meg a szuletesi datumod! (yyyy mm dd)" << endl;
	cin >> szul_ev >> szul_hon >> szul_nap;
	
	while(ev != 3000){
		hetnapja += 365;
		if(ev % 4 == 0 && !(ev % 100 == 0 && ev % 400 != 0)){
			hetnapja++;
		}
		ev++;
	}
	//3000 nem szökőév
	//szökőév ha osztható 4-gyel
	//nem szökőév ha osztható 100-zal
	//szökőév ha 400-zal is osztható

	hetnapja += honapok[szul_hon-1];
	hetnapja += szul_nap-1; 								//pl. ha elsején született akkor 1+1-1 = 1

	cout << napok[hetnapja%7] << endl;

	return 0;
}
