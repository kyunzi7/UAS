#include <iostream>
#define PHI 3.14 // konstanta
using namespace std;

// record
typedef struct{
	string hari;
	string bulan;
	string tahun;
}tanggal;

typedef struct{
	int detik;
	int menit;
	int jam;
}jam;

typedef struct{
	int noKA;
	string kotaAsalKA;
	tanggal tglBerangkat;
	jam jamBerangkat;
	string kotaTujuanKA;
	tanggal tglTiba;
	jam jamTiba;
}jadwalKA;

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
void prog9();
void prog10();



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
		cout << endl << endl;
		
		//program9_array9.cpp
		prog9();
		cout << endl << endl;
		
		//program10_record1.cpp
		prog10();
		cout << endl << endl;
		
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
	
	void prog9(){
		int sum, i;
		int TabInt[10];
		
		cout << "Isilah 10 data nilai dalam range 0 - 100 : " << endl;
		for(i=0; i<10; i++){
			cin >> TabInt[i];
		}
		
		cout << "Data Input : " << endl;
		
		sum=0;
		for(i=0; i<10; i++){
			cout << TabInt[i] << endl;
			sum += TabInt[i];
		}
		
		cout << "Rata - Rata : " << (float)sum/10.0 << endl;
	}
	
	void prog10(){
		jadwalKA A;
	
		A.noKA = 1;
		
		//Asal
		A.kotaAsalKA = "Bandung";
		A.tglBerangkat.hari = "Rabu / 09";
		A.tglBerangkat.bulan = "Desember";
		A.tglBerangkat.tahun = "2017";
		A.jamBerangkat.jam = 15;
		A.jamBerangkat.menit = 46;
		A.jamBerangkat.detik = 59;
		
		//tujuan
		A.kotaTujuanKA = "Surabaya";
		A.tglTiba.hari = "Kamis / 10";
		A.tglTiba.bulan = "Desember";
		A.tglTiba.tahun = "2017";
		A.jamTiba.jam = 15;
		A.jamTiba.menit = 46;
		A.jamTiba.detik = 59;

		
		cout << "Nomor KA : " << A.noKA << endl;
		cout << "	\nJadwal Pemberangkatan  " << endl;
		cout << "=======================================" << endl;
		cout << "Kota Asal : " << A.kotaAsalKA << endl;
		cout << "Jam Pemberangkatan : " << A.jamBerangkat.jam << ":" << A.jamBerangkat.menit << ":" << A.jamBerangkat.detik<< endl;
		cout << "Tanggal Pemberangkatan : " << A.tglBerangkat.hari << " - " << A.tglBerangkat.bulan << " - " << A.tglBerangkat.tahun << endl;
		
		cout << "	\nJadwal Tujuan  " << endl;
		cout << "=======================================" << endl;
		cout << "Kota Tujuan : " << A.kotaTujuanKA << endl;
		cout << "Jam Pemberangkatan : " << A.jamTiba.jam << ":" << A.jamTiba.menit << ":" << A.jamTiba.detik<< endl;
		cout << "Tanggal Pemberangkatan : " << A.tglTiba.hari << " - " << A.tglTiba.bulan << " - " << A.tglTiba.tahun << endl;
	}
