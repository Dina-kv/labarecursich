#include <stdio.h>

int prostoe(int a) {
    if (a < 2) return 0;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}

int prostofactorial(int a) {
        if (a <= 1) {
                return 1;
	}
	if (prostoe(a)) {
		return a * prostofactorial(a-1);
	} 
	else {
		return prostofactorial(a-1);
	}
}

int main() {
        int a;
	char c;
	if (scanf("%i%c", &a, &c) != 2 || c != '\n' || a <= 0) {
        printf("ошибка\n");
        return 1;
    }

    for (int r = 1; r <= a; r++) {
        printf("%i! = %i\n", r, prostofactorial(r));
    }

    return 0;
}
