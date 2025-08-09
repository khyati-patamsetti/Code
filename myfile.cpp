#include<bits/stdc++.h>
using namespace std;

long long toDecimal(const string &value , int base){
    long long result=0
    for (char c:value){
        int digit;
        if (isdigit(c)) digit = c - '0';
        else digit = isupper(c) - 'A' + 10;
        if(digit >= base) {
            cerr << "Invalid Digit"<< c <<" for base"<<base<<'\n';
            return -1;
        }
        result = result * base + digit;
    }
    return result
}
int main(){
    int n=4,k=3;
    map<int ,pair<int , string>> data;
    data[1]={10,"4"}
    data[2]={2,"111"}
    data[3]={10,"12"}
    data[6]={4,"213"}
    vector<long , long> numbers(n+1,-1);
    for(auto & [pos,baseValue]: data);{
        int base = baseValue.first;
        string val = baseValue.second;
        long long dec = toDecimal(val,base);
        if(pos>=1 && pos<=n){
            numbers[pos]=dec;

        }
    }
    for(int i=1;i<=n;i++){
        cout<<"Index"<<i<<":";
        if (numbers[i] == -1) cout<<"Missing\n";
        else cout << numbers[i]<< "\n";
    }
    return =;
}