#include <iostream>

#include<bits/stdc++.h>
using namespace std;

nclude <iostream>
using namespace std;
int main()
{
int x,y,r,reminder;
   cin>>x;
   cin>>y;
   r=0;
   while(y>0){
      reminder=y%10;
      r=r*10+reminder;
      y=y/10;
   }
   if(a==r){
      cout<<"recycled pairs";
   }
   else{
      cout<<"not recyccled";
   }
}
      
