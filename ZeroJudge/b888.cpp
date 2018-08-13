#include<stdio.h>
using namespace std;
int main()
{
	long long int d,dx,dy,dz,enter[4][4]={0},Total=0;
	for(int i=0;i<3;i++)
	{
		scanf("%lld %lld %lld",&enter[i][0],&enter[i][2],&enter[i][3]);
		Total+=enter[i][3];
		enter[i][1]=1;
	}
	d=enter[0][0]*enter[1][1]*enter[2][2]+enter[1][0]*enter[2][1]*enter[0][2]+enter[2][0]*enter[0][1]*enter[1][2]-enter[0][2]*enter[1][1]*enter[2][0]-enter[1][2]*enter[2][1]*enter[0][0]-enter[2][2]*enter[1][0]*enter[0][1];
	dx=enter[0][3]*enter[1][1]*enter[2][2]+enter[1][3]*enter[2][1]*enter[0][2]+enter[2][3]*enter[0][1]*enter[1][2]-enter[0][2]*enter[1][1]*enter[2][3]-enter[1][2]*enter[2][1]*enter[0][3]-enter[2][2]*enter[1][3]*enter[0][1];
	dy=enter[0][0]*enter[1][3]*enter[2][2]+enter[1][0]*enter[2][3]*enter[0][2]+enter[2][0]*enter[0][3]*enter[1][2]-enter[0][2]*enter[1][3]*enter[2][0]-enter[1][2]*enter[2][3]*enter[0][0]-enter[2][2]*enter[1][0]*enter[0][3];
	dz=enter[0][0]*enter[1][1]*enter[2][3]+enter[1][0]*enter[2][1]*enter[0][3]+enter[2][0]*enter[0][1]*enter[1][3]-enter[0][3]*enter[1][1]*enter[2][0]-enter[1][3]*enter[2][1]*enter[0][0]-enter[2][3]*enter[1][0]*enter[0][1];
	long long int sum=1000;
	for(int i=0;i<3;i++)
	{
		if(enter[i][3]<=160)
			sum-=enter[i][3];
		else 
			sum-=160;
	}	
	if(d==0 && Total<=1000)
	{
		if(dx==0&&dy==0&&dz==0)
		{
			if((enter[0][0]==enter[1][0])&&(enter[0][2]==enter[1][2])&&(enter[0][3]==enter[1][3]))
			{
				printf("ㄒoo many !! , Snail: %lld\n",sum);
			}
			else if((enter[0][2]!=enter[1][2])&&(enter[0][3]!=enter[1][3]))
			{
				printf("ㄒoo many !! , Snail: %lld\n",sum);
			}
			else
				printf("Are you kidding me ??\n");
		}
		else
			printf("Are you kidding me ??\n");
	}
	else if(d!=0 && Total<=1000)
	{
		long long int bur=dx/d,cola=dy/d,ch=dz/d;
		if(bur>=0&&cola>=0&&ch>=0)
			printf("RiceBurger: %lld , Cola: %lld , ChickenNugget: %lld , Snail: %lld \n",bur,cola,ch,sum);
		else	printf("Are you kidding me ??\n");
	}
	else	printf("Are you kidding me ??\n");

	return 0;
}