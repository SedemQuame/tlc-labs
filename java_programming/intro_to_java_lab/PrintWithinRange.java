import java.util.Random;


class PrintWithinRange{

	public static void main (String args[]){
			
		numberPrinter(23);

	}

   	static void numberPrinter(int n){
		//Generating a random number.
		final int UPPER_BOUND = n;
		for(int i = 0; i < 6; i++){

			Random rand = new Random();
			System.out.println(rand.nextInt(UPPER_BOUND));
		}
	}

}
