#include <iostream>

using namespace std;

// Projekt w wersji nr 2. Do pobrania z repozytorium zdalnego.

bool sprawdz_czy_pierwsza(int a){
	int liczba_dzielnikow = 2;
	for(int i = 2; i <= (a/2); i++){
		if(a%i==0) liczba_dzielnikow++;
	}
	return liczba_dzielnikow==2;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita ";
    cin >>a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
