import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Random rand=new Random();
	int yanfei = rand.nextInt(1000);
	Scanner sc = new Scanner(System.in);
	System.out.println("guess a number between 1 and 1000");
	int a = sc.nextInt();
	if(a==yanfei)
	{
		System.out.println("You win");
	}
	else if(a!=yanfei)
	{
		System.out.println("You lose");
	}
			}
		}
	

