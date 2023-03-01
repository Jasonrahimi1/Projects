import java.util.Scanner;
public class WifiDiagnosis {

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		String connect;
		String reboot;
		String cables;
		String location;
		String no = "no";
System.out.println("If you have a problem with internet connectivity, this WiFi Diagnosis might work.\n");
System.out.println("First step: reboot your computer");
System.out.println("Are you able to connect with the internet? (yes or no)");
connect = keyboard.nextLine();
if (connect.equals(no)) {
	System.out.println("Second step: reboots your router");
	System.out.println("Now are you able to connect with the internet? (yes or no)");
	reboot = keyboard.nextLine();
	if (reboot.equals(no)) {
		System.out.println("Third step: make sure the cables to your router are plugged in firmly and your router is getting power");
		System.out.println("Now are you able to connect with the internet? (yes or no)");
		cables = keyboard.nextLine();
		if (cables.equals(no)) {
			System.out.println("Fourth step: move your computer closer to your router");
			System.out.println("Now are you able to connect with the internet? (yes or no)");
			location = keyboard.nextLine();
			if (location.equals(no)) {
				System.out.println("Fifth step: Contact your ISP");
				System.out.println("Make sure your ISP is hooked up to your router.");
			}
			else {
				System.out.println("Moving your computer closer to your router seemed to work.");
			}
		}
		else {
			System.out.println("Checking the router's cables seemed to work.");
		}
	}
	else {
		System.out.println("Rebooting your computer seemed to work.");
	}
}
else {
	System.out.println("You do not have a problem with internet connectivity.");
}
System.exit(0);
	}

}