#include <bits/stdc++.h>
using namespace std;
int main(){
	int entern=0;
	string enter[101];
	int maxn=0;
	while(getline(cin,enter[entern])){
		int ss=enter[entern].size();
		maxn=max(maxn,ss);
		entern++;
	}
	//cout<<entern<<endl;
	for(int i=0;i<maxn;i++){
		for(int j=entern-1;j>=0;j--){
			int now=enter[j].size();
			if(now>i){
				cout<<enter[j][i];
			}
			else{
				cout<<" ";
			}
		}
		cout<<'\n';
	}
	return 0;
}