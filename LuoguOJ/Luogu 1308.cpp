#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string cp;
	getline(cin,cp);
	for(int i=0;i<cp.length();i++)
		cp[i]=tolower(cp[i]);
	int first=-1,timee=0,noww=0;
	string enter;
	getline(cin,enter);
	for(int i=0;i<enter.length();i++)
		enter[i]=tolower(enter[i]);
	int p=0,p1=0;
	while(p!=-1) {
		p=enter.find(' ',p1);
		string sss=enter.substr(p1,p-p1);
	    if(sss==cp){
			if(first==-1)
				first=p1;
			timee++;
		}
		p1=p+1;
	}
	
	if(!timee)
		cout<<first<<'\n';
	else
		cout<<timee<<" "<<first<<'\n';
	return 0;
}