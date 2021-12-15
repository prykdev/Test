#include<iostream>
#include<math.h>
using namespace std;

int decimaltobinary(int n)
{
	int ans=0 , i=0;
	n*=-1;
	while(n!=0)
	{
		int bit=n&1;
		ans=(bit*pow(10,i))+ans; //to reverse ans=(digit*10^i)+ans
		n=n>>1;
		i+=1;
	}
	//for negative numbers
	int ones = ~(ans);
	int twos = ones+1;
	int ones1 = ~(twos);
	int twos1 = ones1 + 1;
	return twos1;
}
int main()
{
	int n;
	cin >> n;
	cout << decimaltobinary(n);
	return 0;
}