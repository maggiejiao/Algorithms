#include <iostream>
using namespace std;

int maxminpath(int** grid, int n, int m){
	if(m == 0 || n == 0) return 0;
	int** dp = new int* [n];
	for(int i = 0; i < n; i++){
		dp[i] = new int[m];
	}
	dp[0][0] = grid[0][0];
	for(int i = 1; i < n; i++){
		dp[i][0] = min(dp[i-1][0], grid[i][0]);
	}
	for(int i = 1; i < m; i++){
		dp[0][i] = min(dp[0][i-1], grid[0][i]);
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			dp[i][j] = min(max(dp[i-1][j], dp[i][j-1]), grid[i][j]);
		}
	}
	return dp[n-1][m-1];
}

int main(){
	int** ary = new int* [2];
	for(int i = 0; i < 2; i++){
		ary[i] = new int[3];
	}
	ary[0][0] = 8;
	ary[0][1] = 4;
	ary[0][2] = 7;
	ary[1][0] = 6;
	ary[1][1] = 5;
	ary[1][2] = 9;
	cout << maxminpath(ary, 2, 3) << endl;
}
