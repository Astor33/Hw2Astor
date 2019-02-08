#include<iostream>
#include<math.h>
using namespace std;

int main(){

   int i,j,k,x;
   cout<<"Enter Size :";
   cin>>x;
   for(i=1;i<=x;i++)
      {
      for(j=x-1;j>=i;j--)
      cout<<" ";

      for(k=i-1;k>=-(i-1);k--)
      cout<<i-abs(k);
      
      cout<<endl;
      }
}
