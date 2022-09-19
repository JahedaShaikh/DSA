// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=1; i<=n; i++){
//         factorial*=i;
//     }
//     return factorial;
// }



// int main(){
//     int n;
//     cin>>n;
//      int ans = fact(n);
//      cout<<ans<<endl;
// return 0;
// }

// nCr
// #include<iostream>
// using namespace std;

// int fact(int n){
//     int facto=1;
//     for(int i=1; i<=n; i++){
//         facto*=i;
//     }
//     return facto;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;

//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;

// return 0;
// }


// 1
// 1 1
// 1 2 1
// 1 2 3 1
// 1 2 3 4 1

#include<iostream>
using namespace std;

int fact(int n){
    int facto=1;
    for(int i=1; i<=n; i++){
        facto*=i;
    }
    return facto;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<endl;
        }
        cout<<endl;
    }
return 0;
}