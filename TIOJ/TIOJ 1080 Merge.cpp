#include <bits/stdc++.h>
using namespace std;
int enter[1000000]={0};
void Merge(int *arr,int l,int m,int r){
	int n1=m-l,n2=r-m;
	int L[n1]={0},R[n2]={0};
	for(int i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=arr[m+i];
	}
	int i=0,j=0,k=0;
	while(i<n1&&j<n2){
		if(L[i]<R[j]){
			arr[l+k]=L[i];
			i++;
		}
		else{
			arr[l+k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[l+k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[l+k]=R[j];
		j++;
		k++;
	}
}

long long int counting(int *arr,int left,int right){
	if(left+1>=right)
		return 0;
	int mid=(left+right)/2;
	long long int ans=counting(arr,left,mid);
	ans+=counting(arr,mid,right);
	int L,R=mid;
	for(L=left;L<mid;L++){
		while(R<right&&arr[L]>arr[R])
			R++;
		ans+=R-mid;
	}
	Merge(arr,left,mid,right);
	return ans;
}
int main(){
	int N,cases=1;
	scanf("%d",&N);
	while(N!=0){
		for(int i=0;i<N;i++)
			scanf("%d",&enter[i]);
		long long int ans=counting(enter,0,N);
		printf("Case #%d: %lld\n",cases++,ans);
		scanf("%d",&N);
	}
	return 0;
}