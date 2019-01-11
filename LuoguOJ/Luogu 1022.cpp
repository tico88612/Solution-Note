#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string enter;
	while(cin>>enter){
		int x=0,num=0,swit=0;
		int isnega=0,nownum=0,isx=0;
		char ch=0;
		for(int i=0;i<enter.length();i++){
			if(enter[i]=='+'||enter[i]=='-'||enter[i]=='='){
				if(isnega)
					nownum=-nownum;

				if(isx&&!swit)
					x+=nownum;
				else if(!isx&&swit)
					num+=nownum;
				else if(isx&&swit)
					x-=nownum;
				else if(!isx&&!swit)
					num-=nownum;
				// printf("%d\n",num);
				isnega=(enter[i]=='-');
				nownum=0;
				isx=0;
				if(enter[i]=='=')
					swit=1;
			}
			else if(isalpha(enter[i])){
				ch=enter[i];
				isx=1;
				if(i>0&&(enter[i]=='+'||enter[i]=='-'||enter[i]=='='))
					nownum=1;
				else if(i==0)
					nownum=1;
			}
			else if(enter[i]>='0'&&enter[i]<='9'){
				nownum=nownum*10+(enter[i]-'0');
			}
		}
		if(isnega)
			nownum=-nownum;

		if(isx&&!swit)
			x+=nownum;
		else if(!isx&&swit)
			num+=nownum;
		else if(isx&&swit)
			x-=nownum;
		else if(!isx&&!swit)
			num-=nownum;
		// printf("%d\n",nownum);
		// cout<<num<<" "<<x;
		double ans=(double)num/(double)x;
		printf("%c=%.3lf\n",ch,ans);
	}
	
	return 0;
}