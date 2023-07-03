//Method-2
// signed main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     string str; cin >> str;
//     int ans = 1;
//     for (int i = 1, cnt = 1; i < str.size(); ++i)
//     {
//         if (str[i] == str[i-1]) { cnt++; ans = max(ans, cnt); }
//         else cnt = 1;
//     }
//     cout << ans << '\n';
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
    string s;cin>>s;
int l=s.length();
   // sort(s.begin(),s.end());
    int ans=0,cnt=0;
    int temp=1;
    for(int i=1;i<l;i++){
        
     if(s[i]==s[i-1]){
        temp++;
       }
       else if(temp>=ans) {ans=temp;
       cnt=1;
       temp=1;}
       else{
        cnt=1;
        temp=1;
       }
       
       
    }

    if(temp>=ans) ans=temp;
if(cnt==1) cout<<ans<<"\n";
else{cout<<temp<<"\n";}


}



int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){

code();

 //   }
}