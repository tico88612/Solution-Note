#include <bits/stdc++.h>
using namespace std;
int main(){
	int change[10],money[1002];
	memset(money,0x7f,sizeof(money));
	int C,N;
	cin>>C>>N;
	money[0]=0;
	for(int i=0;i<N;i++)
		cin>>change[i];
	for(int i=0;i<N;i++){
		for(int j=change[i];j<=C;j++){
			money[j]=min(money[j],money[j-change[i]]+1);
		}
	}
	cout<<money[C]<<endl;
	return 0;
}