#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	string enter;
	cin>>enter;
	int total=0,now=1;
	for(int i=0;i<enter.length();i++){
		if(isdigit(enter[i])&&i!=enter.length()-1){
			total+=(enter[i]-'0')*now;
			now++;
		}
	}
	total%=11;
	if(total==10){
		if(enter[enter.length()-1]=='X'){
			cout<<"Right"<<'\n';
		}
		else{
			for(int i=0;i<enter.length()-1;i++)
				cout<<enter[i];
			cout<<"X"<<'\n';
		}
	}
	else{
		if(enter[enter.length()-1]==('0'+total)){
			cout<<"Right"<<'\n';
		}
		else{
			for(int i=0;i<enter.length()-1;i++)
				cout<<enter[i];
			cout<<total<<'\n';
		}
	}

	return 0;
}