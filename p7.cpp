//the 10001st prime number
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
{ int i=0,j=2;
while(i<10001)
{
    if(prim(j)==0)
    i++;
j++;
}
cout<<j-1;
    return 0;
}
