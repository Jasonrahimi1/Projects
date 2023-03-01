public class SavingsAccount extends BankAccount{
	double rate = 0.025;
	int savingsNumber = -1;
	String accountNumber;


	public SavingsAccount(String name, double amount) {
		super(name, amount);
		
	}
	
	public SavingsAccount(SavingsAccount newAccount, double balance) {
		super(newAccount, balance);
		savingsNumber += 1;
	}
	
	public void postInterest() {
		double monthlyRate = (rate / 12);
		double monthlyInterest = monthlyRate * getBalance();
		deposit(monthlyInterest);
	}
	
	public String getAccountNumber() {
		savingsNumber += 1;
		accountNumber = super.getAccountNumber() + "-" + savingsNumber;
		return accountNumber;
	}

}