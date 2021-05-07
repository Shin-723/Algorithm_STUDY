#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct Grade
{
    string name ;
    int score ;
};

int main()
{
    int x;
    cin >> x;
    for(int i=0; i<x;i++)
    {
        Grade i ;
        cin >> i.name ;
        cin >> i.score ;
        sort(.score,i.score(),greater())
    }
    
}