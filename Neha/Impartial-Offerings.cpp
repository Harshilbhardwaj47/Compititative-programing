/*
Competitive Submissions
Attempt 1
S
check
check
00:35:36
remove_red_eye
Test 1
Completed
00:33:36
remove_red_eye
Last updated: Apr 17 2021, 20:25

Problem
Aroha is a big animal lover, so she spends some free time taking care of many of her loved ones' pets. She likes to offer them treats, but wants to do that in an impartial way.

Aroha decided that it was logical for pets of the same size to get the same amount of treats and for larger pets to get strictly more treats than smaller ones. For example, if she has 4 pets with her of sizes 10,20,10, and 25, she could offer 2 treats to each pet of size 10, 3 treats to the pet of size 20, and 5 treats to the pet of size 25. This requires her to buy a total of 2+3+2+5=12 treats. However, she can offer treats to all 4 pets and comply with her own rules with a total of just 7 treats by offering 1 each to the pets of size 10, 2 to the pet of size 20, and 3 to the pet of size 25.

Help Aroha plan her next pet day. Given the sizes of all pets that will accompany her, compute the minimum number of treats she needs to buy to be able to offer at least one treat to all pets while complying with her impartiality rules.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line of a test case contains a single integer N, the number of pets in Aroha's next pet day. The second line of a test case contains N integers S1,S2,…,SN, representing the sizes of each pet.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of treats she needs to buy to be able to offer at least one treat to all pets while complying with her impartiality rules.

Limits
Time limit: 10 seconds.
Memory limit: 1 GB.
1≤T≤100.
1≤Si≤100, for all i.
Test Set 1 (Visible Verdict)
2≤N≤5.
Test Set 2 (Visible Verdict)
2≤N≤100.
Sample
Sample Input
save_alt
content_copy
3
4
10 20 10 25
5
7 7 7 7 7
2
100 1
Sample Output
save_alt
content_copy
Case #1: 7
Case #2: 5
Case #3: 3
Sample Case #1 is the case explained above.

In Sample Case #2, all pets are of the same size, so Aroha must offer them all the same amount of treats. The minimum total is attained by offering each pet a single treat.

In Sample Case #3, both pets are of different size so they need a different amount of treats each. Buying less than 2 treats is not enough to give treats to both pets. Buying 2 treats and making sure both pets get something would force Aroha to give both pets the same amount, despite them having different size. Using 3 treats Aroha can give 1 to the small pet and 2 to the big pet and thus comply with all her rules.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,r=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n],freq[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        sort(arr, arr + n);
        
        /*for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;*/
        freq[0]=1;
        int count=1;
        for(int i=1; i<n; i++){
            
            if(arr[i] == arr[i-1]){
                freq[i]=count;
            }else{
                count++;
                freq[i]=count;
            }
            
        }
        
        int sum=0;
        for(int i=0; i<n; i++){
            //cout<<freq[i]<<" ";
            sum+=freq[i];
        }//cout<<endl;
    
        cout<<"Case #"<<r<<": "<<sum<<endl;
        r++;
    }
    return 0;
}
