
#include <iostream>
using namespace std;

int main()
{
    int i,count=0;
    int arr[10]={199,200,208,210,200,207,240,269,260,263};
    
    for(i=0;i<10;i++){
       if(arr[i]<arr[i+1]){
           count++;
       }
    }
    cout<<count;

    return 0;
}