#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    const int size = 10;
    int bot_arr[size];
    int user_arr[size];

    for (int i = 0; i < size; i++) 
    {
        bot_arr[i] = rand() % 11; 
    }

    std::cout << "Введите числа от 0 до 10: \n";

    for (int i = 0; i < size; i++) 
    {
        do 
        {
            std::cin >> user_arr[i];

            if (user_arr[i] < 0 || user_arr[i] > 10)
            {
                std::cout << "Ты читать не умеешь?\n";
            }

        } while (user_arr[i] < 0 || user_arr[i] > 10); 
    }

    std::cout << "\n";
    std::cout << "Массив бота:   ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << bot_arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Массив игрока: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << user_arr[i] << " ";
    }
    
    std::cout << "\n";

    for (int i = 0; i < size; i++)
    {
        if (bot_arr[i] == user_arr[i])
        {
            std::cout << "Есть пробитие в ячейке: " << i + 1;
        }
        else
        {
            std::cout << "Совпадение нема";
        }
    }

    return 0;
}

