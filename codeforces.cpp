#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m<n)cout<<"NO\n";
        else{
            if(m==n){
                cout<<"YES\n";
                for(int i=1;i<=n;i++)cout<<1<<" ";
                cout<<"\n";
            }
            else{
                if(m%n==0){
                    cout<<"YES\n";
                    for(int i=1;i<=n;i++)cout<<m/n<<" ";
                }
                else if(m%2==0&&n%2==0){
                    cout<<"YES\n";
                  for(int i=1;i<=n-2;i++){
                    cout<<1<<" ";
                  }
                  m-=(n-2);
                  cout<<m/2<<" "<<m/2<<"\n";

                }
                else if(m%2!=0&&n%2!=0){
                    cout<<"YES\n";
                    for(int i=1;i<=n-1;i++)cout<<1<<" ";
                    cout<<m-(n-1)<<"\n";
                }
                else cout<<"NO\n";
                
            }
        }

    }
    return 0;

}