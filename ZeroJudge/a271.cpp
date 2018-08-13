#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long int x,y,z,w,n,m,poi=0;
		cin>>x>>y>>z>>w>>n>>m;
		string s;
		getline(cin,s);
		getline(cin,s);
		for(unsigned int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				if(poi)
					m-=poi;
				if(m<=0)
					break;
				if(s[i]-'0'==1)
					m+=x;
				else if(s[i]-'0'==2)
					m+=y;
				else if(s[i]-'0'==3)
					m-=z;
				else if(s[i]-'0'==4){
					m-=w;
					poi+=n;
				}
				if(m<=0)
					break;
			}
		}
		if(m>0)
			cout<<m<<"g\n";
		else
			cout<<"bye~Rabbit\n";
	}
	return 0;
}