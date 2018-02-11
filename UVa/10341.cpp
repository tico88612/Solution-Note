#include <bits/stdc++.h>
using namespace std;
int p,q,r,s,t,u;
const double e=2.718281828459;
double rans(double x){
	return (double)(p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u);
}
int main(){
	
	while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
		double ans=0;
		double delta=1;
		for(delta=1;delta>0.0000000001;delta*=0.5){
			if(abs(rans(ans)-0)<0.00000001)
				break;
			else if(rans(ans)>0)
				ans+=delta;
			else
				ans-=delta;
		} 

		if(-0.00000001<=ans&&ans<=1.00000001)
			printf("%.4lf\n",ans);
		else
			printf("No solution\n");
		// for(delta=0.1;delta<1;delta+=0.1){
		// 	cout<<rans(delta)<<endl;
		// }
	}
	return 0;
}