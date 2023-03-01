import java.util.Scanner;
public class MovieDriver {

	public static void main(String[] args) {
		
		Scanner keyboard = new Scanner(System.in);
		Movie driver = new Movie();
		System.out.println("Enter the name of a movie");
		String name = keyboard.nextLine();
		driver.setTitle(name);
		System.out.println("Enter the rating of the movie");
		String rating = keyboard.nextLine();
		driver.setRating(rating);
		System.out.println("Enter the number of tickets sold for this movie");
		int tickets = keyboard.nextInt();
		driver.setSoldTickets(tickets);
		System.out.println(driver.toString());
		System.out.println("Do you want to enter another? (y or n)");
		String another = keyboard.nextLine();
		another = keyboard.nextLine();
		if (another.equals("n")) {
			System.out.println("Goodbye");
		}
		while (!another.equals("n")) {
			System.out.println("Enter the name of a movie");
			name = keyboard.nextLine();
			driver.setTitle(name);
			System.out.println("Enter the rating of the movie");
			rating = keyboard.nextLine();
			driver.setRating(rating);
			System.out.println("Enter the number of tickets sold for this movie");
			tickets = keyboard.nextInt();
			driver.setSoldTickets(tickets);
			System.out.println(driver.toString());
			System.out.println("Do you want to enter another? (y or n)");
			another = keyboard.nextLine();
			another = keyboard.nextLine();
			if (another.equals("n")) {
				System.out.println("Goodbye");
			}
		}

}
}
