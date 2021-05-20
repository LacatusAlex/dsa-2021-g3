#include <stdio.h>
#include <stdlib.h>
int count=0;
int backt(int i,int k,int j,int m,int n)
{


    if(i<0 || j<0)
    {
        return 0;
    }
    if(i+k==m && j+k==n)
    {
        count++;
        backt(i-1,k+1,j-1,m,n);

    }



}




int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    int i=m;
    int j=0;
    int k;
   // while(j==n && i==m)
    //{
      //  for(k=0;k<)


    //}
   // for(i=0;i<n;i++)
    //{
     //   for(j=0;j<n-i;j++)
    //    {
     //       for(k=0;k<m-j;k++)
     //       {
      //          count++;
    //        }
    //    }
   // }
    backt(m,0,n,m,m);


    printf("%d",count);



    return 0;
}
