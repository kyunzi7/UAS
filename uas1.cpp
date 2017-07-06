#include <iostream>
#define PHI 3.14 // konstanta
using namespace std;

//prototype

void baca();
void tukar();
void tampilProg4();
int tambah();
int kurang();
void tampilProg5();
int tambahProg6(int c, int d);
int tambahProg7(int e, int f);

void bacaProg8();
float tambahProg8();
float kurangProg8();
float kaliProg8();
float bagiProg8();
void pilihProg8();
void prosesProg8();
void tampilProg8();
	// variabel
		int a, b, c, temp, pilih;
		float g,h;
int main(){
		int e,f;
		//program1.cpp
		float bagi;
		a = 10;
		b = 20;
		c = a + b;
		cout << "10 + 20 = " << c << endl;
		bagi = 70.0/3.0;
		cout << "70 / 3 = " << bagi << endl;
		cout << "Terima Kasih" << endl << endl << endl;
		
		//program2.cpp
		float jari_jari, luas;
		jari_jari = 25;
		luas = 0.5 * PHI * jari_jari * jari_jari;
		cout << "Data Lingkaran : " << endl;
		cout << "Jari - Jari : " << jari_jari << endl;
		cout << "Luas : " << luas << endl << endl << endl;
		
		//program3.cpp
		cout << "Masukan nilai A : ";
		cin >> a;
		cout << "Masukan nilai B : ";
		cin >> b;
		temp = b;
		b = a;
		a = temp;	
		cout << "=====================================" << endl;
		cout << "Nilai A Sekarang : " << a << endl;
		cout << "Nilai B Sekarang : " << b << endl << endl << endl;
		
		//program4.cpp
		cout << "Program dengan Procedure" << endl;
		baca();
		tukar();
		tampilProg4();
		cout << endl << endl;
		
		//program5.cpp
		cout << "Program dengan Function " << endl;
		baca();
		tampilProg5();
		cout << endl << endl;
		
		
		//program6.cpp
		cout << "Program dengan menggunakan Parameter" << endl;
		cout << "==========================================" << endl;
		cout << "5 + 6 = " << tambahProg6(5,6) << endl << endl << endl;
		
		//program7.cpp
		cout << "Program dengan menggunakan Parameter Input" << endl;
		cout << "==========================================" << endl;
		
		cout << "Masukkan nilai E : ";
		cin >> e;
		cout << "Masukkan Nilai F : ";
		cin >> f;
		
		cout << "Hasil : " << tambahProg7(e,f) << endl << endl << endl << endl;
		
		//program8-kalkulator.cpp
		cout << "\nProgram Kalkulator Sederhana Menggunakan Prosedur dan Function" << endl;
		cout << "=================================================================\n" << endl;
		pilihProg8();
		prosesProg8();
		
		
		
		return 0;
	}
	
	void baca (){
		cout << "==================================================================\n";
		cout << "\nMasukkan Nilai A : ";
		cin >> a;
		
		cout << "Masukkan Nilai B : ";
		cin >> b;
	}
	
	void bacaProg8(){
		cout << "==================================================================\n";
		cout << "\nMasukkan Nilai G : ";
		cin >> g;
		
		cout << "Masukkan Nilai H : ";
		cin >> h;
	}
	
	void pilihProg8(){
		cout << "1. Penambahan ( + ) " << "			" << "2. Pengurangan ( - )" << endl;
		cout << "3. Perkalian ( * )" << "			" << "4. Pembagian ( / )" << endl;
		cout << "\nPilih Operator : ";
		cin >> pilih;
	}
	
	
	void tukar (){
		temp = b;
		b = a;
		a = temp;
	}
	

	void tampilProg4(){
		cout << "==================================" << endl;
		cout << "Nilai A sekarang : " << a << endl;
		cout << "Nilai B sekarang : " << b << endl;
	}
	
	int tambah(){
		return a + b;
	}
	int tambahProg6(int c, int d){
		return c + d;
	}
	
	int tambahProg7(int e, int f){
		return e + f;
	}

	
	int kurang(){
		int hasil;
		hasil = a - b;
		return hasil;
	}
	
	void tampilProg5(){
		cout << "Hasil Tambah : " << tambah() << endl;
		cout << "Hasil Kurang : " << kurang() << endl;
	}
	
	float tambahProg8(){
		return g + h;
	}

	 float kurangProg8(){
		 float hasil;
		hasil = g - h;
		return hasil;
	}
	

	 float kaliProg8(){
		float hasil;
		hasil = g * h;
		return hasil;
	}
	
	float bagiProg8(){
		float d;
		d = g / h;
		return d;
	}
	
	void prosesProg8(){
		if ( pilih == 1){
			bacaProg8();
			tambahProg8();
			tampilProg8();
		}else if ( pilih == 2){
			bacaProg8();
			kurangProg8();
			tampilProg8();
		}else if ( pilih == 3){
			bacaProg8();
			kaliProg8();
			tampilProg8();
		}else if ( pilih == 4){
			bacaProg8();
			bagiProg8();
			tampilProg8();

		}else{
			cout << "Inputan Error" << endl;
		}
		
	}
	
	void tampilProg8(){
		if ( pilih == 1){
			cout << "\nHasil  : " << tambahProg8() << endl;
		}else if ( pilih == 2){
			cout << "\nHasil  : " << kurangProg8() << endl;
		}else if ( pilih == 3){
			cout << "\nHasil  : " << kaliProg8() << endl;
		}else if ( pilih == 4){
			cout << "\nHasil  : " << bagiProg8() << endl;
		}else{
			cout << "Tidak Ada";
		}
		
	}