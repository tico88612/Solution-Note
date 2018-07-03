#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;
int BIT[MAXN];
int lowerbit(int x){
	return x&(-x);
}
void add(int x){
	while(x<=MAXN){
		BIT[x]++;
		x+=lowerbit(x);
	}
}
int sum(int x){
	int ans=0;
	while(x){
		ans+=BIT[x];
		x-=lowerbit(x);
	}
	return ans;
}
int main(){
	int N,Test;
	for(Test=1;;Test++){
		cin>>N;
		if(N==0)
			break;
		long long int ans=0;
		vector<int> v(N),v2(N);
		for(int i=0;i<N;i++){
			int a;
			cin>>a;
			v[i]=a;
			v2[i]=a;
		}
		sort(v.begin(),v.end());
		for(int i=0;i<N;i++){
			v2[i]=lower_bound(v.begin(), v.end(), v2[i])-v.begin()+1;
		}
		memset(BIT,0,sizeof(BIT));
		for(int i=0;i<N;i++){
			ans+=i-sum(v2[i]);
			add(v2[i]);
		}
		cout<<"Case #"<<Test<<": "<<ans<<endl;
	}
	return 0;
}