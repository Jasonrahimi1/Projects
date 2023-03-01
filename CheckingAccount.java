public class CheckingAccount extends BankAccount {
	final double FEE = 0.15;


	public CheckingAccount(String name, double amount) {
		super(name, amount);
		setAccountNumber(getAccountNumber() + "-10");
	}

	public boolean withdraw(double Withdrawn) {
		double afterFees = (Withdrawn + FEE);
		return super.withdraw(afterFees);
	}

}