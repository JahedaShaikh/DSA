#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str(5, 'N');  //NNNNN
    // string abc(str);  //copy

    // string name;
    // getline(cin, name);
    // cout<<name<<endl;

    //appent the string
    string s1="sanaya shaikh";
    string s2="inamul shaikh";
    s1.append(s2);
    // cout<<s1<<endl;
    // cout<<s1+s2<<endl;

    //assign 
    // string s="sanaya";
    // s.assign("salman");  //for replace the string
    // cout<<s<<endl;

    //at()  returns the character at a perticular position
    string s="sanayashaikh";
    // cout<<s.at(3)<<endl;
    // cout<<s[3]<<endl;
    // s.clear();
    // cout<<s<<endl;

//campare()
    string a="abcd", b="xyzssddafa";
    // cout<<b.compare(a)<<endl; 
    string a1="xyz", b1="abcd";
    // cout<<b1.compare(a1)<<endl; 

    // string s3="sanayashaikh";
    // s3.clear();
    // if(s3.empty()){
    //     cout<<"given string is empty";
    // }

    string name="sanayashaikh";
    // name.erase(3,3);
    // cout<<name<<endl;
    // cout<<name.find("sh")<<endl;
    // name.insert(6, "khan");
    // cout<<name.length()<<endl;
    // cout<<name.size()<<endl;

    name.resize(6);
    // cout<<name<<endl;
    // cout<<name.substr(3,4)<<endl;

    string no1="786";
    // int x=stoi(no1);
    // cout<<x+2<<endl;  //788
    int no2=786;
    // cout<<to_string(no2)+"2"<<endl;



    //sort the string
    string x="jshdfuqeenzzxbq";
    sort(x.begin(), x.end());
    cout<<x<<endl;



return 0;
}
