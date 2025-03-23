#include <stdio.h>

int main()
{
	int firstNumber, secondNumber;
	float result = 0;
	char operation;

	printf("Enter the mathematical operation [+,-,*,/]: \n");
	scanf("%c", &operation);

	printf("Enter first number: ");
	scanf("%d", &firstNumber);

	printf("Enter second number: ");
	scanf("%d", &secondNumber);

	if (operation == '+')
	{
		result = firstNumber + secondNumber;
	}
	if (operation == '-')
	{
		result = firstNumber - secondNumber;

	}
	if (operation == '*')
	{
		result = firstNumber * secondNumber;

	}
	if ((operation == '/') && (secondNumber != 0))
	{
		result = firstNumber / (float)secondNumber;
	}
	if (secondNumber != 0)
	{
		printf("The result of %d %c %d = %f\n",firstNumber, operation, secondNumber, result);
	}
	else
	{
		printf("Division by zero is not allowed!\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main()
{
	float firstNumber, secondNumber, result;
	char operation;
	bool validOperation = true; // Boolean flag for valid operations

	printf("Enter the mathematical operation[+, -, *, / ]: \n");
	scanf(" %c", &operation);
	printf("Enter first number: ");
	scanf("%f", firstNumber);
	printf("Enter second number: ");
	scanf("%f", secondNumber);

	switch (operation)
	{
	case '+': result = firstNumber + secondNumber;
		break;
	case '-': result = firstNumber - secondNumber;
		break;
	case '*': result = firstNumber * secondNumber;
		break;
	case '/':
		if (secondNumber == 0) {
			printf("Division by zero is not allowed!\n");
			validOperation = false;  // Set flag to false if division by zero
		}
		else {
			result = firstNumber / secondNumber;
		}
		break;
	default:
		printf("This function is not yet implemented!\n");
		validOperation = false;  // Set flag to false if invalid operation
		break;
	}

	// Output the result if the operation is valid
	if (validOperation) {
		printf("The result of %.2f %c %.2f = %.2f\n", firstNumber, operation, secondNumber, result);
	}

	return 0;
}
