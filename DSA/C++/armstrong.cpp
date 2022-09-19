

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    int originaln=n;

    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        cout<<sum<<endl;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==originaln){
        cout<<"Armstrong number"<<endl;

    }
    else{
        cout<<"not armstrong number";
    }
return 0;    
}