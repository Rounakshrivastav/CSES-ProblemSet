//method-2
// signed main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int n; cin >> n;
//     int sm = 0;
//     for (int i = 0; i < n-1; ++i) { int x; cin >> x; sm += x; }
//     cout << ((n*(n+1))/2 - sm) << '\n';
//     return 0;
// }



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
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
sort(arr,arr+n-1);
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
           return;
        }
    }

    cout<<n<<endl;
}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 code();

}
