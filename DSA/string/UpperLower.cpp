#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="zxcvbnmlkjhgfdsaqwer";
    // sort(s1.begin(), s1.end());

    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    // cout<<s1<<endl;
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
 
    // cout<<s1<<endl;


    //upper
    for(int i=0; i<s1.size(); i++){
        if(s1[i]>='a' || s1[i]<='z'){
             s1[i]-=32;

        }
    }

    //lower
    for(int i=0; i<s1.size(); i++){
        if(s1[i]>='A' || s1[i]<='Z')
             s1[i]+=32;
    }
    cout<<s1<<endl;

    return 0;
}