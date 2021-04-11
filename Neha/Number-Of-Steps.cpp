/*
Problem
You are given two arrays  and . In each step, you can set  if . Determine the minimum number of steps that are required to make all 's equal.

Input format

First line:  
Second line: 
Third line: 
Output format

Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

Constraints


Sample input

2
5 6
4 3

Sample output

-1

Sample Input
5
5 7 10 5 15
2 2 1 3 5
Sample Output
8
Time Limit: 1
Memory Limit: 256
Source Limit:
*/

#include <iostream>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

int main() {
	int num;
	cin >> num;

	int a[num], b[num];
	for(int i=0; i<num; i++)
		cin>>a[i];
	for(int i=0; i<num; i++)
		cin>>b[i];

	int min = getMin(a,num);
	int count = 0;
	int flag = 1;

	for(int i=0; i<num; i++){
		while(a[i] > min && b[i] != 0){
			a[i] = a[i] - b[i];
			count++;
		}
		
		if(a[i] < 0){
			flag = 0;
			break;
		}else{
			min = getMin(a,num);
		}
	}

	for(int i=0; i<num; i++){
		if(a[i] != min){
			flag = 0;
			break;
		}
	}

	if(flag == 0)
		cout<<"-1";
	else
		cout<<count;

}
