//longest collatz sequence 
#include <iostream>
using namespace std;

int nrel(long int x){
    int k=1;
    while(x!=1){
        if(x%2==0)
        x=x/2;
        else
        x=3*x+1;
        k++;
    }
    return k;
}

int main()
{
int amax=0, a=0;
long int x=0;
    for(int i=2;i<1000000;i++){
        a=nrel(i);
        if(a>amax){
            amax=a;
            x=i;
        }
    }
cout<<"the number that produces the longest chain is "<<x;
return 0;
}