#include <iostream>
#include <conio.h>

using namespace std;




//prototype//
void input();
void choiceA();
void choiceB();

//variable global//
int angka, jmlh, max, min, choice;


main () {

	while (choice != 3) {
		cout << "================================\n";
		cout << "MENU\n";
		cout << " 1. Cari nilai terkecil\n";
		cout << " 2. Cari nilai terbesar\n";
		cout << " 3. Keluar\n";
		cout << "================================\n";
		cout << "Pilihan Anda : ";
		cin >> choice;
	
	
	if (choice == 1) {
		pilihanA();
	
	} else if (choice == 2) {
		pilihanB();
	}

}
}


void choiceA() {
	int angka, jmlh, max, min;
     
       cout << "1. Mencari nilai terkecil. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jmlh;
       cout << endl;
    
       for (int i = 1; i <= jmlh; i++) {
     
       cout << "Masukkan Angka       : "; cin >> angka;
   
       if ( i == 1 ) {
		   jmlh;
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
	   cout << "jumlah : "	<< jmlh  << endl;
     
    
    }
	   
void choiceB() {
		int angka, jmlh, max, min;
	cout << "2. Mencari nilai terbesar. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jmlh;
       cout << endl;
    
       for (int i = 1; i <= jmlh; i++) {
		
       cout << "Masukkan Angka       : "; cin >> angka;
			
       if ( i == 1 ) {
				jmlh;
             min = angka;
             max = angka;
            }
            else if ( max < angka ) {
               max = angka;
            }
           }
    
       cout << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
	   cout << "jumlah : "	<< jmlh  << endl;
     
}

//yazki baynurrahman TIF RM-A 
