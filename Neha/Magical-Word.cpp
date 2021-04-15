/*
Problem
Dhananjay has recently learned about ASCII values.He is very fond of experimenting. With his knowledge of ASCII values and character he has developed a special word and named it Dhananjay's Magical word.

A word which consist of alphabets whose ASCII values is a prime number is an Dhananjay's Magical word. An alphabet is Dhananjay's Magical alphabet if its ASCII value is prime.

Dhananjay's nature is to boast about the things he know or have learnt about. So just to defame his friends he gives few string to his friends and ask them to convert it to Dhananjay's Magical word. None of his friends would like to get insulted. Help them to convert the given strings to Dhananjay's Magical Word.

Rules for converting:

1.Each character should be replaced by the nearest Dhananjay's Magical alphabet.

2.If the character is equidistant with 2 Magical alphabets. The one with lower ASCII value will be considered as its replacement.

Input format:

First line of input contains an integer T number of test cases. Each test case contains an integer N (denoting the length of the string) and a string S.

Output Format:

For each test case, print Dhananjay's Magical Word in a new line.

Constraints:

1 <= T <= 100

1 <= |S| <= 500

Sample Input
1
6
AFREEN
Sample Output
CGSCCO
Time Limit: 0.5
Memory Limit: 256
Source Limit:
Explanation
ASCII values of alphabets in AFREEN are 65, 70, 82, 69 ,69 and 78 respectively which are converted to CGSCCO with ASCII values 67, 71, 83, 67, 67, 79 respectively. All such ASCII values are prime numbers.
*/

/*#include <bits/stdc++.h>
using namespace std;

int nearestPN(int n){
	int r1,r2;
	int res = n+1;
	for(int i=2; i<90; i++){
		if(res%i == 0)
			res++;
		else
			r1=res;
	}

	res = n-1;
	for(int i=2; i<res; i++){
		if(res%i==0)
			res--;
		else	
			r2=res;
	}

	if( (n-r2) > (r1-n) )
		return r1;
	else if( (n-r2) < (r1-n) )
		return r2;
	else	
		return r2;
}

int main() {
	int t;
	cin >> t;

	while(t--){
		int len;
		cin>>len;

        string s, res="";
		cin>>s;
		transform(s.begin(), s.end(), s.begin(), ::toupper);

		cout<<s;

		for(int i=0; i<len; i++){
			int ascii = (int)s[i];
			int n = nearestPN(ascii);
			char c = char(n);
			res = res + c;
		}
		cout<<res;
	}
}*/

#include <iostream>
#include <string>
using namespace std;

bool prime(int);
char func(char);
int okay(int);

int okay(int p){
bool b=prime(p);

int a=1;

while (b==false){

a*=-1;

p+=a;

if (a>0)

a+=1;

else

a-=1;

if ((p>=65&&p<=90)||(p>=97&&p<=122))

b=prime(p);

}

return p;

}


 

bool prime(int q){

for (int i{2};i<q;i++){

if (q%i==0){

return false;

}

}

if (q<65||(q>90&&q<97)||q>122)

return false;

return true;

}


 

char func(char c){

int k{c};

bool a=prime(k);

if (a==true){

return c;

}

else{

int r=okay(k);

char y=r;

return y;

}

}


 

int main(){

int t;

cin>>t;

for (int i{1};i<=t;i++){

int n;

cin>>n;

string str;

cin>>str;

for (int i{};i<n;i++){

str[i]=func(str[i]);

}

cout<<str<<endl;

}

}
