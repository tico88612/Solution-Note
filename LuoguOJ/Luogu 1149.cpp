#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int fire_num[10]={6,2,5,5,4,5,6,3,7,6};
int fire(int N){
	if(!N)
		return 6;
	int ans=0;
	while(N){
		ans+=fire_num[N%10];
		N/=10;
	}
	return ans;
}
int main(){
	int N;
	cin>>N;
	int ans=0;
	for(int i=0;i<=999;i++){
		for(int j=i;j<=999;j++){
			if(fire(i)+fire(j)+fire(i+j)+4==N){
				// printf("%d + %d = %d\n",i,j,i+j);
				ans++;
				if(i!=j)
					ans++;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}