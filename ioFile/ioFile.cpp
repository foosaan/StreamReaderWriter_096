#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam node menulis.
	ofstream outfile;
	//menunjukkan ke sebuah nama file
	outfile.open("contoh file.txt");

	cout << ">= Menulis file, \'p\' untuk keluar" << endl;

	//unlimites loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang menutup filenya
	outfile.close();

	//membuka file dalam node membaca
	ifstream infile;
    //menunjukkan ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= membuka dan membaca file " << endl;
	//jika file maka
	if (infile.is_open())
	{
		//melakukan sebuah perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to open file";
	return 0;
}