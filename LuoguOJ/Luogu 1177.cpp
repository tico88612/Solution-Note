#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void QuickSort(int arr[],int l,int r){
	// printf("%d %d\n",l,r);
	int i=l,j=r,pivot=arr[rand()%(r-l+1)+l];
	while(i<=j){
		while(arr[i]<pivot)
			i++;
		while(arr[j]>pivot)
			j--;
		if(i<=j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	if(l<j)
		QuickSort(arr,l,j);
	if(i<r)
		QuickSort(arr,i,r);
	
}
int main(){
	_
	srand(time(NULL));
	int N;
	cin>>N;
	int arr[100005]={0};
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	QuickSort(arr,0,N-1);
	// sort(arr,arr+N);
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" \n"[i==N-1];
	}
	return 0;
}