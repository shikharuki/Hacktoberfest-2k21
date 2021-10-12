import java.util.Scanner;

public class bubbleSort {

    public static void main(String[] args) {
        int num, i, j, temp;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of ROd:");
        num = input.nextInt();
        int array[] = new int[num];
        System.out.println("Enter " + num + " ROd heights in centrimeters(cm): ");
 for (i = 0; i < num; i++) {
            array[i] = input.nextInt();
        }
        for (i = 0; i < (num - 1); i++) {
            for (j = 0; j < num - 1 - i; j++) {
                if (array[j + 1] < array[j]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        System.out.println("Sorted order of ROd heights:");
        for (i = 0; i < num; i++) {
            System.out.println(array[i]);
        }
    }
}
