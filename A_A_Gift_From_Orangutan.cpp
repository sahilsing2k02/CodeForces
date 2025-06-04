#include<bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main() {
    ll tc; 
    cin >> tc;
    
    while (tc--)
    {
        ll n; 
        cin >> n;
        
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        
        int mx = *max_element(arr.begin(), arr.end()); // maximum element
        int mn = *min_element(arr.begin(), arr.end()); //min
        
        cout << (mx - mn) * (n - 1) << endl;
    }
    
    return 0;
}