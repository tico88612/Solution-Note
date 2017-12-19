#include <bits/stdc++.h>
using namespace std;
int i, j;  
double a[10][31],m[10],e[31];  
void init()   
{  
    for (i = 0;i < 10;i++)  
        m[i] = 1 - pow(0.5, (i + 1));  
    for (j = 1;j < 31;j++)  
        e[j] = pow(2,j) - 1;  
    for (i = 0;i < 10;i++)  
        for (j = 1;j < 31;j++)  
            a[i][j] = log10(m[i]) + e[j] * log10(2);  
}  
int main(){
	init();
	double M;
	int Exp;
	char s[25];  
	while(~scanf("%s",s)){
		for (i=0;;i++)  
        	if (s[i] == 'e'){
        		s[i] = ' ';
        		break;
        	}
        sscanf(s, "%lf %d", &M, &Exp); 
		if(M==0&&Exp==0)
			break;
		int ansx=0,ansy=0;
		//printf("%lf  %d\n",M,Exp);
		double t=log10(M)+(double)Exp;
		for(i=0;i<10;i++){
			for(j=1;j<31;j++){
				if(fabs(a[i][j]-t)<1e-4){
					ansx=i;
					ansy=j;
				}
			}
		}
		printf("%d %d\n",ansx,ansy);
		
	}
	return 0;
}