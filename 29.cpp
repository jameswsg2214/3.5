#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class Sample{
    public: int i;
    int calc()
    {
        cin>>i;
        
if(i<=60)
{
    cout<<i;
}
else
{
    int hr=i/60;
    int min=i%60;
    cout<<hr<<"hours" <<min<<"min";
}
return 0;    
}
};
int main()
{
Sample s;
s.calc();
return 0;
}
