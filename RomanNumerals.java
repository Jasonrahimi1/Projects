import java.util.Scanner;
public class RomanNumerals {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.println("java RomanNumerals\n");
        System.out.print("Enter a number in the range of 1 - 10: \n");
        int number = input.nextInt();
        switch (number) {
            case 1: System.out.print("I");
            break;
            case 2: System.out.print("II");
            break;
            case 3: System.out.print("III");
            break;
            case 4: System.out.print("IV");
            break;
            case 5: System.out.print("V");
            break;
            case 6: System.out.print("VI");
            break;
            case 7: System.out.print("VII");
            break;
            case 8: System.out.print("VIII");
            break;
            case 9: System.out.print("IX");
            break;
            case 10: System.out.print("X");
            break;
            default: System.out.print("Enter a number in the range of 1 - 10");
            break;

        }
    }
}