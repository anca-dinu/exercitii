//sum of all primes below 2 million
#include <iostream>
using namespace std;
int prim(long int n)
{
    int k=0;
    if(n==2||n==3)
    return k;
    else{
    for(long int i=2;i*i<=n;i++)
    {
if(n%i==0)
{k=1;
break;
}
    }
    return k;
}
}

int main()
{
long int s=0;
for(long int i=2;i<2000000;i++)
if(prim(i)==0)
s=s+i;
cout<<s;
    return 0;
}