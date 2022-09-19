// // #include<iostream>
// // using namespace std;
// // int power(int n, int p){
// //     if(p==0){
// //         return 1;
// //     }
// //     int num = power(n, p-1);
// //     return n*num;
// // }


// // int main(){
// //     int n, p;
// //     cin>>n>>p;

// //     cout<<power(n,p)<<endl;

// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int fun1(int x, int y)
// {
// 	if (x == 0)
// 		return y;
// 	else
// 		return fun1(x - 1, x + y);
// }

// int main(){
//     int n, p;
//     cin>>n>>p;
//     cout<<fun1(n,p);

//     return 0;
// }


#include<iostream>
using namespace std;

/* Assume that n is greater than or equal to 1 */
void fun1(int n)
{
int i = 0;
if (n > 1)
	fun1(n - 1);
for (i = 0; i < n; i++)
	cout << " * ";
}

// This code is contributed by shubhamsingh10


int main(){

    int n;
    cin>>n;
    fun1(n);
}