#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back 
#define mp make_pair
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod=1e9+7;
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"


 void code(){
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
cin>>arr[i];
    }

    sort(arr,arr+n);
int cnt=1;
    for(ll i=1;i<n;i++){
     if(arr[i]!=arr[i-1]) cnt++;
    }
    cout<<cnt<<endl;
}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){

code();

   // }
}