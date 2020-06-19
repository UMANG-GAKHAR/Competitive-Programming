#include<iostream>
#include<map>
using namespace std;
int sumofdistanctArray(int *arr,int n){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<int,int> m;
	int j=0,ans=0;
	for(int i=0;i<n;i++){
	while(j<n&&m.find(arr[j])==m.end()){
		m.insert(make_pair(arr[j],arr[j]));
		j++;
	}
	ans+=((j-i)*(j-i+1))/2;
	m.erase(arr[i]);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	cout<<sumofdistanctArray(arr,n);
}
