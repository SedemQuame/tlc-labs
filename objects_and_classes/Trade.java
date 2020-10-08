package Sub;
public class Trade{

	//private class members
	private String ID;
	private String Symbol;
	private int quantity;
	private double price;


	//constructors
	public Trade(String tradeId, String tradeSymbol, int tradeQuantity){
		this.ID = tradeId;
		this.Symbol = tradeSymbol;
		this.quantity = tradeQuantity;
	}

	public Trade(String tradeId, String tradeSymbol, int tradeQuantity, double tradePrice){
		this(tradeId, tradeSymbol, tradeQuantity);
		this.price = tradePrice;
	}

	//getter and setters
	public String toString(){
		String tradeInfo = "Trade id ====> " + this.ID + "\nTrade Symbol ====> " + this.Symbol + "\nTrade Quantity ===> " + this.quantity + "\nTrade Price ===> " + this.price;

		return(tradeInfo);
	}

	public void setTradePrice(double tradePrice){
		if(tradePrice > 0){
			this.price = tradePrice;
		}else{
			System.out.println("Trade price must be only positive values.");
		}
	}

	public double getPrice(){
		return (this.price);
	}
}
