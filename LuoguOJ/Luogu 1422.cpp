#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
	int enter;
	cin>>enter;
	double ans;
	if(enter<=150){
		ans=0.4463*enter;
	}
	else if(enter>150&&enter<=400){
		ans=0.4663*(enter-150)+0.4463*150;
	}
	else{
		ans=0.5663*(enter-400)+0.4663*250+0.4463*150;
	}
	printf("%.1lf\n", ans);
	return 0;
}