#include <iostream>
using namespace std;
int function_td (int j, int m, int d);
int function_waktu (int td);
void tampil (int show);
int main(){
	cout<<"-----------------------------------------"<<endl;
	cout<<"- PROGRAM FUNCTION KONVERSI TOTAL DETIK -"<<endl;
	cout<<"-----------------------------------------";
	cout<<endl;
	cout<<endl;
	int td,waktu,a,b,c,d;
	td=function_td(a,b,c);
	tampil(td);
	waktu=function_waktu(d);
	return 0;	
}
//function mencari total detik
int function_td(int j, int m, int d){
	int td;
	cout<<"[ KONVERSI WAKTU KE TOTAL DETIK ]"<<endl;
	cout<<"masukan waktu"<<endl;
	cout<<"Jam		=";cin>>j;
	cout<<"Menit	=";cin>>m;
	cout<<"Detik	=";cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detiknya adalah = ";
	return td;
}
//function konversi total detik ke jam, menit dan detik
int function_waktu(int td){
	int j,m,sm,d;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"[ KONVERSI TOTAL DETIK KE JAM, MENIT, DETIK]"<<endl;
	cout<<"Masukan total detik :";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Waktu Awalnya Adalah = "<<j<<";"<<m<<";"<<d<<endl;
	return 0;
}
void tampil (int show){
	cout<<show;
}
