
#include <iostream>     
#include <cstring>        
using namespace std;

char sTabel[] = "abcdefghijklmnopqrstuvwxyz";    

int batas(int masukan) {
	if (masukan < 0) return (26 + masukan);
	else return masukan;
}


string enkripsi(string masukan) {
	string temp;
	for (int indeks = 0; indeks < masukan.length(); indeks++) {
		temp += enkripsi(masukan.at(indeks));
	}
	return temp;
}

//
char enkripsi(char c) {
	for (int indeks = 0; indeks < 26; indeks++) {
		if (sTabel[indeks] == c) return sTabel[batas(indeks + 18) % 26];
	}
	return c;
}

string enkripsi(string masukan) {
	string temp;
	for (int indeks = 0; indeks < masukan.length(); indeks++) {
		temp += enkripsi(masukan.at(indeks));
	}
	return temp;
}

char dekripsi(char c) {
	for (int indekss = 0; indekss < 26; indekss++) {
		if (sTabel[indekss] == c) return sTabel[batas(indekss - 18) % 26];
	}
	return c;
}

string dekripsi(string masukan) {
	string tempp;
	for (int indekss = 0; indekss < masukan.length(); indekss++) {
		tempp += dekripsi(masukan.at(indekss));
	}
	return tempp;
}


int main() {
	string n;
	cout << "masukkan kata yang akan dienkripsi \n";
	cin >> n;
	cout << enkripsi(n) << endl;

	string a;
	cout << "masukkan kata yang akan didekripsi \n";
	cin >> a;
	cout << dekripsi(a) << endl;
}













