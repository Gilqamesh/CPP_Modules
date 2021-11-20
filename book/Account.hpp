#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <string>

class Account
{
	static constexpr int period = 30;
	public:
		Account: Account("", 0) { }
		explicit Account(const std::string &o, double b = 0.0): owner(o), amount(b) { }
		void calculate() { amount += amount * interestRate; }
		static double rate() { return interestRate; }
		static void rate(double);
	private:
		std::string owner;
		double amount;
		double daily_tbl[period];
		static double interestRate;
		static double initRate();
};

#endif
