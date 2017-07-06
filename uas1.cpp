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

	// variabel
		int a, b, c, temp;
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
		cout << "============================" << endl; 
		baca();
		tukar();
		tampilProg4();
		cout << endl << endl;
		
		//program5.cpp
		cout << "Program dengan Function " << endl;
		cout << "=========================== " << endl;
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
		
		cout << "Hasil : " << tambahProg7(e,f) << endl;
		
		return 0;
	}
	
	void baca (){
		cout << "Masukkan Nilai A : ";
		cin >> a;
		
		cout << "Masukkan Nilai B : ";
		cin >> b;
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