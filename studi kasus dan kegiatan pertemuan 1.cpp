#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ofstream print;
	print.open("Struk.txt");
	
	int menu, total, banyak, diskon;
	cout<<"Menu : "<<endl;
	cout<<"1. Ayam Goreng     17.000"<<endl;
	cout<<"2. Ayam Bakar      21.000"<<endl;
	cout<<"Masukan Pilihan anda : "<<endl;
	cin>>menu;
	if(menu == 1){ 
    	cout<<"Masukkan jumlah : ";
    	cin>>banyak;
    	total = banyak*15000;
    	cout<<"Total Paket 1 : "<<total<<endl;
    	
    	print<<"Menu : Ayam Goreng"<<endl;
    	print<<"Jumlah : "<<banyak<<endl;
    	print<<"Total Paket 1 : "<<total<<endl;
    }
	else if(menu == 2){
    	cout<<"Masukkan jumlah : ";
    	cin>>banyak;
    	total = banyak*21000;
    	cout<<"Total Paket 2 : "<<total<<endl;
    	
    	print<<"Menu : Ayam Bakar"<<endl;
    	print<<"Jumlah : "<<banyak<<endl;
    	print<<"Total Paket 1 : "<<total<<endl;
    }
	else{
    	cout<<"Maaf, menu tidak tersedia";          
    }
    
    if (total>45000){
 	diskon=0.1*total;
 	cout<<"Diskon 10% = Rp. "<<diskon<<endl;
 	total=total-diskon;
 	cout<<"Total  = Rp. "<<total<<endl;
 	
 	print<<"Diskon 10% = Rp. "<<diskon<<endl;
 	print<<"Total  = Rp. "<<total<<endl;
 }
    return 0;
}
