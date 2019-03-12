/*********************************************
	Nama	: Fadhli Hibatul Haqqi
	NPM		: 140810170019
	Kelas	: A
	Tanggal	: 06/03/2019
	Program	: Pencarian Elemen Maksimum
*********************************************/
#include<iostream>
using namespace std;

void CariMaks(int n, int x[]){
	int maks;
	maks = x[0];
	int i = 1;
	while(i < n){
		if(x[i]>maks){
			maks = x[i];
		}
		i++;
	}
	cout<<"Elemen Maksimum = "<<maks;
}

int main(){
	int n;
	cout<<"Banyak elemen : "; cin>>n;
	int x[n];
	cout<<"Masukan Elemen Angka"<<endl;
	for(int i = 0; i < n; i++){
		cout<<"x["<<i<<"] = "; cin>>x[i];
	}
	CariMaks(n,x);
}
