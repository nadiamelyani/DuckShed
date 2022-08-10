#include <stdio.h>
#include <stdbool.h>

int needs(int ducks, int max) {
	int sheds = 0;
	bool completed = false;
	while (!completed) {
		sheds++;
		if (ducks <= max) {
			completed = true;
		}
		ducks = ducks - max;
	}
	return sheds;
}

int main() {
	int n_ducks, sheds;
	scanf("%d", &n_ducks);
	if(n_ducks <= 0) {
		printf("invalid");
	} else {
		sheds = needs(n_ducks, 30);
		printf("%d", sheds);	
	}
}
