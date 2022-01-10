/*
Nama   : Musmuliadi
NPM    : 2010010283
Kelas  : 3F Reg Malam BJM
Matkul : pemrograman terstruktur
*/

// Program penjualan tiket kereta api

#include <iostream>
using namespace std; 

#define vip 300000
#define bisnis 200000

int main(){
	const int ekonomi = 50000;
	
	string nama, rute, jkelamin, jam, kode;
	char pilihanJK, tgl[20], lagi;
	int tujuan, harga, kelas, hrtujuan, hrkelas, pjam;
	
	do{
		for(int i=0; i<1; i++){
			cout << "************************************" << endl;
			cout << "         SELAMAT DATANG DI          " << endl;
			cout << "   LOKET TIKET KERETA API PALAKKA   " << endl;
			cout << "   Jl. Sungai Musi KM.10 Makassar   " << endl;
			cout << "************************************" << endl;
			cout << endl;
		}
		
		// program pengimputan data penumpang
		cout << "Silahkan masukkan data anda : "<< endl;
		cout << "   Nama               = "; cin >> nama;
		cout << "   Jenis Kelamin[L/P] = "; cin >> pilihanJK;
		
		switch(pilihanJK){
			case 'L' :
				jkelamin = "Laki - Laki";
				break;
			case 'P' :
				jkelamin = "Perempuan";
				break;
				
		}
		
		cout << "   Masukkan Tanggal Keberangkatan [dd/mm/yy] = "; cin >> tgl;
		cout << endl;
		
		//program pemilihan tujuan penumpang
		cout << "Silahkan pilih tujuan anda : " << endl;
		cout << "   ---------------------------------" << endl;
		cout << "   |No. |  Tujuan  |     Harga     |" << endl;
		cout << "   ---------------------------------" << endl;
		cout << "   |1.  | Bone     | Rp. 300.000,- |" << endl;
		cout << "   |2.  | Wajo     | Rp. 450.000,- |" << endl;
		cout << "   |3.  | Soppeng  | Rp. 250.000,- |" << endl;
		cout << "   |4.  | Luwu     | Rp. 600.000,- |" << endl;
		cout << "   ---------------------------------" << endl;
		cout << "Masukkan pilihan anda [1/2/3/4] = "; cin >> tujuan;
		cout << endl;
		
		switch(tujuan){
			case 1 :
				harga = 300000;
				hrtujuan = 300000;
				rute = "Makassar - Bone";
				kode ="MB";
				break;
			case 2 :
				harga= 450000;
				hrtujuan = 450000;
				rute = "Makassar - Wajo";
				kode = "MW";
				break;	
			case 3 :
				harga = 250000;
				hrtujuan = 250000;
				rute = "Makassar - Soppeng";
				kode = "MS";
				break;	
			case 4 :
				harga = 600000;
				hrtujuan = 600000;
				kode = "ML";
				rute = "Makassar - Luwu";
				break;
			default :
				cout << "Menu tidak tersedia" << endl;
				cout << endl;
		}
		
		//program pemilihan kelas penumpang
		cout << "Silahkan pilih kelas :" << endl;
		cout << "   --------------------------------" << endl;
		cout << "   |N0. |  Kelas  |    Harga      |" << endl;
		cout << "   --------------------------------" << endl;
		cout << "   |1.  | Ekonomi | Rp. 50.000,-  |" << endl;
		cout << "   |2.  | Bisnis  | Rp. 200.000,- |" << endl;
		cout << "   |3.  | VIP     | Rp. 300.000,- |" << endl;
		cout << "   --------------------------------" << endl;
		cout << "Masukkan pilihan anda [1/2/3] = "; cin >> kelas;
		cout << endl;
		
		switch(kelas){
			case 1 :
				harga += ekonomi;
				hrkelas = ekonomi;
				kode += "E";
				break;
			case 2 :
				harga += bisnis;
				hrkelas = bisnis;
				kode += "B";
				break;
			case 3 :
				harga += vip;
				hrkelas = vip;
				kode += "V";
				break;
			default :
				cout << "Menu tidak tersedia " << endl;
				cout << endl;
		}
		
		
		//program pemilihan jam keberangkatan
		cout << "Silahkan pilih jam keberangaktan : " << endl;
		cout << "   ----------------------------" << endl;
		cout << "   |No. | Waktu  |     Jam    | " << endl;
		cout << "   ----------------------------" << endl;
		cout << "   |1.  | Pagi   | 07.30 WITA | " << endl;
		cout << "   |2.  | Siang  | 13.30 WITA | " << endl;
		cout << "   |3.  | Malam  | 19.30 WITA | " << endl;
		cout << "   ----------------------------" << endl;
		cout << "Masukkan pilihan anda [1/2/3] = "; cin >> pjam;
		cout << endl;
		
		switch(pjam){
			case 1 :
				jam = "07.30 WITA";
				kode += "73P";
				break;	
			case 2 :
				jam = "13.30 WITA";
				kode += "133S";
				break;	
			case 3 :
				jam = "19.30 WITA";
				kode += "193M";
				break;
			default :
				cout << "Menu tidak tersedia " << endl;
				cout << endl;
		}
		
		// tiket penumpang
		cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "                TIKET KERETA API PALAKKA           " << endl;
		cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "                                                   " << endl;
		
		cout << "       Kode tiket            = "<< kode     << endl;
		cout << "       Nama Penumpang        = "<< nama     << endl;
		cout << "       Jenis Kelamin         = "<< jkelamin << endl;
		cout << "       Tujuan                = "<< rute     << endl;
		cout << "       Tanggal Keberangkatan = "<< tgl      << endl;
		cout << "       Jam keberangkatan     = "<< jam      << endl;
		
		cout << "                                                   " << endl;
		cout << "       Keterangan harga                            " << endl;
		cout << "          Harga tujuan       = Rp. "<< hrtujuan << endl;
		cout << "          Harga kelas        = Rp. "<< hrkelas  << endl;
		cout << "                                   ------- +"  << endl;
		cout << "          total Harga        = Rp. "<< harga    << endl;
		
		cout << "                                                   " << endl;
		cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "             Jl. Sungai Musi KM.10 Makassar        " << endl;
		cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		
		cout << "Ingin memesan tiket lagi(y/t)"; cin >> lagi;
		
	}while(lagi == 'y' || lagi == 'y');
		cout << "Terima kasih telah memesan tiket" << endl;
	
	return 0;
}
