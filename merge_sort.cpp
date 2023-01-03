#include<iostream>
using namespace std;


int * printmerge(int a[],int b[],int m,int n){
    int i=m-1;//pointer for array A decrreasing order
    int j=0;  //pointer for array B
    int k=0;
    int *c=new int[m+n];   //dynamic allocation for returning the array
    while(i>-1&&j<n){
        if(a[i]<=b[j]) {c[k++]=a[i]; i--;}  //equal upper for STABILITY
        else{c[k++]=b[j]; j++;}
    }
    while(i>-1){c[k++]=a[i]; i--;}      
    while(j<n){c[k++]=b[j]; j++;}
    return c;
}

void mergetwo(int a[],int l,int m,int r)
{    int n1=m-l+1;
     int n2=r-m;
     int left[n1];
     int right[n2];
     for(int i=0;i<n1;i++) left[i]=a[l+i];
     for(int i=0;i<n2;i++) right[i]=a[m+1+i];
     int i=0,j=0,k=l;
     while(i<n1&&j<n2){
        if(left[i]<=right[j]){a[k]=left[i];i++;}
        else {a[k]=right[j];j++;}
        k++;
     }
     while(i<n1){a[k]=left[i];i++;k++;}
     while(j<n2){a[k]=right[j];j++;k++;}
}
void mergesort(int a[],int l,int r){
    if(l>=r)return;

        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        mergetwo(a,l,mid,r);
    
}
int main(){
    int a1[]={74,56,12,3};            //decreasing order
    int a2[]={2,5,6,12,50,72,90};     //increasing order
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    int *c=printmerge(a1,a2,m,n);
    // cout<<"\nMerged array is ";
    // for(int i=0;i<m+n;i++)
    //  cout<<c[i]<<" ";
    //  cout<<endl;
    
    int a3[]={4,1,3,9,7};
    int r=sizeof(a3)/sizeof(a3[0]);
    mergesort(a3,0,r-1);
    cout<<endl<<"Array after merge sort :";
    for(int j=0;j<r;j++)
    cout<<a3[j]<<" ";
    return 0;
}