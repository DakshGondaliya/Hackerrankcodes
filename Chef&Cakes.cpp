/*
►Question : Chef and Cakes

Chef Ashu has N bases for cakes. Bases with the same area can be placed over one another. Since Ashu is a lazy chef he wants to make
minimum number of cakes. You need to tell him the minimum number of cakes that he can make by using all the N bases and also the height
of the tallest cake that he can make.

Input Format

First line contains a single integer t denoting the number of test cases.
First line of each test case contains an integer N denoting the number of bases.
Second line consists of N space separated integers A[i] denoting the areas of the bases.

Constraints

1 <= t <= 100
1 <= N <= 10^5
1 <= A[i] <= 10^9

Output Format

Output consists of two space separated integers M and H denoting the minimum number of cakes that can be made by using all the bases and
the height of the tallest cake respectively.

Sample Input 0

1
4
6 5 6 7
Sample Output 0

3 2
Explanation 0

In the first example, chef makes minimum number of cakes by choosing (5, 6, 7) so total 3, and tallest cake is 6 (of height 2) other's 
are of height 1.*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--)
    {
        int c=0,max=0,m,k;
        cin >> n;
        long a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        n = sizeof(a)/sizeof(a[0]);
        sort(a, a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            k = 0;
            for(int j=i;j<n-1;j++)
            {
                if(a[j]==a[j+1])
                {
                    k++;
                }
                else
                {
                    m = k;
                    break;
                }
            }
            if(max < m)
            {
                max = m;
            }    
        }
        int M = n-c;
        cout << M << " " << max+1 << "\n";
    }
    return 0;
}
