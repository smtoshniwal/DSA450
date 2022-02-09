// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0)
        return -1;
        
        int count=0;
        int pos=-1;
        for(int i=31;i>=0;i--)
        {
            int k=N>>i;
            if(k&1==1)
            {
                count++;
                pos=1+i;
                if(count>1)
                return -1;
            }
            
        }
        
        
        return pos;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
