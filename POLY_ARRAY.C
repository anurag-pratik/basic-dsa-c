#include<stdio.h>

int da1,da2,i,j,l;

int max(int a, int b)
{
    if(a>b)
     return a;
    else 
     return b; 
}



void add(int arr1[], int arr2[])
{
    int arr3[l];
    for(i=0;i<=l;i++)
     arr3[i]=0;

    printf("\nPolynomial 1 + Polynomial 2:\n");
  
    for(i=0;i<=da1;i++)
     arr3[i]+=arr1[i];

    for(i=0;i<=da2;i++)
     arr3[i]+=arr2[i];
    
    for(i=0;i<=l;i++)
    {
     printf("%d ",arr3[i]);
     if(i!=0)
     printf("x^%d ",i);
     if(i<l)
      printf("+ ");
    }
}

void mull(int arr1[],int arr2[])
{
    int arrm[da1+da2+1];

    for(i=0;i<=da1+da2;i++)
     arrm[i]=0;


    for(i=0;i<=da1;i++)
    {
        for(j=0;j<=da2;j++)
        {
         arrm[i+j]+=(arr1[i]*arr2[j]);
        }
    }

    printf("\n\nPolynomial 1 x Polynomial 2:\n");

    for(i=0;i<=da1+da2;i++)
    {
     printf("%d ",arrm[i]);
     if(i!=0)
     printf("x^%d ",i);
     if(i<da1+da2)
      printf("+ ");
    }
}


int main()
{
    printf("Enter the highest degree of the polynomial 1: ");
    scanf("%d",&da1);
    int arr1[da1+1];
    for(i=0;i<=da1;i++)
    {
        printf("Enter coefficient for power %d: ",i);
        scanf("%d",&arr1[i]);
    }

    printf("Enter the highest degree of the polynomial 2: ");
    scanf("%d",&da2);
    int arr2[da2+1];
    for(i=0;i<=da2;i++)
    {
        printf("Enter coefficient for power %d: ",i);
        scanf("%d",&arr2[i]);
    }

    l=max(da1,da2);
    add(arr1,arr2);
    mull(arr1,arr2);
    return 0;
}
