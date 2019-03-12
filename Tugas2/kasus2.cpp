/*********************************************
	Nama	: Fadhli Hibatul Haqqi
	NPM		: 140810170019
	Kelas	: A
	Tanggal	: 06/03/2019
	Program	: Sequential Search
*********************************************/
#include<iostream>
using namespace std;

void SequentialSearch(int x[],int y,int n){
	int i = 0;
	int idx;
	bool found = false;
	while(i < n && (!found)){
		if(x[i] == y){
			found = true;
		}else{
			i++;
		}
	}
	if(found){
		idx = i+1;
	}else{
		idx = 0;
	}
	cout<<"\nDitemukan pada indeks : "<<idx;
}

int main(){
	int n,y;
	cout<<"Banyak elemen : "; cin>>n;
	int x[n];
	cout<<"Masukan Elemen Angka"<<endl;
	for(int i = 0; i < n; i++){
		cout<<"x["<<i+1<<"] = "; cin>>x[i];
	}
	cout<<"\nMasukan elemen yang dicari = ";
	cin>>y;
	SequentialSearch(x,y,n);
}
