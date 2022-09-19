#include<iostream>
using namespace std;

void reverse(string name){
    if(name.length()==0){
        return;
    }
    string ros=name.substr(1);
    reverse(ros);
    cout<<name[0];

}

int main(){


string name;
cin>>name;
reverse(name);

return 0;

}