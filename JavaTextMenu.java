import java.util.Random;
import java.util.Scanner;

class JavaTextMenu {
    static {
    System.loadLibrary("MyCPPLibrary");
    }

    public static void main(String args[]) {
        int userInt;
        double mean;
        double stdDev;
        int arr[];

        Random elements = new Random();
        Scanner input = new Scanner(System.in);
        JavaTextMenu menu = new JavaTextMenu();

        System.out.println("Enter the number of samples to generate:");
        userInt = input.nextInt();

        arr = new int[userInt];
        for (int i = 0; i < userInt; i++) {
            arr[i] = elements.nextInt(100);
        }

// Could not solve:
// Exception in thread "main" java.lang.UnsatisfiedLinkError: 'double JavaTextMenu.calculateMean(int[])'
// at JavaTextMenu.calculateMean(Native Method)
// at JavaTextMenu.main(JavaTextMenu.java:33 and probably java:34)

        mean = menu.calculateMean(arr);
        stdDev = menu.calculateSTDDev(arr);
        System.out.println("Mean is " + mean + "\nThe Standard Deviation is: " + stdDev);

    }
    public native double calculateSTDDev( int[] numbers );
    public native double calculateMean( int[] numbers );
}