#include <stdio.h>
#include <stdlib.h>

int n;
int mask[]={-1,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072};
int buffer[20];
int cnt=0;
void dump()
{
  int i;
  for(i=0;i<n-1;i++)
     printf("%d ",buffer[i]);
  printf("%d\n",buffer[i]);
}
void nqueen(int level,int LMask,int MidMask,int RMask)
{
  if(level==n)
  {
    cnt++;
    dump();
    return;
  }
  int AllMask=LMask|MidMask|RMask;
  for(int i=1;i<=n;i++)
  {
    if((mask[i]&AllMask)==0)
    {
      buffer[level]=i;
      int tmp=mask[i];
      nqueen(level+1,(tmp|LMask)<<1,(tmp|MidMask),(tmp|RMask)>>1);
    }
    
  }
}


int main()
{
    int T=1;
    while(scanf("%d",&n)==1)
    {
      printf("case %d:\n",T++);
      cnt=0;
      nqueen(0,0,0,0);
      printf("%d\n",cnt);
    } 
}
