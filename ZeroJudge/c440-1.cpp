#include <iostream>
#include <string>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	string s;
	cin>>s;
	string aaa="";
	long long int left=0,right=0;
	for(unsigned int i=0;i<s.length();i++){
		if(s[i]=='A'||s[i]=='Q'){
			aaa+=s[i];
			if(s[i]=='Q')
				right++;
		}
	}
	long long int ans=0;
	for(unsigned int i=0;i<aaa.length();i++){
		if(aaa[i]=='Q'){
			left++;
			right--;
		}
		else{
			ans+=left*right;
		}
	}
	cout<<ans<<'\n';
	return 0;
}