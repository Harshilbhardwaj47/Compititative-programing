// passed example use case

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int count = 0;	
	while(t--){
		int k, m, n;
		cin>>k>>m>>n;
		
		int count = 0;
		while(k!=m){
			if(k<m && (k*n)<m){
				k *= n;
				count++;
				//cout<<"if > | "<<count<<endl;
			}else{
				int res = abs(k-m);
				int r1 = res/2;
				count += r1;
				//cout<<"else < | "<<count<<endl;
				if(k<m)
				    k = k+(2*r1);
				else
				    k = k-(2*r1);
				if(res%2 != 0){
					if(k<m)
				        k += 1;
				    else
				        k -= 1;
					count++;
					//cout<<"in else | "<<count<<endl;
				}
			}
		}cout<<count<<endl;
	}	
}
