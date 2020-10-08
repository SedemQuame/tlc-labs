import java.util.Random;

class Question3{

	public static void main (String args[]){

	int UPPER_BOUND = 3;
	int number;
	do{
		//create variable to randomise number negation.

		double negativityDeterminer = Math.random();

		Random rand = new Random();

		number = rand.nextInt(UPPER_BOUND) ;

		if(negativityDeterminer >= 0.5)
			number = -number;

		System.out.println("number: " + number);
	}while(number != 0);
	

	}

}
