#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int j=1;j<=T;j++){
		int enterN[1000+2]={0},N;
		cin>>N;
		for(int i=0;i<2*N;i++){
			cin>>enterN[i];
		}
		int run[5002]={0};
		for(int i=0;i<2*N;i++){
			if(i%2==0){
				run[enterN[i]]++;
			}
			else{
				run[enterN[i]+1]--;
			}
		}
		int queryy[5002]={0},now=0;
		for(int i=0;i<5000;i++){
			now+=run[i];
			queryy[i]=now;
		}
		int QQ;
		cin>>QQ;
		cout<<"Case #"<<j<<": ";
		for(int i=0;i<QQ;i++){
			int AAA;
			cin>>AAA;
			cout<<queryy[AAA]<<" ";
		}
		cout<<endl;
	}
	return 0;
}