// #include<iostream>
// using namespace std;

// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// void dec(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }


#include<iostream>
using namespace std;

void HeadTail(int n){
    if(n<=0){
        return;
    }
    cout<<n<<" ";
    HeadTail(n-1);
    cout<<n<<" ";
    return;
}



int main(){
    int n;
    cin>>n;
    HeadTail(n);

    return 0;
}