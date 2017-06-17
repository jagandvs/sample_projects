#include <stdio.h>
#include <stdlib.h>

int main()
{
   int s,n,m,d,r=0;
    printf("Enter the number to print in stars");
    scanf("%d",&n);
    while(n!=0)
    {
        s=n%10;
        r=(r*10)+s;
        n/=10;
    }

    while(r!=0)
    {
        d=r%10;
        switch(d)
    {
    case 1:

        rightvertical();
        rightvertical();

        break;
    case 2:
        horizontalline();
        rightvertical();
        horizontalline();
        verticalline();
        horizontalline();
        break;
    case 3:
        horizontalline();
        rightvertical();
        horizontalline();
        rightvertical();
        horizontalline();
        break;
    case 4:
        twolines();
        horizontalline();
        rightvertical();
        break;
    case 5:
        horizontalline();
        verticalline();
        horizontalline();
        rightvertical();
        horizontalline();
        break;
    case 6:
        horizontalline();
        verticalline();
        horizontalline();
        twolines();
        horizontalline();
        break;
    case 7:
        horizontalline();
        rightvertical();
        rightvertical();
        break;
    case 8:
        horizontalline();
        twolines();
        horizontalline();
        twolines();
        horizontalline();
        break;
    case 9:
        horizontalline();
        twolines();
        horizontalline();
        rightvertical();
        horizontalline();
        break;
    case 0:
        horizontalline();
        twolines();
        horizontalline();
        break;

    }
      r/=10;
      printf("\n");
    }


   return 0;
}
void twolines()
{
    int a,b;

    for(a=0;a<4;a++)
    {
        for(b=0;b<5;b++)
        {
            if( b==0 || b==4)
                printf("*");
                else
                    printf(" ");
        }
        printf("\n");
    }

}
void horizontalline()
{
    int c;
    for(c=0;c<5;c++)
    {
        printf("*");
    }
    printf("\n");
}
void verticalline()
{
    int i;
    for(i=0;i<4;i++)
        printf("*\n");
}
void rightvertical()
{
    int k,j;

    for(k=0;k<4;k++)
    {
      for(j=0;j<5;j++)
    {
        if(j==4)
            printf("*\n");
        else
            printf(" ");
    }
    }

}
