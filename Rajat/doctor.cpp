#include <iostream>

using namespace std;

int main()
{    int length,number;
     cin>> length;
     cin>> number;
     if(length<=23 && 500<number<1000)
        {
            cout<<"Take medicine";
        }
      else{
           cout<<"don't take medicine";
      }    

    return 0;
}
