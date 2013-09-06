import java.util.*;

class Solver {
	private int[] prices;
	private List<Integer> primeList;

	public Solver(int[] prices) {
		this.prices = prices;
		this.primeList = new ArrayList<Integer>();
	}

	private boolean checkPrime(int num) {
		for (Integer prime : this.primeList)
			if (num % prime == 0)
				return false;
		return true;
	}

	public void calcPrimeList() {
		boolean[] buf = new boolean[1000000];
		for (int i = 0; i < 1000000; i++) {
			buf[i] = true;
		}

		buf[0] = false;
		for (int i = 1; i < 10000000; i++) {
			if (buf[i])
				for (int j = 2 * i; j < 1000000; j += (i+1))
					buf[j - 1] = false;
		}

		for (int i = 0; i < 1000000; i++) {
			if (buf[i])
				System.out.println(i + 1);
		}
	}

	public void start() {
		calcPrimeList();
		for (Integer i : this.primeList) {
			System.out.println(i);
		}
	}
}

class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Solver solver = new Solver(new int[] {2,3,4});
		solver.start();
/*
		while (true) {
			int num = sc.nextInt();
			int sum = sc.nextInt();
			this.prices = new int[num];
			for (int i = 0; i < num; i++) {
				prices[i] = sc.nextInt();
			}
		}
		*/
	}
}
