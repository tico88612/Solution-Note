#include <bits/stdc++.h>
using namespace std;
int main(){
	string enter;
	cin>>enter;
	int strn=enter.size();
	strn-=1;
	if(strn%2&&enter[enter.size()-1]!='0'){
		cout<<'-'<<enter[enter.size()-1]<<endl;
	}
	else{
		cout<<enter[enter.size()-1]<<endl;
	}
	return 0;
}