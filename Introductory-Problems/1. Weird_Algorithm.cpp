#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

void code(){
    ll n;
    cin>>n;

    cout<<n<<" ";

    while(n!=1){

    if(n%2==0){
        cout<<n/2<<" ";
        n=n/2;
    }
    else{
        cout<<3*n+1<<" ";
        n=3*n+1;
    }
    }
}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin>>t;

    //while(t--){

code();

   // }
}
