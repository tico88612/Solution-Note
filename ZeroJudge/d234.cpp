#include <bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c){
	int mn=min(a,b);
	int mx=max(a,b);
	while(c>=0){
		if(c%mn==0)
			return true;
		c-=mx;
	}
	return false;
}
int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		bool judge=true;
		for(int i=c;judge&&i<=2*c;i++){
			judge = check(a,b,i);
			if(judge==false){
				printf("No\n");
				break;
			}
		}
		if(judge)
			printf("Yes\n");
	}
	return 0;
}