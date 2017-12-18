#include<stdio.h>
void main()
{
char a[200],b[200];
int n,i,z=0,j,cout=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    cout++;
}
for(j=cout-1;j>=0;j--)
{
    b[z]=a[j];
    z++;
}
for(j=0;j<cout;j++)
{
    printf("%c",b[j]);
}
}
