#include <iostream>
#include <string>

using namespace std;

void non_return_func(string praktikan1, string praktikan2, int kelompok) {
	cout << "Selamat datang di Praktikum DKP 2021\n";
	cout << praktikan1 << " dan " << praktikan2 << " adalah kelompok " << kelompok;
}

int return_func(int perkalian) {
	if (perkalian > 0 || perkalian < 3) {
		return perkalian * 3;
	}
	else {
		return perkalian * 0;
