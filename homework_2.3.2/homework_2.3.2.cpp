#include <iostream>
#include <string>


class Counter
{
private:
    
    int number;

    int  add()       {return ++number;}
    int  subtract()  {return --number;}
    void show()
    {
        std::cout << number;
        std::cout << std::endl;
    }




    void start_count(std::string select)
    {
        if (select == "+")
        {
            add();
        }
        else if (select == "-")
        {
            subtract();
        }
        else if (select == "=")
        {
            show();
        }
        else
        {
            std::cout << std::endl;
            std::cout << "Неизвестная команда";
        }


       


    }


public:

    void counter_menu()
    {
        std::string set_operation;
        std::string set_initial_value;

        std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
        std::cin >> set_initial_value;
        
        std::cout << std::endl;

        if (set_initial_value == "y")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> number;
        }
        else if (set_initial_value == "n")
        {
            std::cout << "Начальное значение по умолчанию: " << number;
            std::cout << std::endl;
        }

        

        while(true)
        {
            std::cout << std::endl;
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> set_operation;

            if (set_operation == "x")
            {
                std::cout << std::endl;
                std::cout << "Завершение работы программы!!!";
                std::cout << std::endl;
                break;
            }
            else
            start_count(set_operation);

        }
        

    }
    
    Counter()
    {
        number = 1;
    }
   
};



int main()
{
    setlocale(LC_ALL, "Russian");

    Counter operation;

    operation.counter_menu();


}