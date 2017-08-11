#include <bits/stdc++.h>
using namespace std;
int main()
{
	string enter;
	while(getline(cin,enter)){
		int total=0,tmp=0;
		for(int i=0;i<enter.length();i++){
			if(isdigit(enter[i])){
				tmp+=enter[i]-'0';
				if(isdigit(enter[i+1]))
					tmp*=10;
			}
			else{
				if(tmp){
					total+=tmp;
					tmp=0;
				}
			}
		}
		if(tmp){
			total+=tmp;
			tmp=0;
		}
		cout<<total<<'\n';
	}
}