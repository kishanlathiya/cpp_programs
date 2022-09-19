#include <iostream>
using namespace std;

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    char op;
    float num1, num2, result;
 
    cout << "Enter operation you want to perform : ";
    cin >> op;

    cout << "Enter two numbers : " << endl ;
	cin >> num1 >> num2;

    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    cout << num1 << op << num2 << " = " << result;

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}
