#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class paket {
public:
	string paket1() {
		return "Nasi + ayam sambalado + telur puyuh ";
	}
	string paket2() {
		return "Nasi + usus ayam + tumis kangkung ";
	}
	string paket3() {
		return "Nasi + ikan tongkol balado + tempe goreng ";
	}
	string paket4() {
		return "Nasi + Telur puyuh + orek tempe	 ";
	}
};

void header() {
	cout << "\t===========================\n";
	cout << "\tWarung Tegal Bukan Di Tegal\n";
	cout << "\t===========================\n";
}

void footer() {
	cout << "\t===============================\n";
	cout << "\tTerimakasih atas kunjungan anda\n";
	cout << "\t===============================\n";
}

void ask() {
	cout << "\n\n \tPemesanan selesai \n";
	cout << "Apakah Anda ingin memesan makaknan yang lain ?\n";
	cout << "\n1) ya\n2) tidak\n\n";

}


int main() {
	int x, y, z, total, kembalian, saldo = 50000, harga[4] = { 8000, 12000, 20000, 5000 }, i = 0;
	char nama[10];
	paket makanan;

	header();
	cout << "\tMasukkan nama Anda terlebih dahulu : "; cin >> nama;
	system("cls");
	cout << "\n\tSelamat datang " << nama << endl;

daftar:
	cout << "\nPilihlah menu paketan yang tersedia\n\n";
	cout << "1) Nasi + ayam sambalado + telur puyuh			Rp8.000,00	\n";
	cout << "2) Nasi + usus ayam + tumis kangkung			Rp12.000,00	\n";
	cout << "3) Nasi + ikan tongkol balado + tempe goreng		Rp20.000,00	\n";
	cout << "4) Nasi + Telur puyuh + orek tempe			Rp5.000,00	\n";

	cout << "\n\n\t(Pilihlah menu berdasarkan nomor)\n";

	cin >> x;
	system("cls");
	switch (x) {
	case 1:
		cout << "Anda memilih paket " << makanan.paket1() << "\n" << endl;
		cout << "Jumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[1];
		cout << endl;
		cout << "\n\t=============================== \n";
		cout << "\tCheckout \n";
		cout << "\n\t=============================== \n";
		cout << "Anda memesan paket " << makanan.paket1() << " sebanyak " << y << endl;
		cout << "Total uang yang harus Anda bayarkan : " << total << endl;
		ask();
		break;
	case 2:
		cout << "Anda memilih paket " << makanan.paket2() << "\n" << endl;
		cout << "Jumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[2];
		cout << endl;
		cout << "\n\t=============================== \n";
		cout << "\tCheckout \n";
		cout << "\n\t=============================== \n";
		cout << "Anda memesan paket " << makanan.paket2() << " sebanyak " << y << endl;
		cout << "Total uang yang harus Anda bayarkan : " << total << endl;
		i = 1;
		ask();
		break;
	case 3:
		cout << "Anda memilih paket " << makanan.paket3() << "\n" << endl;
		cout << "Jumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[3];
		cout << endl;
		cout << "\n\t=============================== \n";
		cout << "\tCheckout \n";
		cout << "\n\t=============================== \n";
		cout << "Anda memesan paket " << makanan.paket3() << " sebanyak " << y << endl;
		cout << "Total uang yang harus Anda bayarkan : " << total << endl;
		i = 2;
		ask();
		break;
	case 4:
		cout << "Anda memilih paket " << makanan.paket4() << "\n" << endl;
		cout << "Jumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[4];
		cout << endl;
		cout << "\n\t=============================== \n";
		cout << "\tCheckout \n";
		cout << "\n\t=============================== \n";
		cout << "Anda memesan paket " << makanan.paket4() << " sebanyak " << y << endl;
		cout << "Total uang yang harus Anda bayarkan : " << total << endl;
		i = 3;
		ask();
		break;
	default:
		cout << "Anda tidak memilih menu apapun\n";
		system("cls");
		goto daftar;
	}
}
