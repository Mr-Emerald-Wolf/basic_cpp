#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    
    return 0;
}