#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	string A,B;
	while(cin>>A>>B){
		cout<<A<<'\n'<<B<<'\n'<<"---------------------------------"<<'\n';
		int up=0;
		int out[32]={0};
		for(int i=31;i>=0;i--){
			if(A[i]=='1'&&B[i]=='1'){
				if(up){
					out[i]=1;
				}
				else{
					out[i]=0;
					up=1;
				}
			}
			else if(A[i]=='0'&&B[i]=='0'){
				if(up){
					out[i]=1;
					up=0;
				}
				else{
					out[i]=0;
				}
			}
			else{
				if(up){
					out[i]=0;
					up=1;
				}
				else{
					out[i]=1;
				}
			}
		}
		for(int i=0;i<32;i++)
			cout<<out[i];
		cout<<'\n';
		cout<<"****End of Data******************"<<'\n';
	}
	return 0;
}