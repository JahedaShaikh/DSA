#include<iostream>
using namespace std;

int BinaryTodecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int y=n%10;
        ans+=y*x;
        x*=2;
        n/=10;
    }
    return ans;

}

int main(){
    int n;
    cin>>n;

    cout<<BinaryTodecimal(n)<<endl;

return 0;
}