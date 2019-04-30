#include<cstdio>
#include<vector>

using namespace std;

int main(){
	
	int t, n, x, y, value;
	vector<int> balloons;
	scanf("%d", &t);

	while(t--){

		balloons.clear();
		scanf("%d %d %d", &n, &x, &y);
	
		for(int i=0; i < n; i++){
			scanf("%d", &value);
			balloons.push_back(value);
		}
		
		if(balloons[0] == x && balloons[n-1] == y){
			printf("BOTH\n");
		}
		else if(balloons[0] == x && balloons[n-1] != y){
			printf("EASY\n");
		}
		else if(balloons[0] != x && balloons[n-1] == y){
			printf("HARD\n");
		}
		else{
			printf("OKAY\n");
		}

	}
	return 0;
}
