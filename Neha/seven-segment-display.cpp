/*
Problem
You all must have seen a seven segment display.If not here it is:



Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

 

Input Format:

First line contains T (test cases).

Next T lines contain a Number N.

Output Format:

Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N.

Constraints:



Sample Input
2
1
0
Sample Output
1
111
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
If you have 1 as your number that means you have 2 match sticks.You can generate 1 using this.

If you have 0 as your number that means you have 6 match sticks.You can generate 111 using this.
*/


/*#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;

		int stick = 0;
		while (stick > 0){
			int digit = stick%10;
			stick /= 10;

			switch(digit) {
				case 0:
					stick += 6;
				case 1:
					stick += 2;
				case 2:
					stick += 5;
				case 3:
					stick += 5;
				case 4:
					stick += 4;
				case 5:
					stick += 5;
				case 6:
					stick += 6;
				case 7:
					stick += 3;
				case 8:
					stick += 7;
				case 9:
					stick += 6;
				default:
					stick = stick;
			}


		}

		string s = "";

		while(stick!=0)
			if(stick%2 == 0){
				int times = stick/2;
				stick=0;

				string str = "1";
				string repeat = str.repeat(times);
				s.append(repeat);

			}else{
				stick = stick -3;
				s.append("7");
			}
	}
}*/



#include <iostream>

using namespace std;

int main()

{

     int n; cin >>n;

while (n--)

{

string t; cin >> t;

int sticks = 0, stick_1 = 2, stick_7 = 3 ;

int a[10] = { 6, 2 , 5, 5, 4 , 5, 6, 3, 7, 6};

int temp = 0; int m = 0;

int len = t.size();

for (; len > 0 ; len-- )

{

m = t[len-1] - 48;

sticks = sticks + a[m];

}

while(sticks > 0)

{

if (sticks % 2 ==1)

{

cout << "7";

sticks = sticks - stick_7;

}

else

{

cout << "1";

sticks = sticks - stick_1;

}

}

cout << endl;

}

}
