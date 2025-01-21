#include <iostream>

int main()
{
    setlocale(0, "");
        //Задача 1. Симулятор маршрутки
  
    int price = 20;
    int sum = 0;
    int passengers = 0;
    int entered;
    int left;
 
    std::string sationFirst = "Улица программистов";
    std::string secondStation = "Проспект алгоритмов";
    std::string thirdStation = "Андроидов переулок";
    std::string fourthStation = "Площадь фулстека";

    std::cout << "Прибываем на остановку " << sationFirst << ".В салоне пассажиров : " << passengers << "\n";

    std::cout << "Сколько пассажиров вышло на остановке?";
    std::cin >> left;
    passengers -= left;
    std::cout << "\n";

    std::cout << "Сколько пассажиров зашло  на остановке?";
    std::cin >> entered;
    passengers += entered;
    sum = sum + (price * entered);
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
    sum = sum + (price * entered);
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
    sum = sum + (price * entered);
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
    sum = sum + (price * entered);
    std::cout << "\n";

    std::cout << "Отправляемся с остановки " << fourthStation << ".В салоне пассажиров : " << passengers << "\n";
    std::cout << "-----------Едем---------" << "\n";

    int salary = sum * 0.25;
    int fuel = sum * 0.2;
    int taxes = sum * 0.2;
    int repairs = sum * 0.25;
    int total = total = sum - (salary + fuel + taxes + repairs);

    
    std::cout << "Всего заработали: " << sum << " руб.\n";
    std::cout << "Зарплата водителя: " << salary << " руб.\n";
    std::cout << "Расходы на топливо: " << fuel << " руб.\n";
    std::cout << "Налоги: " << taxes << " руб.\n";
    std::cout << "Расходы на ремонт машины: " << repairs << " руб.\n";
    std::cout << "Итого доход: " << total << " руб.\n";

    //Задача 2. Обмен местами

    int a = 42;
    int b = 153;
    int c = 0;
    std::cout << "a: " << a << "\n"; 
    std::cout << "b: " << b << "\n"; 
    c = a; 
    b += c; 
    a = b - c; 
    b = c; 
    std::cout << "a: " << a << "\n";  
    std::cout << "b: " << b << "\n"; 


    //Задача 3. Злостные вредители
    
    int beginHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;
    int finalHeight = beginHeight + (2.5 * (dailyGrowth - nightFade));
 
    //Задача 4 (дополнительная). Повышаем градус сложности*

    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a: " << a << "\n"; 
    std::cout << "b: " << b << "\n"; 
}






