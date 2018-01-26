#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[103],b[103];
	while(cin>>a>>b){
		int astr=strlen(a),bstr=strlen(b);
		int ans=astr+bstr;
		for(int i=-bstr;i<=astr;i++){
			int judge=1;
			for(int j=0;j<bstr&&judge;j++){
				if(i+j>=0&&i+j<astr)
					judge&=((a[i+j]-'0')+(b[j]-'0')<=3);
			}
			if(judge)
				ans=min(ans,max(astr,i+bstr)-min(i,0));
		}
		
		cout<<ans<<endl;
	}
	return 0;
}