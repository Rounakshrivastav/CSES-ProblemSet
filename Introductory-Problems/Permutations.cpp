//Method-2
// signed main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int n; cin >> n;
//     if (n == 1) cout << "1\n";
//     else if (n < 4) cout << "NO SOLUTION\n";
//     else
//     {
//         for (int i = 2; i <= n; i += 2) cout << i << " ";
//         for (int i = 1; i <= n; i += 2) cout << i << " ";
//         cout << '\n';
//     }
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
    int n;cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    if(n<4) {cout<<"NO SOLUTION"<<endl;
    return;}

    if(n%2==0){
       
        int i=2;
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }
        int j=1;
        while(j<=n){
            cout<<j<<" ";
j+=2;
        }
    }

    else{
       
        int i=n-1;
        while(i>0){
            cout<<i<<" ";
            i-=2;
        }
        int j=n;
        while(j>0){
            cout<<j<<" ";
j-=2;
        }
    }

}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){

code();

    //}
}