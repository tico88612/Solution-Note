#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float T=-999999,D=-999999,H=-999999;
float dohum(float tt,float dd){
	float ee=6.11*exp(5417.7530*((1/273.16)-(1/(dd+273.16))));
	float hh=(0.5555)*(ee-10.0);
	return tt+hh;
}
float dotemp(){
	float ee=6.11*exp(5417.7530*((1/273.16)-(1/(D+273.16))));
	float hh=(0.5555)*(ee-10.0);
	return H-hh;
}
float dodew(){
	float ans=0;
	float delta=100;
	for(delta=100;delta>0.00001;delta*=0.5){
		if(dohum(T,ans)>H) ans-=delta;
		else ans+=delta;
	}
	return ans;
}
int main(){
	char e1,e2;
	float t1,t2;
	while(scanf(" %c",&e1)&&e1!='E'){
		scanf("%f %c %f",&t1,&e2,&t2);
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
		printf("T %0.1f D %0.1f H %0.1f\n",T,D,H);
		T=-999999;
		D=-999999;
		H=-999999;
	}
	return 0;
}