#include<cstdio>

using namespace std;

int main(){

	int t, n, k, candy, kids;

	scanf("%d", &t);

	while(t--){
		kids = 0;
		scanf("%d %d", &n, &k);
		
		while(n--){
			scanf("%d", &candy);	

			kids += candy/k;
		}
		printf("%d\n", kids);
	}

	return 0;
}
