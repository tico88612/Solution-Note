#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int prime[100000]={2, 3, 5, 7},prime_N=4;
typedef struct Data
{
	string S,T;
	int N,prime_sum;
}Data;
void init(){
	for(int i=11;i<1000000;i++){
		bool isp=true;
		int sq=sqrt(i);
		for(int j=0;isp&&prime[j]<=sq;j++){
			if(i%prime[j]==0)
				isp=false;
		}
		if(isp)
			prime[prime_N++]=i;
	}
}
bool cmp(Data a,Data b){
	if(a.prime_sum!=b.prime_sum)
		return a.prime_sum>b.prime_sum;
	else if(a.T!=b.T)
		return a.T<b.T;
	else
		return a.N>b.N;
}
int main(){
	_
	init();
	//cout<<prime_N<<endl;
	Data m[100000];
	string enter;
	int N=0;
	while(cin>>enter) {
		m[N].S=enter;
		m[N].T="";
		int num=0;
		for(unsigned int i=0;i<enter.length();i++){
			if('0'<=enter[i]&&enter[i]<='9')
				num=num*10+(enter[i]-'0');
			else
				m[N].T+=enter[i];
		}
		m[N].N=num;
		m[N].prime_sum=0;
		for(int i=0;num!=1&&sqrt(num)>=prime[i]&&i<prime_N;i++){
			bool plus=false;
			while(num!=1&&num%prime[i]==0){
				if(plus==false){
					m[N].prime_sum+=prime[i];
					plus=true;
				}
				num/=prime[i];
			}
		}
		if(num!=1)
			m[N].prime_sum+=num;
	    N++;
	}
	sort(m,m+N,cmp);
	for(int i=0;i<N;i++)
		cout<<m[i].S<<'\n';//<<m[i].prime_sum<<' '<<m[i].T<<' '<<m[i].N<<'\n';
	return 0;
}