#include<iostream>
using namespace std;

void merge(int A[],int left,int mid,int right){
	int nLeft,nRight;
	nLeft = mid-left+1;
	nRight = right-mid;
	int L[nLeft],R[nRight];
	for(int i = 0; i<=nLeft;i++){
		L[i] = A[left + i];
	}
	
	for(int j = 0; j<=nRight;j++){
		R[j] = A[right + 1 + j];
	}
	int i = 0, j = 0, k = left;
	while((i<nLeft) &&(j<nRight)){
		if(L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
		k++;
	}
}

void mergeSort(int A[],int left,int right){
	int mid;
	if (left<right){
		mid = left + (right - left)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid+1,right);
		merge(A,left,mid,right);
	}
}

int main(){
	int n;
	int A[n];
	cout<<"Jumlah array : "; cin>>n;
	cout<<"Masukan array"<<endl;
	for(int i = 0;i < n; i++){
		cin>>A[i];
	}
	mergeSort(A,0,n-1);
	cout<<"\n\n";
	for(int l = 0; l < n; l++){
		cout<<A[l]<<" ";
	}
}
