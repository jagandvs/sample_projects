import java.util.*;
import java.io.*;
class MyNumber
{
 
 public void twoLines()
 {
    int a,b;

    for(a=0;a<4;a++)
    {
        for(b=0;b<5;b++)
        {
            if( b==0 || b==4)
                System.out.print("*");
                else
                    System.out.print(" ");
        }
       System.out.print("\n");
    }    
 }
 public void horizontalLine()
 {
    int c;
    for(c=0;c<5;c++)
    {
        System.out.print("*");
    }
    System.out.print("\n");
 }
 public void verticalLine()
 {
    int i;
    for(i=0;i<4;i++)
        System.out.print("*\n");
 }
 public void rightVertical()
 {
    int k,j;

    for(k=0;k<4;k++)
    {
      for(j=0;j<5;j++)
    {
        if(j==4)
            System.out.print("*\n");
        else
            System.out.print(" ");
    }
    }
 }
}
        
class StarNumber
{
 public static void main(String args[])
 { 
 int r=0;
 Scanner sc = new Scanner(System.in);    
 System.out.println("Enter the number"); 
 int n = sc.nextInt();
 while(n!=0)
  {
        int s=n%10;
        r=(r*10)+s;
        n/=10;
  }

 while(r!=0)
  {
        int d=r%10;
    
    MyNumber mn = new MyNumber();
    switch(d)
    {
    case 1:

        mn.rightVertical();
        mn.rightVertical();

        break;
    case 2:
        mn.horizontalLine();
        mn.rightVertical();
        mn.horizontalLine();
        mn.verticalLine();
        mn.horizontalLine();
        break;
    case 3:
        mn.horizontalLine();
        mn.rightVertical();
        mn.horizontalLine();
        mn.rightVertical();
        mn.horizontalLine();
        break;
    case 4:
        mn.twoLines();
        mn.horizontalLine();
        mn.rightVertical();
        break;
    case 5:
        mn.horizontalLine();
        mn.verticalLine();
        mn.horizontalLine();
        mn.rightVertical();
        mn.horizontalLine();
        break;
    case 6:
        mn.horizontalLine();
        mn.verticalLine();
        mn.horizontalLine();
        mn.twoLines();
        mn.horizontalLine();
        break;
    case 7:
        mn.horizontalLine();
        mn.rightVertical();
        mn.rightVertical();
        break;
    case 8:
        mn.horizontalLine();
        mn.twoLines();
        mn.horizontalLine();
        mn.twoLines();
        mn.horizontalLine();
        break;
    case 9:
        mn.horizontalLine();
        mn.twoLines();
        mn.horizontalLine();
        mn.rightVertical();
        mn.horizontalLine();
        break;
    case 0:
        mn.horizontalLine();
        mn.twoLines();
        mn.horizontalLine();
        break;

    }
      r/=10;
      System.out.print("\n");

   }
  }
}