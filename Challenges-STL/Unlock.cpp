#include<bits/stdc++.h>
    using namespace std;
    #define ll long  long
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int N,K;
        cin>>N>>K;
        int arr[N+1],index[N+1];
        for(int i=1;i<=N;i++)
        {
            cin>>arr[i];
            index[arr[i]]=i;
        }
        int temp=N,i=1;
        while(K && i<=N)
        {
			if(arr[i]!=temp)
            {
                int pos=index[temp];
                index[arr[i]]=pos;
                swap(arr[i],arr[pos]);
                
                K--;
            }
            i++;
            temp--;
        }
        for(int i=1;i<=N;i++)
            cout<<arr[i]<<" ";
        
    }
