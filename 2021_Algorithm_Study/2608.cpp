#include<iostream>
#include<vector>
#include<map>
#include<regex>

using namespace std;

vector<int> v1;
vector<int> v2;

map<string,int>numPair;
map<int,string>match;
int convert_to_int();
string convert_to_string(int num);

int main(){
    string num1,num2;
    numPair.insert({"I",1}); numPair.insert({"V",5}); numPair.insert({"X",10});
    numPair.insert({"L",50}); numPair.insert({"C",100}); numPair.insert({"D",500});
    numPair.insert({"M",1000});
    match.insert({1,"I"}); match.insert({5,"V"}); match.insert({10,"X"});
    match.insert({50,"L"}); match.insert({100,"C"}); match.insert({500,"D"});
    match.insert({1000,"M"});
    cin >> num1 >> num2;
    // cout << num1.length();
    for(int i=0;i<num1.length();i++){
        string tmp = num1.substr(i,1);
        // cout << tmp;
        v1.push_back(numPair[tmp]);
    }
    for(int i=0;i<num2.length();i++){
        string tmp = num2.substr(i,1);
        v2.push_back(numPair[tmp]);
    }
    // for(int i=0;i<num1.length();i++) cout<< v1[i];

    int resultNum= convert_to_int();
    cout <<resultNum<<endl<< convert_to_string(resultNum);
}
int convert_to_int(){
    int sum1=0;
    for(int i=0;i<v1.size()-1;i++){
        if(v1[i]>=v1[i+1]) sum1+=v1[i];
        else sum1-=v1[i];
    }
    sum1+=v1[v1.size()-1];
    int sum2=0;
    for(int i=0;i<v2.size()-1;i++){
        // cout << sum2 << " ";
        // cout<<v2[i];
        if(v2[i]>=v2[i+1])sum2+=v2[i];
        else sum2-=v2[i];
    }
    sum2+=v2[v2.size()-1];
    return sum1+sum2;
}
string convert_to_string(int num){
    string len = to_string(num);
    string ans = "";
    switch (len.size()){
        case 4 :{
            int thd = num/1000;
            while(thd--) ans+="M";
        }
        case 3 : {
            num%=1000;
            int hrd = num/100;
            if(hrd==9) ans+="CM";
            else if(hrd==4) ans+="CD";
            else if(hrd==5) ans+="D";
            else if(hrd==1) ans+="C";
            else if(hrd<4) while(hrd--)ans+="C";
            else if(hrd>5){
                ans+="D";
                hrd-=5;
                while(hrd--) ans+="C";
            }
        }
        case 2: {
            num%=100;
            int ten = num/10;
            if(ten==9) ans+="XC";
            else if(ten==4) ans+="XL";
            else if(ten==5) ans+="L";
            else if(ten==1) ans+="X";
            else if(ten<4) while(ten--)ans+="X";
            else if(ten>5){
                ans+="L";
                ten-=5;
                while(ten--) ans+="X";
            
            }
        }
        case 1:{
            num%=10;
            if(num==9) ans+="IX";
            else if(num==4) ans+="IV";
            else if(num==5) ans+="V";
            else if(num==1) ans+="I";
            else if(num<4) while(num--)ans+="I";
            else if(num>5){
                ans+="V";
                num-=5;
                while(num--) ans+="X";

            }
            break;
        }
        default: break;
    }
    return ans;
}