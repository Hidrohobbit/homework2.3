#include <iostream>
#include <string>


class Calculator
{
private:

    double num1;
    double num2;

public:

    double add()          { return num1 + num2; }

    double multiply()     { return num1 * num2; }

    double subtract_1_2() { return num1 - num2; }

    double subtract_2_1() { return num2 - num1; }

    double divide_1_2()   { return num1 / num2; }

    double divide_2_1()   { return num2 / num1; }

    bool   set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            std::cout << " Значение не может быть равно 0.\nУстановлено значение по умолчанию (1)" << std::endl;
            return false;
        }
            
    }

    bool   set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            std::cout << " Значение не может быть равно 0.\nУстановлено значение по умолчанию (1)" << std::endl;
            return false;
        }
            
    }

    void   get_result()
    {
       
            double result_add          = add();
            double result_multiply     = multiply();
            double result_subtract_1_2 = subtract_1_2();
            double result_subtract_2_1 = subtract_2_1();
            double result_divide_1_2   = divide_1_2();
            double result_divide_2_1   = divide_2_1();

            std::cout << "\nnum1 + num2 = " << result_add
                      << "\nnum1 * num2 = " << result_multiply
                      << "\nnum1 - num2 = " << result_subtract_1_2
                      << "\nnum2 - num1 = " << result_subtract_2_1
                      << "\nnum1 / num2 = " << result_divide_1_2
                      << "\nnum2 / num1 = " << result_divide_2_1
                      << std::endl;
     
    }

    Calculator()
    {
        num1 = 1;
        num2 = 1;
    }
};



int main()
{

    setlocale (LC_ALL, "Russian");

    Calculator calc;

    double num1 = 0;
    double num2 = 0;

    while(true)
    {
        std::cout << std::endl;
        std::cout << "Введите num1: ";
        std::cin >> num1;
        calc.set_num1(num1);

        std::cout << "\nВведите num2: ";
        std::cin >> num2;
        calc.set_num2(num2);

        

        std::cout << "\nnum1 + num2 = " << calc.add()
            << "\nnum1 * num2 = " << calc.multiply()
            << "\nnum1 - num2 = " << calc.subtract_1_2()
            << "\nnum2 - num1 = " << calc.subtract_2_1()
            << "\nnum1 / num2 = " << calc.divide_1_2()
            << "\nnum2 / num1 = " << calc.divide_2_1()
            << std::endl;

        std::cout << std::endl;

        std::cout << "Вывод методом get_result " << std::endl;

        calc.get_result();


    }

    return 0;   
}