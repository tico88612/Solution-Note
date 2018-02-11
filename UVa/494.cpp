#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	while(getline(cin,enter)){
		int ans=0;
		int sw=0;
		int legal=0;
		for(unsigned int i=0;i<enter.size();i++){
			if(isalpha(enter[i])){
				if(sw==0){
					legal=1;
					sw=1;
				}
			}
			else if(!isalpha(enter[i])){
				if(legal){
					sw=0;
					legal=0;
					ans++;
				}
			}
		}
		if(legal){
			sw=0;
			legal=0;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}