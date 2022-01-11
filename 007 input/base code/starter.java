import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		
		
		System.out.print("What is your first name? ");
		String text = sc.nextLine();
		
		System.out.print("Age:");
		int Age = sc.nextInt();
		System.out.print("Birth Month:");
		int BirthMonth = sc.nextInt();
		System.out.print("Birth Day:");
		int BirthDay = sc.nextInt();
		System.out.print("Birth Year:");
		int BirthYear = sc.nextInt();
		System.out.print("How much is a buck fifty?");
		double number = sc.nextDouble();
		
		System.out.println("Your name is " + text);
		System.out.println("Your age is: " + Age);
		System.out.println("Your Birth month is: " + BirthMonth);
		System.out.println("Your Birth day is: " + BirthDay);
		System.out.println("Your Birth year is: " + BirthYear);
		System.out.println("A buck fifty is: " + number);
		


	}
}
