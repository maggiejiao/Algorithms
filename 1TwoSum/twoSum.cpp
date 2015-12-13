#include <iostream>
#include <vector>
#include <map>
using namespace std;

int twoSum(vector<int>& numbers, int target){
    map<int,int> m;
    int result = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if(m.find(target-numbers[i]) != m.end() && i != m[target-numbers[i]]){
            result++;
        }
    	m[numbers[i]]=i;
    }
    return result;    
}

int main(){
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(5);
	numbers.push_back(6);
	cout<<twoSum(numbers, 7);
}
