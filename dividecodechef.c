#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	for (int i=0;i<t;i++) {
	    int a,b,c;
	    scanf("%d %d %d", &a,&b,&c);
	    if (floor(a+b)/2 > c){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
}

