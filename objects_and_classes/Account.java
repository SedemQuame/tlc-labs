import Sub.Trade;
import java.util.*;

public class Account{

	//private members
	private int totalTrades;
	private List<Trade> tradeList = new ArrayList<Trade>(); //substitutability 

	//constructors
	public Account(){
		this.totalTrades = 0;
	}

	public Account(int totalTrades){
		this.totalTrades = totalTrades;
	}

	//methods
	public int getTotalTrades(){
		return(this.totalTrades);
	}

	public void incrementTotalTrades(){
		this.totalTrades++;
	}

	public void addNewTrade(Trade tradeObject){
		this.tradeList.add(tradeObject);
	}

}
