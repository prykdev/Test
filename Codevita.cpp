#include<stdio.h>
#include<math.h>
using namespace std;
int main () {
    int r1;
    scanf("%d",&r1);
    int n;
    scanf("%d",&n);
    int r2;
    scanf("%d",&r2);
    int x;
    scanf("%d",&x);

    int total = 0;
    int hours = ceil(x * 1.0 / 60);
    if (n > hours) {
        total += (hours * r1);
    } else {
        total += n * r1;
        hours -= n;
        total += hours * r2;
    }
    printf("%d",total);
    return 0;
}