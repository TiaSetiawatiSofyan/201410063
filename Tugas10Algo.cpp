//Gaji_bersih
#include<iostream>
#include<string>
using namespace std;
const int persentunjangan = 0.2;
const int persenpajak = 0.15;
int main ()
{
	//Deklarasi Variable
	string namakaryawan;
	float gajibersih, gajipokok, pajak, tunjangan;
	cout<<"========================="<<endl;
	cout<<"=	 TUGAS 10	 ="<<endl;
	cout<<"========================="<<endl;
	
	//input Nama Karyawan dan Gaji Pokok
	cout<<"Masukan Nama Karyawan : ";
	getline(cin,namakaryawan);
	cout<<"Gaji Pokok = ";cin>>gajipokok;
	
	//Proses Perhitungan
	tunjangan = 0.2 * gajipokok;
	pajak = 0.15 * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	//Tampilan Akhir
	cout<<"Gaji Bersih "<<namakaryawan;
	cout<<" Adalah = Rp."<<gajibersih;
	return 0;
}
