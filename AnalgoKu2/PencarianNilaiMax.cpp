#include <iostream>
#include <conio>

void main() {
    
    int i = 1, angka, jumlah, max, min;
    char jwb;
    
    cout << "2. Mencari nilai terbesar dan terkecil." << endl;
    cout << endl;
    
    do {
        cout << "Masukkan Angka         : "; cin >> angka;
        
        if ( i == 1 ) {
            min = angka;
            max = angka;
        } 
        else if ( min > angka ) {
            min = angka;
        }
        else if ( max < angka) {
            max = angka;
        }
        
        i++;
        
        cout << "input angka lagi (y/n) : "; cin >> jwb;
        
    } while (jwb == 'y');
    
    cout << endl;
    cout << "Nilai Max          : " <<  max << endl;
    
    getch();
}