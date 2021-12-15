#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i = 1;

    while(i<=n){
        //print spaces
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }

        //printing numbers
       int num = n - i + 1;
       int z = i;
       while(num){
           cout<<z;
           z++;       
           num--;
       }
       cout<<endl;
       i = i+1;
    }
}