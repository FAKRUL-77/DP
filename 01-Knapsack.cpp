#include <bits/stdc++.h>
using namespace std;

int cost[200], weight[200], cap, n;

int knap(int i, int w)
{
    int profit1,profit2;
    if(i == n+1)
        return 0;
    if(w+weight[i]<=cap)
        profit1 = cost[i] + knap(i+1, w+weight[i]);
    else profit1 = 0;

    profit2 = knap(i+1, w);

    return max(profit1, profit2);
}

int main()
{
    cin>>n>>cap;

    for(int i=1;i<=n;i++)
    {
        cin>>weight[i]>>    cost[i];
    }

    int result;
    result = knap(1,0);

    cout<<result<<endl;
}
