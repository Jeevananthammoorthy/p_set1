#include<stdio.h>
void main()
{
int n;
int i=0,a[100],count=0,temp=0,j,k=0;
scanf("%d",&n);
scanf("%d",&k);
while(n>0)
{
a[i]=n%10;
n=n/10;
i++;
count++;
}
for(i=0;i<count;i++){
for(j=i+1;j<count;j++)
 {
  if(a[i]>a[j])
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
 }
} 
while(k>0)
{
     count--;
     k--; 
}
for(k=0;k<count;k++)
    printf("%d",a[k]);
 }

