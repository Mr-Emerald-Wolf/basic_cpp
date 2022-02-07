#include<iostream>
using namespace std;
//if break is not included all cases are executed below the current case
// for example cases  below case 2 will all be executed unless break is not found
int main()
{
    int n;
    cout<<"Enter a number form 1-4"<<endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout<<"Number 1"<<endl;
        break;
    
    case 2:
        cout<<"Number 2"<<endl;
        break;
    
    case 3:
        cout<<"Number 3"<<endl;
        break;
    
    case 4:
        cout<<"Number 4"<<endl;
        break;
    
    
    default:
        break;
    }
    return 0;
}