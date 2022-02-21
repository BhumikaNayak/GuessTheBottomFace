#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int X; //declaration of variables
        scanf("%d\n",&X);
        int result;
        if(X==1)
        {
            result=6;
        }
        else if(X==2)
        {
            result=5;
        }
        else if(X==3)
        {
            result=4;
        }
        else if(X==4)
        {
            result=3;
        }
        else if(X==5)
        {
            result=2;
        }
        else if(X==6)
        {
            result=1;
        }
        printf("%d\n",result);
    }
    return 0;
}
//code by bhumika nayak