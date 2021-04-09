/*
Problem: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/its-magic/
Sussutu is a world-renowned magician. And recently, he was blessed with the power to remove EXACTLY ONE element from an array.

Given, an array A (index starting from 0) with N elements. Now, Sussutu CAN remove only that element which makes the sum of ALL the remaining elements exactly divisible by 7.

Throughout his life, Sussutu was so busy with magic that he could never get along with maths. Your task is to help Sussutu find the first array index of the smallest element he CAN remove.

Input:
The first line contains a single integer N.
Next line contains N space separated integers Ak , 0 < k < N.

Output:
Print a single line containing one integer, the first array index of the smallest element he CAN remove, and -1 if there is no such element that he can remove! 

Constraints:

1 < N < 105

0 < Ak < 109

Sample Input
5
14 7 8 2 4
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Both 14 and 7 are valid answers, but since 7 is the smallest, the required array index is 1.
*/

#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int i;
     
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

int main() {
	int n;
	cin >> n;

	int arr[n], sum[n]={0};
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n && j!=i; j++){
			sum[i]+=arr[j];
		}
	}

	int res = largest(arr, n);
	for(int i=0; i<n; i++){
		if(sum[i] % 7 == 0){
			if(res>arr[i])
				res = arr[i];
		}
	}

	for(int i=0; i<n; i++){
		if(res == arr[i])
			cout<<i<<endl;
	}
}
