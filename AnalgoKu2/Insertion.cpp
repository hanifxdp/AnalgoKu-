/*
Nama            : Hanif Dwi 
NPM             : 140810180035
Kelas 			: A
*/

#include <iostream>
#include <conio.h>
using namespace std;

int data[100],data2[100],jumlah;


void Insert_sort()
{
	int temp,i,j;
	for(i=1;i<=jumlah;i++)
    {
        temp = data[i];
		j = i -1;
        
        while(data[j]>temp && j>=0)
        {
			data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
	}
}

main()
{
	cout << "\=========Insertion Short=========="<<endl;
	cout <<"Masukkan Jumlah Data : "; 
	cin  >>jumlah;
	cout <<endl;
	cout << "\n=================================" << endl;
	
	for(int i=1;i<=jumlah;i++)
    {
        cout<<"Masukkan data ke-"<<i<<" : ";
        cin>>data[i];
        data2[i]=data[i];
	}

    cout <<endl;
	cout << "=================================" << endl;
	Insert_sort();
    cout<<endl;
	cout<<"Data Setelah di Urutkan : "<<endl;
	
	for(int i=1; i<=jumlah; i++)
	{
        cout<<data[i]<<" ";
	}
    cout <<endl;
	cout << "=================================="<<endl;
	getch();
}
