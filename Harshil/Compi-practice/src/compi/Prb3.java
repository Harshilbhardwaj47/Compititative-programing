package compi;

import java.util.Scanner;

public class Prb3 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int test = in.nextInt();
		while (test != 0) {
			int k, m, n;
			k = in.nextInt();
			m = in.nextInt();
			n = in.nextInt();

			System.out.println(steps(k, m, n));
			test--;
		}
	}

	static int steps(int k, int m, int n) {
		if (k >= m) {
			return (k - m) / 2 + (k - m) % 2;
		}

		if (m % n == 0) {
			return 1 + steps(k, m / n, n);
		} else {
			int x;
			x = (m / n + 1) * n;
			return (x - m) / 2 + (x - m) % 2 + steps(k, x, n);
		}
	}
}
