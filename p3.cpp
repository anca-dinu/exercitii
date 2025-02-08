//largest prime factor 
#include <iostream>
using namespace std;
int prim(long int n)
{
    int k=0;
    for(long int i=2;i*i<n;i++)
    {
if(n%i==0)
{k=i;
break;
}
    }
    return k;
}
int main()
{
long int s=0;
long int x=600851475143;
for (long int i=2;i*i<x;i++)
{
    if(x%i==0)
    {
        if(prim(x/i)==0)
        {s=x/i;
        break;
        }
        else
            x=x/i;
    }
}
cout<<"nr e "<<s;
    return 0;
}