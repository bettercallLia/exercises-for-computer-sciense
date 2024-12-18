#include <iostream>

using namespace std;
int main()
{ 
// ilia sedighnia
int n , a=1 , b=1 , t;
cout<<"please enter a number";
cin>>n;
for(int i=3 ; i<=n ; i++)
{
 t=b+a;
  a=b;
  b=t;
}
  cout<<"the"<<n<<"number is"<<t;
    return 0;
}