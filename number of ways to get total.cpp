#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n,w;
    cin>>w>>n;

    long long int arr[n+5][w+5];
    int coin[n+1];
    coin[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>coin[i];
    }

    for(int i=0;i<=w;i++)
    {
        arr[0][i] = 0;
    }

    for(int i=0;i<=n;i++)
    {
        arr[i][0] = 1;
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(coin[i]>j)
            {
                arr[i][j] = arr[i-1][j];
            }
            else{
                arr[i][j] = arr[i-1][j]+arr[i][j-coin[i]];
            }
        }
    }

    cout<<"There are "<<arr[n][w]<<" ways to produce "<<w<<" cents change."<<endl;


    return 0;
}
