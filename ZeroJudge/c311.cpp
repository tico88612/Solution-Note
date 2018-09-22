#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	string enter;//192936162 55
	while(cin>>enter){
		int total=0;
		int s=enter.length()%3;
		if(s==1)
			enter="00"+enter;
		else if(s==2)
			enter="0"+enter;
		int p=0;
		for(int i=enter.length()-3;i>=0;i-=3){
			if(p%2){
				total-=((enter[i]-'0')*100+(enter[i+1]-'0')*10+(enter[i+2]-'0'));
			}
			else{
				total+=((enter[i]-'0')*100+(enter[i+1]-'0')*10+(enter[i+2]-'0'));
			}
			p++;
		}
		int mo=total%91;
		if(total<0)
			printf("%d\n",(91+mo)%91);
		else
			printf("%d\n",mo);

	}
	return 0;
}