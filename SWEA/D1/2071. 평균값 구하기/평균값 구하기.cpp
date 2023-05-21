#include<stdio.h>
#include<math.h>
int main()
{
  

    int a;
    float sum=0;
    scanf("%d",&a);
    int arr[10];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<10;j++)
        {

        scanf("%d",&arr[j]);

    
   
        sum+=arr[j];
        
        }
        printf("#%d %d\n",i+1,(int)round(sum/10));
        sum=0;
    }
}
