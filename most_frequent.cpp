/*

LINK: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/golf/distinct-count-2/

Problem
This is one of the most easiest problem you will ever code.

Mr. Bournville loves programming and he likes to face new programming challenges. After completing many challenges he has now given you one challenge which is one of his favourites. He has given you a list of N random integers and he wants you to find the integer which has the maximum frequency in the given list.

Being a programmer himself, he had made this task a challenge for you and he will calculate your score for this task using a formula.

Formula for calculating the score : (max_score) - (number of characters in your code/15.0)

Mr. Bournville already has a solution for this but he is not satisfied with his solution. He wants you to write a shortest possible code for this task. In case Frequency of two numbers is same print the smaller one

Input:
First line of input contains N, number of integers.
Second line will contains N spaces separated integers.

Output:
Print the most frequent integer.

Contraints:
3<=N<=104
-106<=Integer<=106

NOTE : Score will awarded after passing all the test files.

Sample Input
5
1 1 1 2 2
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Clearly, count of 1 more than count of 2.
*/

/*#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n);

	int count_rn=1;
	int count=1;
	int res_rn=arr[0];
	int res;
	for(int i=0; i<n-1; i++){
		if(arr[i]==arr[i+1]){
			count_rn++;
		}else if(count<count_rn){
			count = count_rn;
			res = res_rn;
		}else{
			count_rn=1;
			int res_rn= arr[i+1];
		}
	}
	cout<<res;

}*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int len; cin >> len;
    unordered_map<int,int> map;
    int arr[len];
    for(int i=0; i<len; i++) { 
        cin >> arr[i];
        map[arr[i]] += 1;
    }
    int max_f = 0, max_i;
    for(int i=0; i<len; i++) {
        if(map[arr[i]] > max_f) {
            max_f = map[arr[i]]; max_i = i;
        }
        if(map[arr[i]] == max_f && arr[i] < arr[max_i]) max_i = i;
    }
    cout << arr[max_i] << endl;
}
