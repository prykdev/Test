#include <iostream> //header file
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    i=1;
    int count=1;
    while(i<=n){
        j=1;
        //print space
        int space =0;
        while(j<=n)
        {
            cout<<space;
            space++;
        }
        /*print stars
        while(j<=i)
        {
            cout<<count;
            count++;
            j++;
        }*/
        cout<<endl;
        i++;
    }
    return 0;
}