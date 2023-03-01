import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		String back = "x";
		Scanner key = new Scanner(System.in);
		int[] items = {8, 6, 4, 9, 10, 10, 2};
		while(back.equals("x")) {
		//pepsi is first element, sprite is second element, mountain dew is third element, fanta is fourth element, dr. pepper is fifth element, minute maid is sixth element, gatorade is seventh element.
		System.out.println("Welcome to this vending machine's main page.\nSelect 1 to enter item number, select 2 to enter into maintenance mode.");
		int num = key.nextInt();
		switch(num) {
		case 1: System.out.println("Push a number between 1 and 7. (1 for Pepsi, 2 for Sprite, 3 for Mountain Dew, 4 for Fanta, 5 for Dr. Pepper, 6 for Minute Maid, 7 for Gatorade)");
				int item = key.nextInt();
				switch(item) {
				case 1: if (items[0] == 0) {
					System.out.println("Pepsi is not available.");
				}
				else {
						System.out.println("Dispensing Pepsi.");
						items[0]--;
				}
					break;
				case 2: if (items[1] == 0) {
					System.out.println("Sprite is not available.");
				}
				else {
					System.out.println("Dispensing Sprite.");
					items[1]--;
				}
					break;
				case 3: if (items[2] == 0) {
					System.out.println("Mountain Dew is not available.");
				}
				else {
					System.out.println("Dispensing Mountain Dew.");
					items[2]--;
				}
					break;
				case 4: if (items[3] == 0) {
					System.out.println("Fanta is not available.");
				}
				else {
					System.out.println("Dispensing Fanta.");
					items[3]--;
				}
					break;
				case 5: if (items[4] == 0) {
					System.out.println("Dr. Pepper is not available.");
				}
				else {
					System.out.println("Dispensing Dr. Pepper.");
					items[4]--;
				}
					break;
				case 6: if (items[5] == 0) {
					System.out.println("Minute Maid is not available.");
				}
				else {
					System.out.println("Dispensing Minute Maid.");
					items[5]--;
				}
					break;
				case 7: if (items[6] == 0) {
					System.out.println("Gatorade is not available.");
				}
				else {
					System.out.println("Dispensing Gatorade.");
					items[6]--;
				}
					break;
				default: System.out.println("You did not select a number between 1 and 7.");
		}
				break;
		case 2: System.out.println("You are now in maintenance mode.\nTo check inventory select 8.\nTo add to inventory input the number associated with an item, such as 1 for Pepsi.");
				int supply = key.nextInt();
				String operation;
				switch(supply) {
				case 1: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[0] = items[0] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[0] = items[0] - inventory;
				}
					break;
				case 2: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[1] = items[1] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[1] = items[1] - inventory;
				}
					break;
				case 3: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[2] = items[2] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[2] = items[2] - inventory;
				}
					break;
				case 4: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[3] = items[3] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[3] = items[3] - inventory;
				}
					break;
				case 5: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[4] = items[4] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[4] = items[4] - inventory;
				}
					break;
				case 6: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[5] = items[5] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[5] = items[5] - inventory;
				}
					break;
				case 7: System.out.println("select + to increase inventory, select - to decrease inventory.");
				operation = key.nextLine();
				operation = key.nextLine();
				if (operation.equals("+")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[6] = items[6] + inventory;
				}
				else if(operation.equals("-")) {
					System.out.println("Enter amount.");
					int inventory = key.nextInt();
					items[6] = items[6] - inventory;
				}
					break;
				case 8: System.out.println("Inventory numbers will now be shown.");
						for (int i = 0; i < items.length; i++) {
							System.out.println(items[i]);
						}
		}
				break;
				}
		System.out.println("select x to go back");
		back = key.nextLine();
		back = key.nextLine();
		}
	}
}

