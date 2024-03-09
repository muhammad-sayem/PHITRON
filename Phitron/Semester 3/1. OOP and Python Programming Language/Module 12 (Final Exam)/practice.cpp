#include<iostream>
using namespace std;

bool solve_1 (string s){
if(s[0] == '0' && s[1] == '.'){ 
    return true;
}
else{
    return false;
}

bool solve_2(string s){
    bool f = true;
    for(int i = 2; i<s.size(); i++){
        if(s[i]>='1' && s[i]<= '9')
            continue;
        else f = false;
    }
    if(f) return true;
    else return false;
}


}
bool solve_3(string s){
    int cnt = 0;
     bool f = true;
for(int i =0 ; i< s.size(); i++){
    if(s[i]>='1' && s[i]<= '9')
        continue;
    else if(s[i] == '.') cnt++;
    else return false;

}
if(cnt!=1) return false;
else return true;

}

int main(){
string s; 
cin >> s;

bool flag1 = true;
bool flag2 = true;

if(s[0] == '0'){
    if(solve_1(s)){
        if(solve_2(s)){
            flag1 = true;
        }
    }
}
else {
    
}


if(l&&r) cout<<"Valid float"<<endl;
else cout<<"Invalid float"<<endl;


return 0;
}
