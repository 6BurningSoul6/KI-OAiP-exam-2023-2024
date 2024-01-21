#include <stdio.h>
#include <stdbool.h>

#define MAX_ITER 100

int length;

int pow_k(int k, int n) {
	int res = 1;
	for (int i = 0; i < n; i++) {res *= k;}
	return res;
}
void new_length(int k) {
	for (length = 1; (k/=10) != 0; length++);
}
int reverse_int(int k) {
	int new_k = 0, weigth = pow_k(10, length-1);
	for (int i = 0; i < length; i++) {
		new_k += k%10 * weigth;
		k /= 10;
		weigth /= 10;
	}
	return new_k;
}

int n_symb(int k, int n) {
	k %= pow_k(10, (length - n));
	k /= pow_k(10, (length - n - 1));
	return k;
}

bool is_polindrom(int k) {
	for (int i = 0; i <= (length+1)/2 - 1; i++) {
		if (n_symb(k, i) != n_symb(k, length-i-1)) {
			return false;
		}
	}
	return true;
}

int main() {
	int k;
	scanf("%d", &k);

	for (int i = 0; i < MAX_ITER; i++) {
		new_length(k);
		bool polindrom = is_polindrom(k);
		printf("Step %d: %d is%s polindrom\n", i, k, polindrom ? "" : " not");
		if (polindrom) {
			return 0;
		}
		int reverse_k = reverse_int(k);
		printf("%d + %d = %d\n", k, reverse_k, k+reverse_k);
		k += reverse_k;
	}

	return 0;
}
