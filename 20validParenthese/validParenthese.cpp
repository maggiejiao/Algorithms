#include <iostream>
#include <vector>
using namespace std;

bool isValid(string s) {
    vector<char> res;
    for(auto i:s){
        if(i=='{' || i=='(' || i=='['){
            if(!res.empty() && !(res.back() =='(' || res.back()=='[' || res.back()=='{')) return false;
            else res.push_back(i);
        }
        else if(i=='}'){
            if(res.empty() || res.back()!='{') return false;
            else res.pop_back();
        }
        else if(i==')'){
            if(res.empty() || res.back()!='(') return false;
            else res.pop_back();
        }
        else if(i==']'){
            if(res.empty() || res.back()!='[') return false;
            else res.pop_back();
        }
    }
    if(res.empty()) return true;
    return false;
}

int main(){
	string s = "([)]";
	cout<<isValid(s)<<endl;
}
