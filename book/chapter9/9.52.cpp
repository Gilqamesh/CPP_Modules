#include <stack>
#include <iostream>
#include <string>

// Operations supported: +, -
// Need support for: /, *
int
evaluate_expression(const std::string &s)
{
	std::stack<std::string> stack;
	int	value = 0;
	for (std::string::const_reverse_iterator i = s.crbegin(); i != s.crend(); ++i)
	{
		if (*i == ')' || *i == '(' || *i == '+' || *i == '-')
			stack.push(std::string(1, *i));
		else
			stack.push(stoi(s, i, 10));
	}
	while (stack.size())
	{
		bool seen_parantheses = false;
		std::string cur = stack.top();
		if (cur == "(")
		{
			seen_parantheses = true;
		}
	}
}

int main()
{
	std::cout << evaluate_expression("12+34-56-((78-9)+10)") << std::endl;
	std::cout << evaluate_expression("(12+34)-(56-((78-9)+10))") << std::endl;
  	std::cout << evaluate_expression("((12+34-(56-10)-1") << std::endl;
  	std::cout << evaluate_expression("12+34)-(56-10)-1") << std::endl;
}