class Tables{

	public static void main(String args[]){
		final int UPPER_BOUNDARY= 10;
		final int MAX_TABLE_VALUE =  12;
		
		for(int i = 1; i < UPPER_BOUNDARY; i++){

			for(int j = 1; j <= MAX_TABLE_VALUE; j++){

				//printing the multiplication tables.
				String line = "" + i + " * " + j + " = " + i*j;
				System.out.println(line);
	
			}


			System.out.println("====================================================");

		}

	}	

}
