#include <iostream>

using namespace std;

// Projekt w wersji nr 2. Do pobrania z repozytorium zdalnego.
int oblicz_silnie(int a){
	int b = 1;
	for (int i = 1; i <= a; i++){
		b = b*i;
	}
	return b;
}

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
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl
	cout << "1. Oblicz silnie" << endl;
	cout << "2. Sprawdz czy liczba jest pierwsza" <<endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
	if(wyjscie == 1)
		cout << "Silnia dla liczby " << a <<" wynosi " << oblicz_silnie(a) << endl;
	else if(wyjscie == 2){
		if(sprawdz_czy_pierwsza(a)) cout << "Liczba " << a << " jest pierwsza." <<endl;
		else cout << "Liczba " << a << " nie jest pierwsza." <<endl;
	}
    } while(wyjscie != 0);
    return 0;
}
