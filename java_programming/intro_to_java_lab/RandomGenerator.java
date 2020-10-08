class RandomGenerator{
	
	public static void main(String args[]){
	
		double rand = (int)(Math.random());
		//Generates a # between 0 and 1.

		System.out.println("Generated number is: " + rand);

		//Generation of number between 0 and 100.
		double numberBetween0And100 = (int)(Math.random()*100);

		System.out.println("Number between 0 and 100: " + numberBetween0And100);
		
		//check if number is odd or even.
		boolean numberIsEven = false;

		if(numberBetween0And100 % 2 == 0){
			numberIsEven = true;
		}

		//print output based on number generated
		if(numberBetween0And100 == 0)
			System.out.println("frozen");
		else if(numberBetween0And100 >= 1 && numberBetween0And100 <= 14)
			System.out.println("cold");
		else if(numberBetween0And100 >= 15 && numberBetween0And100 <= 24)
			System.out.println("cool");
		else if(numberBetween0And100 >= 24 && numberBetween0And100 <= 40)
			System.out.println("warm");
		else if(numberBetween0And100 >= 41 && numberBetween0And100 <= 60)
			System.out.println("hot");
		else if(numberBetween0And100 >= 61 && numberBetween0And100 <= 80)
			System.out.println("very hot");
		else if(numberBetween0And100 >= 81 && numberBetween0And100 <=99)
			System.out.println("extremely hot");
		else
			System.out.println("boiling");
		


	}

}
