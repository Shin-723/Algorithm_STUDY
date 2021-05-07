#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int>d ;
    int x ;
    cin >> x ;

    for(int j=1;j<30001;j++)
    {
        d.push_back(0);
    }

    for(int i = 2 ; i < x+1 ; i++)
    {
        d[i] = d[i-1]+1 ;
        
        if(i%2==0)
        {
        d[i] = min(d[i],d[i/2]+1) ;
        }
        if(i%3==0)
        {
        d[i] = min(d[i],d[i/3]+1) ;
        }
        if(i%5==0)
        {
        d[i] = min(d[i],d[i/5]+1) ;
        }

    
    }
    cout << d[x] ;
}