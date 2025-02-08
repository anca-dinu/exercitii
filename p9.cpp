//a<b<c, a^2+b^2=c^2,  a+b+c=1000
#include <iostream>
using namespace std;
int pitagora(int a,int b,int c)
{
if(a*a+b*b==c*c)
return 1;
else return 0;
}
int main()
{int a,b,c;
for(int i=1;i<1000;i++){
for(int j=1;j<1000;j++)
if(pitagora(i,j,1000-i-j)==1){
    a=i;
    b=j;
    c=1000-a-b;
    goto final;
}
}
final:
cout<<"a= "<<a<<"\n"<<"b= "<<b<<"\n"<<"c= "<<c<<"\n";

    return 0;
}