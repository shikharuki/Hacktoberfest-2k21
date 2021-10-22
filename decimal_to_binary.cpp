#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n)
{
   string ans;
   while(n>0){
       int current_bit = n&1;
       ans+=current_bit+'0';
       //n>>=1;
       n=n/2;
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
int main()
{   
    int n;
    cout<<"Enter the no. to convert into binary : ";
    cin>>n;
    string bnry = decimal_to_binary(n);
    cout << bnry << "\n";
    return 0;
}