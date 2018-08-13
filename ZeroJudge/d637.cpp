#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int cost[10000],full[10000];
int main(){
	_
	int N;
	cin>>N;
	int weight[101]={0};
	for(int i=0;i<N;i++)
		cin>>cost[i]>>full[i];
	for(int i=0;i<N;i++){
		int c=cost[i];
		int f=full[i];
		for(int j=100;j-c>=0;j--){
			weight[j]=max(weight[j],weight[j-c]+f);
		}
		// for(int i=0;i<101;i++)
		// 	printf("%d ",weight[i]);
		// printf("\n");
	}
	cout<<weight[100]<<'\n';
	return 0;
}