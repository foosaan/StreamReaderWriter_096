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
    
}