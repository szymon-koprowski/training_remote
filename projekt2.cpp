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

int main() {
    int a;
    cout << "Podaj liczbe calkowita";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
