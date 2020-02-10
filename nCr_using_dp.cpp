#include <bits/stdc++.h>
using namespace std;
int memo[300][300];

int nCr(int n,int r)
{
    if(r==n)return n;
    if(r==1)return 1;

    if(memo[n][r]!=-1)
        return memo[n][r];

    memo[n][r] = nCr(n-1, r) + nCr(n-1, r-1);

    return memo[n][r];
}

int main()
{
    for(int i=0;i<300;i++)
        for(int j=0;j<300;j++)
            memo[i][j] = -1;


    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r);

    return 0;
}
