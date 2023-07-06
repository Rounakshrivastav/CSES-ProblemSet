#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back 
#define mp make_pair
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> unmap;
#define ff first
#define ss second
const int mod=1e9+7;
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define F(i,a,b) for(int i=a;i<b;i++)
#define forin(arr,n) for(int i=0;i<n;i++) cin>>arr[i]
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> 
 
void code(){
    int n,x;cin>>n>>x;
    vi vec(n);
    forin(vec,n);

    srt(vec);
    int ans=0,ind=0;
 for(int i=n-1;i>0;i--){
  if(vec[i]>=x) ans++;
  else {
      ind=i;break;
  }
 }
    int i=0,j=ind;
    while(i<=j){
        if(vec[i]+vec[j]<=x){
            ans++;i++;j--;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans;
}



signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
   // cin>>t;

    while(t--){

code();

    }
}