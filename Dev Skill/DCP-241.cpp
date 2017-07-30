#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		int N;
		long long int enter[100000],ans=0;
		cin>>N;
		for(int j=0;j<N;j++){
			cin>>enter[j];
			if(j>0){
				for(int k=j-1;k>=0;k--)
					ans+=enter[j]|enter[k];
			}
		}
		//for(int j=0;j<N-1;j++){
		//	for(int k=j+1;k<N;k++)
		//		ans+=enter[j]|enter[k];
		//}
		cout<<"Case "<<i<<": "<<ans<<endl;
	}
	return 0;
}