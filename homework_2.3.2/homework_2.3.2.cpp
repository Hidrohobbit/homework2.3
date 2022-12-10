#include <iostream>
#include <string>


class Counter
{
private:

    int number;

public:

    void  add()                 { ++number; }
    void  subtract()            { --number; }
    void  set_value(int number) { this->number = number; }
    int   get_value()           { return number; }

    Counter()
    {
        number = 1;
    }

};

void start_count(Counter& count, std::string select)
{
    int result = 0;

    if (select == "+")
    {
        count.add();
    }
    else if (select == "-")
    {
        count.subtract();
    }
    else if (select == "=")
    {
        std::cout << count.get_value();
    }
    else
    {
        std::cout << std::endl;
        std::cout << "Неизвестная команда";
    }
}

void counter_menu()
{
    int number = 1;
    std::string set_operation;
    std::string set_initial_value;

    Counter count;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::cin >> set_initial_value;
    std::cout << std::endl;

    if (set_initial_value == "y")
    {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        count.set_value(number);
    }
    else if (set_initial_value == "n")
    {
        std::cout << "Начальное значение по умолчанию: " << number;
   
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Неизвестная команда!!!" << std::endl;
        counter_menu();
    }



    while (true)
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
        else if ((set_operation == "+") || (set_operation == "-") || (set_operation == "="))
        {
            start_count(count, set_operation);
        }
        else
        {
            std::cout << "Неизвестная команда!!!" << std::endl;
            counter_menu();
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    counter_menu();

    return 0;
}