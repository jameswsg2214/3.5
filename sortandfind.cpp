#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class sample{
    public:
    int i,n,max;
    int a[1000];
    int get()
    {
        cin>>n;
      for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    int calc()
    {
 sort(a, a+n);     
 
        cout << a[n/2];
 
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
