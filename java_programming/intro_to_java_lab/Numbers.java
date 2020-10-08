class Numbers{

	public static void main(String args[]){
		//creating an array of words.
		String [] words = {
			"zero",
			"one",
		       	"two",
		       	"three",
		       	"four",
			"five",
			"six",
			"seven",
			"eight",
			"nine"
			};


		//generating random numbers.
		int number = (int)(Math.random() * 10);

		System.out.println(number);
		System.out.println("Number generated: " + words[number]);
	}

}
