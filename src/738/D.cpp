#include <cstdio>
#include <vector>

#define MAXN 200000

using namespace std;

bool grid[MAXN];

int main() {

	int n, a, b, k;
	scanf("%d %d %d %d\n", &n, &a, &b, &k);

	for(int i = 0 ; i < n ; i++) {
		char ch;
		scanf("%c",&ch);
		grid[i] = ch == '1';
	}

	int cnt = 0;
	vector<int> possi;
	for(int i = 0 ; i < n ; i++) {
	    if(grid[i]) 
	    	cnt = 0;
    	else if(cnt == b - 1) { 
    		possi.push_back(i + 1); 
    		cnt = 0; 
    	} else 
    		cnt++;
	}

  int total = possi.size() - a + 1;
  printf("%d\n", total);
  printf("%d", possi[0]);
  for(int i = 1; i < total; i++) {
    printf(" %d", possi[i]);
  }
  printf("\n");
  return 0;

}