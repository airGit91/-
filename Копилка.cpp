// Копилка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "");
        //Задача 1. Симулятор маршрутки
    int price = 20;
    int salary = price * 0.25;
    int fuel = price * 0.2;
    int taxes = price * 0.2;
    int repairs = price * 0.2;
    int total = price - (salary + fuel + taxes + repairs);
    int sum = 0;
    int finalCost = 0;
 
    int passengers = 0;
    int entered;
    int left;

    std::string sationFirst = "Улица программистов";
    std::string secondStation = "Проспект алгоритмов";
    std::string thirdStation = "Андроидов переулок";
    std::string fourthStation = "Площадь фулстека";

    //std::cout << price << "\n" << salary << "\n" << fuel << "\n" << taxes << "\n" << repairs << "\n";
    std::cout << "Прибываем на остановку " << sationFirst << ".В салоне пассажиров : " << passengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке?";
    std::cin >> left;
    passengers -= left;
    std::cout << "\n";

    std::cout << "Сколько пассажиров зашло  на остановке?";
    std::cin >> entered;
    passengers += entered;
    sum = sum + (total * entered);
    finalCost += finalCost + (price * entered);
    std::cout << "\n";

    std::cout << "Отправляемся с остановки " << sationFirst << ".В салоне пассажиров : " << passengers << "\n";
    std::cout << "-----------Едем---------" << "\n";

    std::cout << "Прибываем на остановку " << secondStation << ".В салоне пассажиров : " << passengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке?";
    std::cin >> left;
    passengers -= left;
    std::cout << "\n";

    std::cout << "Сколько пассажиров зашло  на остановке?";
    std::cin >> entered;
    passengers += entered;
    sum =  sum + (total * entered);
    finalCost += finalCost + (price * entered);
    std::cout << "\n";

    std::cout << "Отправляемся с остановки " << secondStation << ".В салоне пассажиров : " << passengers << "\n";
    std::cout << "-----------Едем---------" << "\n";

    std::cout << "Прибываем на остановку " << thirdStation << ".В салоне пассажиров : " << passengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке?";
    std::cin >> left;
    passengers -= left;
    std::cout << "\n";

    std::cout << "Сколько пассажиров зашло  на остановке?";
    std::cin >> entered;
    passengers += entered;
    sum = sum + (total * entered);
    finalCost += finalCost + (price * entered);
    std::cout << "\n";

    std::cout << "Отправляемся с остановки " << thirdStation << ".В салоне пассажиров : " << passengers << "\n";
    std::cout << "-----------Едем---------" << "\n";

    std::cout << "Прибываем на остановку " << fourthStation << ".В салоне пассажиров : " << passengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке?";
    std::cin >> left;
    passengers -= left;
    std::cout << "\n";

    std::cout << "Сколько пассажиров зашло  на остановке?";
    std::cin >> entered;
    passengers += entered;
    sum = sum + (total * entered);
    finalCost += finalCost + (price * entered);
    std::cout << "\n";

    std::cout << "Отправляемся с остановки " << fourthStation << ".В салоне пассажиров : " << passengers << "\n";
    std::cout << "-----------Едем---------" << "\n";
    
 /*   Всего заработали : 100 руб.

         : 25 руб.

         : 20 руб.

         : 20 руб.

         : 20 руб.

         : 15 руб.*/
    std::cout << "Всего заработали :" << finalCost << "\n";
    std::cout << "Расходы на топливо :" << sum << "\n";
    std::cout << "Расходы на ремонт машины :" << sum << "\n";
    std::cout << "Налоги :" << sum << "\n";
    std::cout << "Итого доход :" << sum << "\n";

}
























// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
