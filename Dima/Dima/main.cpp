#include <iostream>
#include <Windows.h>
#include <string>
#include <cstdlib>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    std::system("cls");

    int category = -1;
    int apple = 0, orange = 0, apricot = 0, pear = 0;
    int tomato = 0, luk = 0, cucumber = 0;
    int garlic = 0, parsley = 0;
    int boyarka = 0;
    int product, kolvo;

    std::string fruits[4]{ "Яблочный","Апельсиновый","Абрикосовый","Грушевый" };
    std::string ovosh[3]{ "Томатный","Луковый","Огуречный" };
    std::string tea[2]{ "Чесночный","Петрушевый" };

    std::cout << "\t\t\t\t\t\t---------------\n";
    std::cout << "\t\t\t\t\t\tСоки Александра\n";
    std::cout << "\t\t\t\t\t\t---------------\n";

    while (category != 0)
    {
        std::cout << "Выберите категорию напитков\n";
        std::cout << "1.Фруктовые\n";
        std::cout << "2.Овощные\n";
        std::cout << "3.Чаи\n";
        std::cout << "4.Настойки\n";
        std::cout << "0.Выход из магазина\n";
        std::cout << "Ввод: ";
        std::cin >> category;

        if (category == 1)
        {
            std::system("cls");
            std::cout << "Выберите напитки из этой категории\n";
            std::cout << "1.Яблочный(90 руб)\n";
            std::cout << "2.Апельсиновый(100 руб)\n";
            std::cout << "3.Абрикосовый(120 руб)\n";
            std::cout << "4.Грушевый(95 руб)\n";
            std::cout << "Ввод: ";
            std::cin >> product;

            if (product >= 1 && product <= 4)
            {
                std::cout << "Введите количество(в литрах): ";
                std::cin >> kolvo;
                if (product == 1)
                {
                    apple = apple + kolvo;
                }
                else if (product == 2)
                {
                    orange = orange + kolvo;
                }
                else if (product == 3)
                {
                    apricot = apricot + kolvo;
                }
                else if (product == 4)
                {
                    pear = pear + kolvo;
                }
                if (boyarka > 0)
                {
                    boyarka = 0;
                    std::cout << "Боярышник удалён из корзины\n";
                }
            }
            else
            {
                std::cout << "Вы вышли из диапазона\n";
            }
        }
        else if (category == 2)
        {
            std::system("cls");
            std::cout << "Выберите напитки из этой категории\n";
            std::cout << "1.Томатный(80 руб)\n";
            std::cout << "2.Луковый(70 руб)\n";
            std::cout << "3.Огуречный(60 руб)\n";
            std::cout << "Ввод: ";
            std::cin >> product;

            if (product >= 1 && product <= 3)
            {
                std::cout << "Введите количество(в литрах): ";
                std::cin >> kolvo;
                if (product == 1)
                {
                    tomato = tomato + kolvo;
                }
                else if (product == 2)
                {
                    luk = luk + kolvo;
                }
                else if (product == 3)
                {
                    cucumber = cucumber + kolvo;
                }
            }
            else
            {
                std::cout << "Вы вышли из диапазона\n";
            }
        }
        else if (category == 3)
        {
            std::system("cls");
            std::cout << "Выберите напитки из этой категории\n";
            std::cout << "1.Чесночный(100 руб)\n";
            std::cout << "2.Петрушевый(60 руб)\n";
            std::cout << "Ввод: ";
            std::cin >> product;

            if (product >= 1 && product <= 2)
            {
                std::cout << "Введите количество(в литрах): ";
                std::cin >> kolvo;
                if (product == 1)
                {
                    garlic = garlic + kolvo;
                }
                else if (product == 2)
                {
                    parsley = parsley + kolvo;
                }
            }
            else
            {
                std::cout << "Вы вышли из диапазона\n";
            }
        }
        else if (category == 4)
        {
            std::system("cls");
            if (apple + orange + apricot + pear > 0)
            {
                std::cout << "Боярышник заблокирован, вы купили фруктовый сок\n";
            }
            else
            {
                std::cout << "1.Боярышник(300 руб)\n";
                std::cout << "Ввод: ";
                std::cin >> product;
                if (product == 1)
                {
                    std::cout << "Введите количество(в литрах): ";
                    std::cin >> kolvo;
                    boyarka = boyarka + kolvo;
                }
                else
                {
                    std::cout << "Вы вышли из диапазона\n";
                }
            }
        }
        else if (category != 0)
        {
            std::cout << "Вы вышли из диапазона\n";
        }
    }

    std::system("cls");
    std::cout << "--- Чек ---\n";
    int sum = 0;

    if (apple > 0)
    {
        std::cout << fruits[0] << ": " << apple << " л x 90 = " << apple * 90 << "\n";
        sum = sum + apple * 90;
    }
    if (orange > 0)
    {
        std::cout << fruits[1] << ": " << orange << " л x 100 = " << orange * 100 << "\n";
        sum = sum + orange * 100;
    }
    if (apricot > 0)
    {
        std::cout << fruits[2] << ": " << apricot << " л x 120 = " << apricot * 120 << "\n";
        sum = sum + apricot * 120;
    }
    if (pear > 0)
    {
        std::cout << fruits[3] << ": " << pear << " л x 95 = " << pear * 95 << "\n";
        sum = sum + pear * 95;
    }
    if (tomato > 0)
    {
        std::cout << ovosh[0] << ": " << tomato << " л x 80 = " << tomato * 80 << "\n";
        sum = sum + tomato * 80;
    }
    if (luk > 0)
    {
        std::cout << ovosh[1] << ": " << luk << " л x 70 = " << luk * 70 << "\n";
        sum = sum + luk * 70;
    }
    if (cucumber > 0)
    {
        std::cout << ovosh[2] << ": " << cucumber << " л x 60 = " << cucumber * 60 << "\n";
        sum = sum + cucumber * 60;
    }
    if (garlic > 0)
    {
        std::cout << tea[0] << ": " << garlic << " л x 100 = " << garlic * 100 << "\n";
        sum = sum + garlic * 100;
    }
    if (parsley > 0)
    {
        std::cout << tea[1] << ": " << parsley << " л x 60 = " << parsley * 60 << "\n";
        sum = sum + parsley * 60;
    }
    if (boyarka > 0)
    {
        std::cout << "Боярышник: " << boyarka << " л x 300 = " << boyarka * 300 << "\n";
        sum = sum + boyarka * 300;
    }

    std::cout << "Итого к оплате: " << sum << " руб\n";
    Sleep(2000);

    return 0;
}
