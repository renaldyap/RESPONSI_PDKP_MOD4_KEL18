#include <iostream>

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
	cout << "Apakah Anda ingin memesan makanan yang lain ?\n";
	cout << "\n1) ya\n2) tidak\n\n";
}

int main() {
	int a, w, x, y, z, total, kembalian, saldo = 100000, harga[4] = { 8000, 12000, 20000, 5000 }, i = 0;
	char nama[10];
	paket makanan;


	cout << "Program Pemesanan makanan Modul 4\n";
	cout << "Shift 1\n";
	cout << "Anggota kelompok 18 :\n";
	cout << "Hammam Faiz            21120120140076\n";
	cout << "Muhammad Arif Razmi    21120120130116\n";
	cout << "Renaldy Andara Permata 21120120130055\n";
	cout << "Zulzupi Pajarudin      21120120140152\n";


	header();
	cout << "Masukkan nama Anda terlebih dahulu : "; cin >> nama;
	system("cls");
	cout << "\n\t     Selamat datang " << nama << endl;

daftar:
	cout << "\n     Pilihlah menu paketan yang tersedia \n\n";
	cout << "1) Nasi + ayam sambalado + telur puyuh			Rp8.000,00	\n";
	cout << "2) Nasi + usus ayam + tumis kangkung			Rp12.000,00	\n";
	cout << "3) Nasi + ikan tongkol balado + tempe goreng		Rp20.000,00	\n";
	cout << "4) Nasi + Telur puyuh + orek tempe			Rp5.000,00	\n";

	cout << "\n\n     (Pilihlah menu berdasarkan nomor)\n";

	cin >> x;
	system("cls");
	switch (x) {
	case 1:
		cout << "  Anda memilih paket " << makanan.paket1() << "\n" << endl;
		cout << "\tJumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[1];
		cout << endl;
		system("cls");
		cout << "\n\t\t\t======== \n";
		cout << "\t\t\tCheckout \n";
		cout << "\t\t\t======== \n";
		cout << "\nAnda memesan paket " << makanan.paket1() << " sebanyak " << y << endl;
		break;
	case 2:
		cout << "  Anda memilih paket " << makanan.paket2() << "\n" << endl;
		cout << "\tJumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[2];
		cout << endl;
		system("cls");
		cout << "\n\t\t\t======== \n";
		cout << "\t\t\tCheckout \n";
		cout << "\t\t\t======== \n";
		cout << "\nAnda memesan paket " << makanan.paket2() << " sebanyak " << y << endl;
		i = 1;
		break;
	case 3:
		cout << "  Anda memilih paket " << makanan.paket3() << "\n" << endl;
		cout << "\tJumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[3];
		cout << endl;
		system("cls");
		cout << "\n\t\t\t======== \n";
		cout << "\t\t\tCheckout \n";
		cout << "\t\t\t======== \n";
		cout << "\nAnda memesan paket " << makanan.paket3() << " sebanyak " << y << endl;
		i = 2;
		break;
	case 4:
		cout << "  Anda memilih paket " << makanan.paket4() << "\n" << endl;
		cout << "\tJumlah porsi paket yang ingin Anda beli: "; cin >> y;
		total = y * harga[4];
		cout << endl;
		system("cls");
		cout << "\n\t\t\t======== \n";
		cout << "\t\t\tCheckout \n";
		cout << "\t\t\t======== \n";
		cout << "\nAnda memesan paket " << makanan.paket4() << " sebanyak " << y << endl;
		i = 3;
		break;
	default:
		cout << "Anda tidak memilih menu apapun\n";
		system("cls");
		goto daftar;
	}
	do {
		if (saldo < total) {
			cout << "\tTotal uang yang harus Anda bayarkan : " << total << endl;
			cout << "\tMaaf saldo yang Anda miliki tidak cukup\n";
			cout << "\tSilahkan lakukan pemesanan kembali\n";
			system("pause");
			system("cls");
			goto daftar;
		}
		cout << "\tTotal uang yang harus Anda bayarkan : " << total << endl;
		system("pause");
		system("cls");
		cout << "Total uang yang harus Anda bayarkan : " << total << endl;
		cout << "\tSilahkan lakukan pembayaran \n\n";
		cout << "Masukkan jumlah uang yang ingin Anda bayarkan \n\n";
		cout << "Nominal: ";
		cin >> z;

	} while (saldo = z < total);
	cout << "Saldo Anda tidak mencukupi, silahkan bayar kembali \n";
	cin >> w;
	z += w;

	system("cls");
	ask();
	cin >> a;
	switch (a) {
	case 1:
		system("cls");
		cout << "\n";
		header();
		goto daftar;
		break;
	default:
		system("cls");
		footer();
		break;
	}



}

