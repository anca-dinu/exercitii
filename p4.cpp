//largest palindrome that can be written as a product of 2 3-digit numbers
#include <iostream>
using namespace std;
int palindrom(long int x)
{ int y=0;
long int a=x;
while(a!=0)
{
    y=y*10+a%10;
    a=a/10;
}
if(y==x)
return 1;
else
return 0;
}
int main()
{ long int x=0;
    for(int i=100;i<=999;i++){
        for(int j=100;j<=999;j++)
        if(palindrom(i*j)==1){
            if((i*j)>x)
x=i*j;
    }
    }
    cout<<x;
    return 0;
}
