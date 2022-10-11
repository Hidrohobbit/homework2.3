#include <iostream>
#include <string>


class Calculator
{
private:

    double num1;
    double num2;


    double add (double num1, double num2) { return num1 + num2; }

    double multiply (double num1, double num2) { return num1 * num2; }

    double subtract_1_2 (double num1, double num2) { return num1 - num2; }

    double subtract_2_1 (double num1, double num2) { return num2 - num1; }

    double divide_1_2 (double num1, double num2) { return num1 / num2; }

    double divide_2_1 (double num1, double num2) { return num2 / num1; }

    bool set_num1 (double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
            return false;
    }

    bool set_num2 (double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
            return false;
    }

    

public:

    void get_result(double num1,double num2)
    {
        if (set_num1(num1) == false || set_num2(num2) == false)
        {
            std::cout << "\nНеверный ввод!!!" << std::endl;
        }
        else
        {
            double result_add          = add(num1, num2);
            double result_multiply     = multiply(num1, num2);
            double result_subtract_1_2 = subtract_1_2(num1, num2);
            double result_subtract_2_1 = subtract_2_1(num1, num2);
            double result_divide_1_2   = divide_1_2(num1, num2);
            double result_divide_2_1   = divide_2_1(num1, num2);

            std::cout << "\nnum1 + num2 = " << result_add
                      << "\nnum1 * num2 = " << result_multiply
                      << "\nnum1 - num2 = " << result_subtract_1_2
                      << "\nnum2 - num1 = " << result_subtract_2_1
                      << "\nnum1 / num2 = " << result_divide_1_2
                      << "\nnum2 / num1 = " << result_divide_2_1
                      << std::endl;
        }
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
        std::cout << "Введите num1: ";
        std::cin >> num1;

        std::cout << "\nВведите num2: ";
        std::cin >> num2;

        calc.get_result(num1, num2);

        std::cout << std::endl;
    }

    return 0;
    
}
