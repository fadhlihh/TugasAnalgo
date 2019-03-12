/*********************************************
	Nama	: Fadhli Hibatul Haqqi
	NPM		: 140810170019
	Kelas	: A
	Tanggal	: 06/03/2019
	Program	: Selection Sort
*********************************************/
#include<iostream>
using namespace std;

void SelectionSort(int x[],int n){
	int imaks,temp;
	for(int i = n; i >= 1; i--){
		imaks = 0;
		for(int j = 1; j <= i; j++){
			if(x[j]>x[imaks]){
				imaks = j;
			}
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp;
	}
	for(int i = 0; i < n; i++){
		cout<<"x["<<i<<"] = "<<x[i]<<endl;
	}
}

int main(){
	int n;
	cout<<"Banyak elemen : "; cin>>n;
	int x[n];
	cout<<"Masukan Elemen Angka"<<endl;
	for(int i = 0; i < n; i++){
		cout<<"x["<<i<<"] = "; cin>>x[i];
	}
	SelectionSort(x,n);
}
