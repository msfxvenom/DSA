#include <bits/stdc++.h>

int main() {
    int a[]={10,0,3,4,7,8};
    int n=6;
    printf("\n working");
    
    int max,temp;
    for(int i=0;i<n-1;i++)
    {
        max=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[max])
            {
                max=j;
            }
        }
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    printf("\n Array after selection sort :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
  for(int i=0;i<n-1;i++)
    {for(int j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
          temp=a[j+1];
          a[j+1]=a[j];
          a[j]=temp;
        }
      }
    }
  printf("\n Array after bubble sort :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

  for(int i=1;i<n;i++)
    {
      temp=a[i];
      int j=i-1;
      while(j>=0&&a[j]>temp)
        {
          a[j+1]=a[j];
          j--;
        }
      a[j+1]=temp;
    }
    
 printf("\n Array after insertion sort :");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
