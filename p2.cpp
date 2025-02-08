//sum of even fibonacci terms under 4 million
#include <iostream>
using namespace std;

int main()
{
int a,b,c,s;
b=c=1;
s=0;
while(c<4000000)
{
    a=b;
    b=c;
    c=a+b;
    if(c%2==0)
    s=s+c;
}
cout<<"suma e "<<s<<"\n";
    return 0;
}