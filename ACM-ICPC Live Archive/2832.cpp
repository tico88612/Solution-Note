#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	string ans;
	int maxwrite=0,minans=0;
	for(int i=0;i<N;i++){
		string enter;
		cin>>enter;
		int pentaly=0,write=0;
		for(int j=0;j<4;j++){
			int a,b;
			cin>>a>>b;
			if(b>0){
				write++;
				pentaly+=b;
				pentaly+=(a-1)*20;
			}
		}
		if(i==0){
			ans=enter;
			maxwrite=write;
			minans=pentaly;
		}
		else{
			if(maxwrite<write){
				ans=enter;
				maxwrite=write;
				minans=pentaly;
			}
			else if(maxwrite==write){
				if(minans>pentaly){
					ans=enter;
					maxwrite=write;
					minans=pentaly;
				}
			}
		}
	}
	cout<<ans<<" "<<maxwrite<<" "<<minans<<endl;
	return 0;
}