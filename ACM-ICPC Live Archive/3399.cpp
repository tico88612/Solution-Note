#include <bits/stdc++.h>
using namespace std;
int prime[1230]={2,3,5,7};
void init(){
	int N=4;
	for(int i=8;i<10001;i++){
		int jud=1;
		for(int j=0;j<N&&jud;j++){
			if(i%prime[j]==0)
				jud=0;
		}
		if(jud){
			//cout<<i<<endl;
			prime[N++]=i;
		}
	}
	//cout<<N;
}
int main()
{
	init();
	int enter;
	cin>>enter;
	while(enter){
		int ans=0;
		for(int i=0;i<1230;i++){
			int sum=0;
			for(int j=i;j<1230&&sum<enter;j++){
				sum+=prime[j];
				if(sum==enter)
					ans++;
			}
		}
		cout<<ans<<endl;
		cin>>enter;
	}
	return 0;
}
