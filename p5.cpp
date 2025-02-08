//smallest number divisible by all numbers from 1 to 20
#include <iostream>
using namespace std;
int prim( int n)
{
    int k=0;
    for(int i=2;i<n;i++)
    {
if(n%i==0){
    k=1;
break;
}
    }
return k;
}
int main()
{
    int n,m=1;
    for(int i=2;i<20;i++){
        n=1;
if(prim(i)==0)
{
    while((n*i)<=20)
    {
        n=i*n;
    }
    m=m*n;
}
    }
    cout<<m<<" "<<n;
    return 0;
}
