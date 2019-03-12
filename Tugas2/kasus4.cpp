/*********************************************
	Nama	: Fadhli Hibatul Haqqi
	NPM		: 140810170019
	Kelas	: A
	Tanggal	: 06/03/2019
	Program	: Insertion Sort
*********************************************/
#include<iostream>
using namespace std;

void InsertionSearch(int x[],int n){
	int insert,j;
	for(int i = 1; i < n; i++){
		insert = x[i];
		j = i;
		while((j>0) && (x[j-1]>insert)){
			x[j] = x[j-1];
			j--;
		}
		x[j] = insert;
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
	InsertionSearch(x,n);
}
