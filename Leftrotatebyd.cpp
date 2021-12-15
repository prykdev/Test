#include <stdio.h>

using namespace std;

void leftrotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
    arr[n-d+i]=temp[i];
}
int main()
{
    int arr[1000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int d;
    scanf("%d",&d);
    
    leftrotate(arr,n,d);
    
     for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
