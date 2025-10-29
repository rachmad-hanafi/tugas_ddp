#include<iostream>
using namespace std;

int main(){
	long detik;
	int jam ,menit;
	
	cout << "masukan angka >1 (dalam satuan detik) :";
	cin >> detik;
	
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	detik=detik%60;
	
    cout<<endl;
    cout<<"hasil konversi:"<<endl;
	cout <<jam << " " << "jam" << " " << menit << " " << "menit" << " " << detik << " " << "detik" <<endl;
	
	return 0;
	
}
