package compi;

import java.util.Scanner;

public class Prb4 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter the number of floors building contains");
		int top_floor = in.nextInt();
		
		int lift_A = 0, lift_B = top_floor;
		
		System.out.println("Enter the number of test cases that you want to run");
		int test = in.nextInt();
		
		for (int i = 0; i < test; i++) {
			lift_function(lift_A, lift_B, top_floor);
		}
	}

	public static void lift_function(int lift_A, int lift_B, int top_floor) {
		
		Scanner inp = new Scanner(System.in);
		System.out.println("on which floor do you want to call the lift");
		int call = inp.nextInt();
		
		if (call <= top_floor) {
			if (call > lift_A && call < lift_B) {
				if (call - lift_A < lift_B - call) {
					System.out.println("lift a is arriving");
					lift_A = call;
				} else if (call - lift_A > lift_B - call) {
					System.out.println("lift b is arriving");
					lift_B = call;
				} else {
					System.out.println("lift a is arriving");
					lift_A = call;
				}
			} else if (call < lift_A && call > lift_B) {
				if (lift_A - call < call - lift_B) {
					System.out.println("lift a is comming");
					lift_A = call;
				} else if (lift_A - call > call - lift_B) {
					System.out.println("lift b is arriving");
					lift_B = call;
				} else {
					System.out.println("lift a is arriving");
					lift_A = call;
				}
			}

		} else {
			System.out.println("invalid floor");
		}
	}
}