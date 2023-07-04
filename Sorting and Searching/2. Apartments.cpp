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
    ll n,m,k,ans=0;cin>>n>>m>>k;
    ll arr1[n];
    ll arr2[m];

    for(ll i=0;i<n;i++){
cin>>arr1[i];}
for(ll i=0;i<m;i++){
    cin>>arr2[i];
}

sort(arr1,arr1+n);
sort(arr2,arr2+m);
ll i=0,j=0;
while(i<n && j<m){
    if(abs(arr1[i]-arr2[j])<=k){
        i++; j++;
        ans++;
    }
    else if((arr1[i]-arr2[j])>k){
j++;
    }
    else{
i++;
    }
}
cout<<ans<<endl;


}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//     
code();
}
