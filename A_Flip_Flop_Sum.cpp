#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void result()
{
  int n;
  cin>>n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin>>arr[i];
  
  sort(arr.begin(),arr.end());

  arr[0] = -arr[0];
  arr[1] = -arr[1];

  int val =0;

 for (int i = 0; i < n; i++){
    val = val + arr[i];
  }
  cout<<val<<endl;
  
}
int main()
{
int t;
cin>>t;
while(t--)
{
result();
}
return 0;
}