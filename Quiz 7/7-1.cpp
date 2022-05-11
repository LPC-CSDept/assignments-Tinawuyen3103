#include<cmath>
#include<iostream>
using namespace std;

const int N = 10;
bool check(int a[],int index)
{
    
    if(index==0 && (abs(a[index]-a[index+1])<10))
         return true;
   
    if(index==N-1 && (abs(a[index]-a[index-1])<10))
        return true;
  
    if(index!=N && index!=0 && (abs(a[index]-a[index+1])<10) && (abs(a[index]-a[index-1])<10))
        return true;
  
        return false;
}
int main()
{
    int number[N] = {10,15,0,-25,19,20,25,30,45,20};
       
        for(int i=0;i<N;i++){
       
    if(check(number,i))
        cout<<number[i]<<" at index "<<i<<" is following the criteria."<<endl;
}
}