#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // while(n>0)
    // {
    //     cout<<n<<endl;
    //     cin>>n;
    // }

    // for(int i=1; i<=100; i++)
    // {
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    // int amount1;
    // cin>>amount1;

    // int amount2;
    // cin>>amount2;

    // int sum=amount1+amount2;
    // cout<<sum<<endl;


    // int save;
    // cin>>save;
    // if(save>5000){
    //     cout<<"salman"<<endl;
    // }
    // else{
    //     cout<<"saruk"<<endl;
    // }


    int n;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"divide by only one"<<endl;
    }
    else if(n%3==0){
        cout<<"divide by only 3"<<endl;
    }
    else{
        cout<<"divide by non";
    }
return 0;
}