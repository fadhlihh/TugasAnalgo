/*********************************************
	Nama	: Fadhli Hibatul Haqqi
	NPM		: 140810170019
	Kelas	: A
	Tanggal	: 06/03/2019
	Program	: Binary Search
*********************************************/
#include<iostream>
using namespace std;

void BinarySearch(int x[],int y,int n){
	int i = 0, j = n-1, mid,idx;
	bool found = false;
	while((!found) && i <= j){
		mid = (i+j)/2;
		if(x[mid] == y){
			found = true;
		}else{
			if(x[mid] < y){
				i = mid + 1;
			}else{
				j = mid - 1;
			}	
		} 
	}
	if(found){
		idx = mid + 1;
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
		cout<<"x["<<i<<"] = "; cin>>x[i];
	}
	cout<<"\nMasukan elemen yang dicari = ";
	cin>>y;
	BinarySearch(x,y,n);
}
