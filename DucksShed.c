#include <stdio.h>
#include <stdbool.h>

int needs(int ducks, int max) {
	int shed, j;
	shed = 0;
	bool completed = false;
	while (!completed) {
		shed++;
		if (ducks < max) {
			completed = true;
		}
		ducks = max - ducks;
	}
	return shed;
}

int main() {
	int n_ducks, shed;
	scanf("%d", &n_ducks);
	shed = needs(n_ducks, 30);
	printf("%d", shed);
}
