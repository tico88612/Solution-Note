#include <bits/stdc++.h>
using namespace std;
int prime[100000]={2,3,5,7},primenum=4;
int main(){
	for(int i=8;i<=1000000;i++){
		int judge=1;
		for(int j=0;judge&&prime[j]<=sqrt(i);j++){
			if(i%prime[j]==0)
				judge=0;
		}
		if(judge){
			//printf("%d ",i);
			prime[primenum++]=i;
		}
	}
	//printf("%d\n",primenum);
	int T;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
		int st,en;
		cin>>st>>en;
		int chan[100000]={0},num=0;
		int hdhdhd[115]={0};//質數間最大差距為114
		for(int i=0;i<primenum&&prime[i]<=en;i++){
			if(st<=prime[i]&&prime[i]<=en){
				chan[num++]=prime[i];
			}
		}
		if(num==1){
			printf("No jumping champion\n");
		}
		else{
			for(int i=0;i<num-1;i++){
				hdhdhd[chan[i+1]-chan[i]]++;
			}
			int champ=0,champmax=0,fff=0;
			for(int i=0;i<115;i++){
				if(champ<hdhdhd[i]){
					champ=hdhdhd[i];
					champmax=i;
					fff=0;
				}
				if(champ==hdhdhd[i]){
					fff++;
				}
			}
			if(fff==1){
				printf("The jumping champion is %d\n",champmax);
			}
			else{
				printf("No jumping champion\n");
			}
		}
	}
	return 0;
}