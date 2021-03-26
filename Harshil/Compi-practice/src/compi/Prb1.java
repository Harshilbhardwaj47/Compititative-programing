package compi;

import java.util.Scanner;

public class Prb1 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int times = in.nextInt();
		for (int i = 0; i < times; i++) {
			func(in);
		}
	}

	static void func(Scanner in) {
		int sum = 0;
		String n = in.next();
		if (n.contains("a") && n.contains("e") && n.contains("i") && n.contains("o") && n.contains("u")) {
			System.out.println("lovely string");
		} else {
			System.out.println("ugly string");
		}

	}
}