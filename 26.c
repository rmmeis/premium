#include<stdio.h>
int main()
{
int a[100],i,j,d=4,m=2,temp;
for(i=0;i<d;i++)
{
scanf("%d",&a[i]);
printf("%d",i);
}
for(j=0;j<m;j++)
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d",a[i]);
}
