#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	for(int con=0;con<T;con++){
		int enter,B;
		scanf("%d,%d",&enter,&B);
		int tran[40]={0},total=0;
		while(enter!=0){
			tran[total++]=enter%B;
			enter/=B;
		}
		if(total==0)
			total=1;
		for(int i=total-1;i>=0;i--){
			if(tran[i]>=10){
				char q=tran[i]-10+'A';
				cout<<q;
			}
			else{
				cout<<tran[i];
			}
		}
		cout<<endl;
	}
}
