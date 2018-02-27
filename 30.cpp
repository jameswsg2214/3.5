#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class Sample{
    public: int i,n,h,h1,m1,h2,m2;
   public: int get()
    {
        cin>>h1>>m1;
        cin>>h2>>m2;
        return 0;
    }
    public:
    int calc()
    {
        h=(h1*60)+m1;
        n=(h2*60)+m2;
        i=abs(h-n);
        if(i<=60)
{
    cout<<"0 hours"<<i<<"min";
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
s.get();
s.calc();
return 0;
}
