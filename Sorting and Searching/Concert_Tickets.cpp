//method2
// int n, m, h, t;
// multiset<int> tickets;

// void solve() {
// 	cin >> n >> m;
// 	for (int i = 0; i < n; ++i) {
// 		cin >> h;
// 		tickets.insert(h);
// 	}
// 	for (int i = 0; i < m; ++i) {
// 		cin >> t;
// 		auto it = tickets.upper_bound(t);
// 		if (it == tickets.begin()) {
// 			cout << -1 << "\n";
// 		} else {
// 			cout << *(--it) << "\n";
// 			tickets.erase(it);
// 		}
// 	}
// }



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
    int n,m;cin>>n>>m;
    vi ticket(n);
    vi customer(m);
    
    multiset<int, greater<int>> st;
    for(int i=0;i<n;i++){
        cin>>ticket[i];
         st.insert(ticket[i]);
    }

    for(int i=0;i<m;i++){
        cin>>customer[i];
        auto it = st.lower_bound(customer[i]);
        if (it == st.end()) cout << "-1\n";
        else { cout << *it << '\n';
         st.erase(it); 
         }
    }
   
    
   
}



signed main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
 //   cin>>t;

    while(t--){

code();

    }
}