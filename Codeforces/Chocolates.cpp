    //Problem link given below
    //https://codeforces.com/contest/1139/problem/B
    #include <bits/stdc++.h>
    using namespace std;
    #define loop(i,x,n) for(int i=x;i<n;i++)
    #define ll long long int
    #define mod 1000000007
    #define pb push_back
    #define mk make_pair
    int main()
    {
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int n;
       cin>>n;
       ll arr[n];
       loop(i,0,n)
       cin>>arr[i];
       ll ans=arr[n-1],prev=arr[n-1];
       for(int i=n-2;i>=0;i--)
       {
           if(arr[i]<prev)
            ans+=arr[i],
            prev=arr[i];
           else
            prev=max(0LL,prev-1LL),
            ans+=prev;
       }
       cout<<ans<<"\n";
       return 0;
    }
