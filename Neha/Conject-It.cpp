/*
Problem
You are given a number N. You can perform the following operations on N any number of times:

> If N is even, divide N by 2.

> If N is odd, replace N with 3N+1.

 

Your task is to find out, for a given N, if it is possible to reach the number 1 after performing the above two valid operations on N any number of times.

 

INPUT:

First-line contains T denoting the number of test cases.
Next T lines contain just one integer, N.
 

OUTPUT:

Print "YES" (without the quotes) if it is possible to reach 1 for the given N. Else print "NO"(without quotes).

 

Constraints:

1<= T <=100

2<= N <= 10100,000

       

Sample Input
1
21
Sample Output
YES
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
The steps are:

21 --> 64 --> 32 --> 16 --> 8 --> 4 --> 2 --> 1.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        while(n!=1){
            if(n%2 == 0)
                n = n/2;
            else
                n = (3*n) +1;
        }

        if(n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
