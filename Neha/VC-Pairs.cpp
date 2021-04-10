#include <iostream>

using namespace std;

int main(){

       int t;

       cin>>t;

       while(t--){

             string s;

             int count=0,n;

             cin>>n>>s;

             for(int i=0;i<s.length()-1;i++){

                     if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){

                             if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'){

                                       count=count+1;

                                       i=i+1;

                              }

                     }

             }

             cout<<count<<endl;

      }

}
