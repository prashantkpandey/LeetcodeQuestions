#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define read(t) int t; cin>>t;
 
int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif 
   
   
   int arr[]={3,4,-1,1};
   int i=0;
   while(i<4)
   {
    int correct_idx=arr[i]-1;
    if(arr[i]>0 and arr[i]<5 and arr[i]!=arr[correct_idx] )
    {
        swap(arr[i],arr[correct_idx]);

    }
    else
        i++;
   }
   
   for(int i=0;i<4;i++)
   {
    if(arr[i]!=i+1) cout<<i+1;
   }  


   

   return 0;
}
   
  