#include<stdio.h>
int digitornot(int num,int digitnumber);
void main()
{

    int num;
    int digitnumber;
    int k;
    printf("enter number");
    scanf("%d",&num);
    printf("enter digit number");
    scanf("%d",&digitnumber);
    k=digitornot(num,digitnumber);
    if(k==1)
        printf("number contains given digit");
    else if(k==0)
        printf("number dose not contain given digit");

}
int digitornot(int num,int digitnumber)
{
    int l=0;
    while(num!=0)
    {

        num=num/10;
        l++;

    }
    if(l==digitnumber)
        return 1;
    else
        return 0;

}
