#include<stdio.h>
int simpleinterest(int p,int t,int r);
void main()
{

    int p,t,r,k;
    printf("Enter principle ,time and rate");
    scanf("%d%d%d",&p,&t,&r);
    k=simpleinterest(p,t,r);
    printf("simple interest is %d",k);

}
int simpleinterest(int p,int t,int r)
{
    int si;
    si=p*t*r/100;
    return si;
}
