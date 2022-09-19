#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="23457673824359865";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
}