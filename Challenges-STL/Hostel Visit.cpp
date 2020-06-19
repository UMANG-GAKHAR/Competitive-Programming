#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll num;
    //The priority queue always contains first k elements
    //if we get a number greater than the max value then do not push it
    //and if we get a lower value value then pop the max value and push
    //the min value into queue
    priority_queue<ll> pq;
    while(n--)
    {
        cin>>num;
        if(num==1)
        {
           
                ll x,y;
                cin>>x>>y;
                ll sum =(ll)(x*x + y*y);
                pq.push(sum);
				if(pq.size()>k)
				pq.pop();
        }
        else
        {
            cout<<pq.top()<<endl;
        }
    }


}
