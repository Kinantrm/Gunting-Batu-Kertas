#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	string nama, pilih;
	int pemain = 0;
	int lawann = 0;
	int seri = 0;
	int ronde;
	char v;
	system("cls");
	cout<<"@Kinantrm"<<endl;
	cout<<"========================="<<endl;
	cout<<"GUNTING BATU KERTAS"<<endl;
	cout<<"========================="<<endl;
	cout<<"Tulis Nama Kamu : ";
	getline (cin, nama);
	nama[0] = toupper(nama[0]);
	ulang:
	cout<<"Pilih Berapa Ronde (1~10) : " ;
	cin>>ronde;
		if (ronde >10){
			cout<<"Kelebihan cuy"<<endl;
			cout<<"Ulangi Lagi? (y/n)";
			cin>>v;
			if (v == 'y') goto ulang;
		}
		else if (ronde <11){
			
	for (int i = 0 ; i< ronde ; i++){
	srand((unsigned)time(0)); 
	int lawan;
	 lawan = (rand()%3)+1;
	system("cls");
	cout<<"@Kinantrm"<<endl;
	cout<<"========================="<<endl;
	cout<<"Pilih Yang Ingin Kamu Pilih"<<endl;
	cout<<"1. batu"<<endl;
	cout<<"2. gunting"<<endl;
	cout<<"3. Kertas"<<endl;
	cout<<"Enter : ";
	cin>>pilih;
	cout<<"========================="<<endl;
	
	if (pilih == "batu" || pilih == "1"){
		cout<<nama<<" Memilih : BATU"<<endl;
		
		if (lawan == 1){
			cout<<"Lawan Memilih : BATU"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : SERI !"<<endl;
			seri += 1;
		}
		else if (lawan == 2){
			cout<<"Lawan Memilih : KERTAS"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : KALAH !"<<endl;
			lawann += 1;
		}
		else if (lawan == 3){
			cout<<"Lawan Memilih : GUNTING"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan  : MENANG !"<<endl;
			pemain += 1;
		}
	}
	else if (pilih == "gunting" || pilih == "2"){
		cout<<nama<<" Memilih : GUNTING"<<endl;
		
		if (lawan == 1){
			cout<<"Lawan Memilih : KERTAS"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : MENANG !"<<endl;
			pemain += 1;
		}
		else if (lawan == 2){
			cout<<"Lawan Memilih : BATU"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : KALAH !"<<endl;
			lawann += 1;
		}
		else if (lawan == 3){
			cout<<"Lawan Memilih : GUNTING"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : SERI !"<<endl;
			seri += 1;
		}
}
	else if (pilih == "kertas" || pilih == "3"){
		cout<<nama<<" Memilih : KERTAS"<<endl;	
			
		if (lawan == 1){
			cout<<"Lawan Memilih : GUNTING"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : KALAH !"<<endl;
			lawann += 1;
		}
		else if (lawan == 2){
			cout<<"Lawan Memilih : BATU"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : MENANG !"<<endl;
			pemain += 1;
		}
		else if (lawan == 3){
			cout<<"Lawan Memilih : KERTAS"<<endl;
			cout<<"========================="<<endl;
			cout<<"Hasil Pertandingan : SERI !"<<endl;
			seri += 1;
		}
}
	cout<<"========================="<<endl;
	cout<<"Skor "<<nama<<": "<<pemain<<endl;
	cout<<"Skor Lawan : "<<lawann<<endl;
	cout<<"Skor Seri : "<<seri<<endl;
	cout<<"========================="<<endl;
	system("pause");
	}
	cout<<"========================="<<endl;
	cout<<"Hasil Akhir Pertandingan : ";
	if (pemain > lawann){
		cout<<nama<<" MENANG !"<<endl;
	}
	else if (lawann > pemain){
		cout<<"KAMU KALAH !"<<endl;
	}
	else if (pemain == lawann){
		cout<<"PERTANDINGAN SERI !"<<endl;
	}
	cout<<"========================="<<endl;
		
		}
		return 0;
}
		
		
