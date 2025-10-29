#include<iostream>
using namespace std;

int main(){
	long detik;
	int hari , jam , menit;
	
	cout << "masukan angka >1 (dlm satuan detik) =";
	cin >> detik;
	
	hari=detik/86400;
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	detik=detik%60;
	
	cout << endl;
	cout << "hasil konversi:" <<endl;
	cout << hari << " "<<"hari" <<" "<< jam <<" "<< "jam"<< " " << menit <<" "<< "menit"<<" " << detik <<" "<< "detik";
	
	return 0;
	
}
