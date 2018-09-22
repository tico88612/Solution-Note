#include <bits/stdc++.h>
using namespace std;
double query[10000]={0};
const double delta=1e-8;
int fixxx(double x){
	if(x<-delta)
		return -1;
	return x>delta;

}
int main()
{
	int total=1;
	for(total=1;fixxx(query[total-1]-5.20)<1;total++){
		query[total]=query[total-1]+1.0/double(total+1);
	}
	double enter;
	cin>>enter;
	while(fixxx(enter)){
		int l=0,r=total,mid;
		while(l+1<r){//l==r
			mid=(l+r)/2;
			if(fixxx(query[mid]-enter)<0)
				l=mid;
			else 
				r=mid;
		}
		cout<<r<<" card(s)"<<endl;
		cin>>enter;
	}
	return 0;
}