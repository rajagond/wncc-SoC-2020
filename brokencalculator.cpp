/* Solution Idea from 
https://leetcode.com/problems/broken-calculator/solution/
*/
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int X,Y;
    cin>>X>>Y;
    if(Y<=X) cout<<X-Y<<'\n';
    else{
    	int ans = 0;
        while (Y > X) {
            ans++;
            if (Y % 2 == 1)
                Y++;
            else
                Y /= 2;
        }
        cout<<ans+X-Y<<'\n';
    }

	return 0; 
} 
