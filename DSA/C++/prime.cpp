#include<iostream>
#include<math.h>
using namespace std;
// int main()
// {
    // int n;
    // cin>>n;
    // bool flag=0;
    // for(int i=2; i<=n; i++){
    //     if(n%i==0){
    //         cout<<"non prime"<<endl;
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"prime"<<endl;
    // }


    // int a, b;
    // int div=2;
    // cin>>a>>b;
    // for(int i=a; i<=b; i++){
    //     if(i%div==0){
    //         // cout<<"not prime"<<i<<endl;
    //         continue;
    //     }
    //     cout<<"prime"<<i<<endl;
    //     // div=div+1;
    // }

//     int n;
//     cin>>n;
//     bool flag=0;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//        if(n%i==0){
//            cout<<"not prime"<<endl;
//            flag=1;
//            break;
//        }
//     }
//     if(flag==1){
//         cout<<"prime"<<endl;
//     }
    
//  return 0;   
// }

bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
return 0;    
}