#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()

{
	
	string nama,nim,plug;
	int jumlah;
	
	//input data
	cout<<"Masukkan"<<"\n"
		<<"----------"<<"\n";
		
	cout<<"Nama"<<setw(6)<<":";
	getline(cin,nama);
	
	cout<<"NIM"<<setw(7)<<":";
	getline(cin,nim);
	
	cout<<"Plug"<<setw(6)<<":";
	getline(cin,plug);
	
	//output data
	cout<<"\n"<<"Inilah data Anda :"<<"\n";
	
	cout<<"Nama"<<setw(6)<<":"<<nama<<"\n";
	cout<<"NIM"<<setw(7)<<":"<<nim<<"\n";
	cout<<"Plug"<<setw(6)<<":"<<plug<<"\n";
	
	//menghitung total karakter
	jumlah = nama.length() + nim.length() + plug.length() + 6 + 11;
	
	//tabel
	//======= Header =======
	cout<<"\nDalam bentuk tabel :"<<endl;
	
	cout<<setfill('=')<<setw(jumlah-2)<<"="<<"\n";
	
	cout<<setfill(' ')
		<<"NIM"<<setw(nim.length())
		<<"|"<<setw(6)<<"Nama"<<setw(nama.length())
		<<"|"<<setw(6)<<"Plug"<<setw(plug.length())<<"|"<<"\n";
		
	cout<<setfill('=')<<setw(jumlah-2)<<"="<<"\n";
	
	//====== Row =======
	cout<<setfill(' ')
		<<nim<<setw(3)
		<<"|"<<setw(nama.length()+2)<<nama<<setw(4)<<"|"
		<<setw(plug.length()+2)<<plug<<setw(4)<<"|"<<"\n";
		
	cout<<setfill('=')<<setw(jumlah-2)<<"="<<"\n";
	
	return 0;
}
