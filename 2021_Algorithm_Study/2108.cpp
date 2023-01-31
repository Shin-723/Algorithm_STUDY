#include<iostream>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>

#define MAX 500001

using namespace std;

int arr[MAX];
int n =0;
int arithmeticMean();
int middle();
int mostFrequency();
int range();

int main(){
    
    cin >> n;
    for(int i=0;i<n;i++){
        int k=0;
        cin >>k;
        arr[i]=k;
    }
    cout<<arithmeticMean()<< endl<<middle()<<endl<< mostFrequency()<< endl<< range();
}
int arithmeticMean(){
    double sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    sum/=n;
    sum = floor(sum+0.5);
    return sum;
}
int middle(){
    sort(arr,arr+n);
    return arr[n/2];
}
int mostFrequency(){
    map<int,int> fre;
    int max=0;
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) cnt++;
        }
        fre[arr[i]]=cnt;
        max = max<cnt?cnt:max; 
   }
   vector<int> tmp;
   for (auto it = fre.begin(); it != fre.end(); ++it)
    if (it->second == max){
        tmp.push_back(it->first);
    }
    sort(tmp.begin(),tmp.end());
    return n==1?arr[0]:tmp[1];

}
int range(){
    return arr[n-1]-arr[0];
}