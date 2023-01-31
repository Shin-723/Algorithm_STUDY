#include<iostream>
#include<algorithm>
#define MAX 51

using namespace std;

char map[MAX][MAX];
int maxCandy=0;
int n=0;

void check();
void rowChange();
void colChange();

int main(){
    cin >> n;
    for(int i=0; i<n;i++){
        string candies;
        cin >> candies;
        for(int j=0;j<n;j++){
            char candy = candies[j];
            map[i][j] = candy;
        }
    }
    rowChange();
    colChange();
    cout << maxCandy;
}

void check(){
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<n;j++){
            if(map[i][j]==map[i][j+1]) cnt ++;
            else{
                maxCandy= maxCandy<=cnt?cnt:maxCandy;
                cnt=1;
            } 
        }
    }
    for(int j=0;j<n;j++){
        int cnt=1;
        for(int i=0;i<n;i++){
            if(map[i][j]==map[i+1][j]) cnt ++;
            else{
                maxCandy= maxCandy<=cnt?cnt:maxCandy;
                cnt=1;
            } 
        }
    }
}
void rowChange(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            check();
            swap(map[i][j],map[i+1][j]);
            check();
            swap(map[i][j],map[i+1][j]);
        }
    }
}
void colChange(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            check();
            swap(map[i][j],map[i][j+1]);
            check();
            swap(map[i][j],map[i][j+1]);
        }
    }
}

