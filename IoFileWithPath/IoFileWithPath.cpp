#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "masukkan nama file : ";
	cin >> namafile;

    //membuka file dalam node menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlimites loop untuk menulis
	while (true) {
		cout << "-";
		//menambahkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam node membaca
	ifstream infile;

	//menunjuk ke sebuah file
	infile.open(namafile, ios::in);

	cout << endl << ">= membuka dan membaca file" << endl;
	//jika dile tidak ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << 'n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to open file";
	return 0;
}
//