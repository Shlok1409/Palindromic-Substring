#include <bits/stdc++.h>
using namespace std;

bool check(string A,string B)
{
    set<char> s1,s2;
    
    for(long long i = 0; i < A.size() ; i++)
        s1.insert(A[i]);
        
    for(long long i = 0; i < B.size() ; i++)
        s2.insert(B[i]);
    
    long long count = 0;    
    for(auto x : s1)
    {
        for(auto y : s2)
        {
            if(y == x)
               count++;
        }
    }
    
    if(count == 0)
       return false;
    else
       return true;
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    string A,B;
	    cin>>A>>B;
	    
	    if(check(A,B))
	       cout<<"Yes"<<endl;
	    else
	       cout<<"No"<<endl;
	}
	return 0;
}
