import Sub.Trade;
//import junit.framework.*;

public class TradeTest{
		
//	@Test
//	public static void checkForPositivityOfTradePrices(Trade testTrade){
		//create a new Trade.
//		assertTrue("Prices are greater than zero. \nWell done!!!", testTrade.getPrice() > 0);
//		assertFalse("Prices should not be less than zero. \nYou idiot!!!", testTrade.getPrice() > 0);
//	}

	public static void main(String [] args){
		Trade testTrade = new Trade("trade1", "IBM", 154, -5);
		System.out.println(testTrade.toString());
//		checkForPositivityOfTradePrices(testTrade);
	}
}
