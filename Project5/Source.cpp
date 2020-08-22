# include <iostream>
using namespace std;

class add
{
	int x, y,z;
	z = x + y;
};
int main()
{
	char op;
	float num1, num2;

	cout << "Enter operator either + or - or * or /: ";
	cin >> op;

	cout << "Enter two operands: ";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	default:
		// If the operator is other than +, -, * or /, error message is shown
		cout << "Error! operator is not correct";
		break;
	}

	//branch 2
	if (num1 < num2)
	{
		cout << "num1 is minimum" << endl;
	}
	else
		cout << "num2 is minimum" << endl;
	return 0;
}