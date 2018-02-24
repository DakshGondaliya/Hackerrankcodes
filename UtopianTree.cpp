#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
      for(int a0 = 0; a0 < t; a0++)
		{
        	int n;
            cin >> n;
            
            if(n<=60)
            {
	            if(n%2 == 0)
	            {
	            	long r1 = pow(2,(n+2)/2)-1;
	            	cout << r1 << "\n";
				}
				
			    else
			    {
			    	long r2 = pow(2,(n+3)/2)-2;
			    	cout << r2 << "\n";
				}
			}
            
    	}
    return 0;
}

