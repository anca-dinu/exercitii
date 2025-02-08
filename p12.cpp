//value of first triangle number with more than 500 divisors
#include <iostream>
using namespace std;
int nrdiv(long int x)
{
    int k=0;
    for(int i=1;i*i<=x;i++)
    if(x%i==0){
    k+=2;
    if(i*i==x)
    k--;
    }
return k;
}
int main()
{
long int a=1;
int j=2;
    while(nrdiv(a)<=500){
        a=a+j;
        j++;
    }
cout<<a;
    return 0;
}