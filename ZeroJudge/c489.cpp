#include <cstdio>
using namespace std;
int main(){
	int N;
	scanf("%d",&N);
	int BIT[32]={0},x1=-1,x2=-1,cnt1=0,cnt2=0;
	for(int i=0;i<N;i++){
		int S;
		scanf("%d",&S);
		if(x1==-1){
			x1=S;
			cnt1++;
		}
		else if(x1==S){
			cnt1++;
		}
		else if(x2==-1&&x1!=S){
			x2=S;
			cnt2++;
		}
		else if(x2==S){
			cnt2++;
		}
		int a=0;
		while(S){
			BIT[a]+=S&1;
			S>>=1;
			a++;
		}
	}
	int w=cnt1>cnt2?cnt1:cnt2;
	int ans=0,run=1;
	for(int i=0;i<32;i++){
		if(BIT[i]%w)
			ans+=run;
		run<<=1;
	}
	printf("%d\n",ans);
	return 0;
}