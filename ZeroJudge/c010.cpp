#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	_
	//min heap N>mid
	priority_queue<long long int,vector<long long int>,greater<long long int>> pqmin;
	//max heap N<mid
	priority_queue<long long int> pqmax;
	long long int enter,minn=0,maxx=0;
	while(cin>>enter){
		if(pqmax.empty()){
			pqmax.push(enter);
			maxx++;
		}
		else if(pqmin.empty()){
			if(pqmax.top()>enter){
				pqmin.push(pqmax.top());
				pqmax.pop();
				pqmax.push(enter);
			}
			else{
				pqmin.push(enter);
			}
			minn++;
		}
		else{
			long long int mid;
			if(maxx>minn){
				mid=pqmax.top();
			}
			else if(maxx<minn){
				mid=pqmin.top();
			}
			else{
				mid=(pqmin.top()+pqmax.top())/2;
			}

			if(mid<=enter){
				pqmin.push(enter);
				minn++;
			}
			else{
				pqmax.push(enter);
				maxx++;
			}

			if(minn+2==maxx){
				pqmin.push(pqmax.top());
				pqmax.pop();
				minn++;
				maxx--;
			}
			else if(minn==maxx+2){
				pqmax.push(pqmin.top());
				pqmin.pop();
				maxx++;
				minn--;
			}
		}

		if(maxx>minn){
			printf("%lld\n",pqmax.top());
		}
		else if(maxx<minn){
			printf("%lld\n",pqmin.top());
		}
		else{
			printf("%lld\n",(pqmin.top()+pqmax.top())/2);
		}
	}

	return 0;
}