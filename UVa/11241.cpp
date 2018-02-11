#include <bits/stdc++.h>
using namespace std;
double T=-999999,D=-999999,H=-999999;
double dohum(double tt,double dd){
	double ee=6.11*exp(5417.7530*((1/273.16)-(1/(dd+273.16))));
	double hh=(0.5555)*(ee-10.0);
	return tt+hh;
}
double dotemp(){
	double ee=6.11*exp(5417.7530*((1/273.16)-(1/(D+273.16))));
	double hh=(0.5555)*(ee-10.0);
	return H-hh;
}
double dodew(){
	double ans=0;
	double delta=100;
	for(delta=100;delta>0.00001;delta*=0.5){
		if(dohum(T,ans)>H) ans-=delta;
		else ans+=delta;
	}
	return ans;
}
int main(){
	char e1,e2;
	double t1,t2;
	while(scanf(" %c",&e1)&&e1!='E'){
		scanf("%lf %c %lf",&t1,&e2,&t2);
		if(e1=='T')
			T=t1;
		else if(e1=='D')
			D=t1;
		else if(e1=='H')
			H=t1;
		if(e2=='T')
			T=t2;
		else if(e2=='D')
			D=t2;
		else if(e2=='H')
			H=t2;
		if(T==-999999)
			T=dotemp();
		else if(D==-999999)
			D=dodew();
		else if(H==-999999)
			H=dohum(T,D);
		printf("T %0.1lf D %0.1lf H %0.1lf\n",T,D,H);
		T=-999999;
		D=-999999;
		H=-999999;
	}
	return 0;
}