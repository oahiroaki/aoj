import java.util.*;

class Main {
    private int[] numbers;

    Main() {
        this.numbers = new int[4];
    }
    private void showNumbers() {
        System.out.printf("%d %d %d %d\n",
                this.numbers[0], this.numbers[1],
                this.numbers[2], this.numbers[3]);
    }
    private void readInput() {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            this.numbers[i] = sc.nextInt();
        }
    }
    private boolean isFinish() {
        for (int i = 0; i < 4; i++) {
            if (this.numbers[i] != 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Main main = new Main();
        while (true) {
            main.readInput();
            if (main.isFinish()) break;
        }
    }
}
