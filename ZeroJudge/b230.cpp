#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter[66]={0};
	bool val[2000]={0};
	for(int i=1;i<65;i++){
		for(int j=i+1;j<65;j++){
			for(int k=j+1;k<65;k++){
				if(i*j+j*k+k*i<2000)
					val[i*j+j*k+k*i]=true;
			}
		}
	}
	int cnt=1;
	for(int i=1;i<2000;i++)
		if(!val[i])
			enter[cnt++]=i;
	int N;
	while(cin>>N){
		cout<<enter[N]<<'\n';
	}
	return 0;
}