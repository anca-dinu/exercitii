//sum of multiples of 3 and 5 
#include <iostream>
using namespace std;
int main()
{
    int s=0;
for( int i=1;i<1000;i++)
{
    if(i%3==0||i%5==0)
    s=s+i;
}
cout<<"suma este "<<s;
    return 0;
}