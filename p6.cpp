// difference between sum of squares and square of sum for the first 100 natural numbers
#include <iostream>
using namespace std;

int main()
{
int s1=0, s2=0, n=100,s;
for(int i=1;i<=n;i++)
{
    s1=s1+i*i;
    s2=s2+i;
}
s=s2*s2-s1;
cout<<s;

    return 0;
}