#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

std::__1::istream &read(std::__1::istream &istream, Sales_data &data)
{
	double price;
	istream >> data.bookNo >> data.units_sold >> price;
	data.revenue = data.units_sold * price;
	return istream;
}

void combine(Sales_data &total, const Sales_data &cur)
{
	total.units_sold += cur.units_sold;
	total.revenue += cur.revenue;
}

std::__1::ostream &print(const Sales_data &data)
{
	return (std::cout << data.bookNo << ', ' << data.units_sold << ', ' << data.revenue);
}

int main()
{
	Sales_data total = { };
	if (read(std::cin, total))
	{
		Sales_data trans;
		while (read(std::cin, trans))
		{
			if (total.bookNo == trans.bookNo)
				combine(total, trans);
			else
			{
				print(total) << std::endl;
				total = trans;
			}
		}
		print(total) << std::endl;
	}
	else
	{
		std::cerr << "No data ?!" << std::endl;
		return (-1);
	}
	return (0);
}