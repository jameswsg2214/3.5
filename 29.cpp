#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class sample{
    public:
    int i,cout=0;
    int get()
{
            cin>>i;
    }
    int calc()
    {
if(i<=60)
{
    cout<<i;
}
else
{
    cout<<(i/60)<<(i%60);
}
return 0;    
    }
};
int main()
{
sample s;
s.get();
s.calc();
return 0;
}
