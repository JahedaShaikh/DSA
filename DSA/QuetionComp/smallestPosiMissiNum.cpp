#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<"arr[i]="<<arr[i]<<" ";
    }
    cout<<endl;
    const int N = 1e6+2;
    bool check[N];
    for(int i=0; i<N; i++){
        check[i]=false;
    }
    cout<<endl;
    for(int i=0; i <n; i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
            cout<<"check[arr[i]]="<<check[arr[i]]<<" ";

        }
    }
    cout<<endl;
    int ans=-1;
    for(int i=0; i<N; i++){
        if(check[i]==false){
            ans=i;
            cout<<"ans="<<ans<<" ";
            break;
        }
    }
    cout<<ans<<endl;
return 0;
}