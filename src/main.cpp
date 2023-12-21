#include <iostream>
#include <string>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int main()
{
    // while(true)
    // {
        // Enter a number
        std::cout << "Enter a number:" << std::endl;
        size_t usersFirstNumber;
        std::cin >> usersFirstNumber;

        // Enter a operation
        std::string usersOperation;
        std::cout << "Enter an operation(ex. +, -, x, /):" << std::endl;
        std::cin >> usersOperation;

        // Enter another number
        std::cout << "Enter another number: " << std::endl;
        size_t usersAnotherNumber;
        std::cin >> usersAnotherNumber;

        // Enter another operation
        std::cout << "Enter another operation(ex. +, -, x, /, =):" << std::endl;
        // If = is not entered, continue the operation until = is entered.
        std::string usersAnotherOperation;
        std::cin >> usersAnotherOperation;

        // Store the operation symbols
        std::string plusSymbol = "+";
        std::string minusSymbol = "-";
        std::string multiplicationSymbol = "x";
        std::string asterikSymbol = "*";
        std::string divisionSymbol = "/";

        // Going to use switch case make sure to use break
        
        // If users operation is an = sign
        if(usersAnotherOperation == "=")
        {
            // And if users operation was an +
            if(usersOperation == plusSymbol)
            {
                // then add
                std::cout << add(usersFirstNumber, usersAnotherNumber) << std::endl;
            }
            if(usersOperation == minusSymbol)
            {
                std::cout << subtract(usersFirstNumber, usersAnotherNumber) << std::endl;
            }
            if(usersOperation == multiplicationSymbol)
            {
                std::cout << multiplication(usersFirstNumber, usersAnotherNumber) << std::endl;
            }
            if(usersOperation == asterikSymbol)
            {
                std::cout << multiplication(usersFirstNumber, usersAnotherNumber) << std::endl;
            }
            if(usersOperation == divisionSymbol)
            {
                std::cout << division(usersFirstNumber, usersAnotherNumber) << std::endl;
            }
        }

        /*
        // Press "c" to clear
        if(user presses the c key)
        {
            system("clear");
        }

        // Press "q" to quit
        if(user presses the q keu)
        {
            // return 0
            return 0;
        }
        */
    //  }
}





































