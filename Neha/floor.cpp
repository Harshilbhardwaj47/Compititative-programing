#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;
	int a=0, b=7;
	while(t--){
		int floor;
		cin>>floor;
		int da = abs(floor-a);
		int db = abs(floor-b);
		if(db<da){
			cout<<"B"<<endl;
			b = floor;
		}else{
			cout<<"A"<<endl;
			a = floor;
		}
	}

}
