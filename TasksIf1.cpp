// TasksIf1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main()
{
    // int num1, num2;
    // std::cout << "Enter your numbers";
    // std::cin >> num1 >> num2;
    // std::cout << "The smaller one is " << (num1 >= num2 ? num2 : num1);


    // unsigned int year;
    // std::cout << "Enter a valid year";
    // std::cin >> year;
    // if((year%4 == 0 && year % 100 !=0) || year%400 == 0)
    // {
    //     std::cout<<"Yes";
    // }
    // else
    // {
    //     std::cout<<"No";
    // }

    // unsigned int a, b, c;
    // std::cout << "Enter the sides of your triangle";
    // std::cin >> a >> b >> c;
    // if((a+b) > c && (a+c) > b && (b+c) > a)
    // {
    //     std::cout << "Yes";
    // }
    // else
    // {
    //     std::cout << "No";
    // }

    // double x, y;
    // std::cout << "Enter coordinates";
    // std::cin >> x >> y;
    // if(x==0 || y==0)
    // {
    //     std::cout << "On axis";
    // }
    // else
    // {
    //     if(x>0 && y>0)
    //     {
    //         std::cout << "First";
    //     }
    //     if(x<0 && y>0)
    //     {
    //         std::cout << "Second";
    //     }
    //     if(x<0 && y<0)
    //     {
    //         std::cout << "Third";
    //     }
    //     if(x>0 && y<0)
    //     {
    //         std::cout << "Fourth";
    //     }
    // }
//
//    unsigned int month;
//    std::cout << "Enter month";
//    std::cin >> month;
//    if (month > 0 && month < 13)
//    {
//        switch (month)
//        {
//        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//            std::cout << 31;
//            break;
//
//        case 2:
//            unsigned int year;
//            std::cout << "Enter year";
//            std::cin >> year;
//            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//            {
//                std::cout << 29;
//            }
//            else
//            {
//                std::cout << 28;
//            }
//            break;
//
//        case 4: case 6: case 9: case 11:
//            std::cout << 30;
//            break;
//        }
//    }
//    else
//    {
//        std::cout << "Try again";
//    }
    //unsigned int num1, num2;
    //std::cout << "Enter two twodigit numbers";
    //std::cin >> num1 >> num2;
    //if (num1 >= 10 && num1 <= 99 && num2 >= 10 && num2 <= 99)
    //{
    //    int newNum = num1 * 100 + num2;
    //    std::cout << newNum << std::endl;
    //    int firstDigit = newNum / 1000;
    //    newNum %= 1000;
    //    int secondDigit = newNum / 100;
    //    newNum %= 100;
    //    int thirdDigit = newNum / 10;
    //    newNum %= 10;
    //    int fourthDigit = newNum;
    //    if (firstDigit < secondDigit && secondDigit < thirdDigit && thirdDigit < fourthDigit)
    //    {
    //        std::cout << "Yes";
    //    }
    //    else
    //    {
    //        std::cout << "No";
    //    }
    //}
//    unsigned int num1, num2;
//std::cin >> num1 >> num2;
//
// int num = num1 * 100 + num2;
//
// int digit1 = num / 1000;
// int digit2 = (num / 100) % 10;
// int digit3 = (num / 10) % 10;
// int digit4 = num % 10;
//
//std::cout << num << " - ";
//
//if (digit1 < digit2 && digit2 < digit3 && digit3 < digit4)
//{
//    std::cout << "YES";
//}
//else
//{
//    std::cout << "NO";
//}
// 
// 
//unsigned int a;
//double x, y;
//
//std::cin >> a;
//std::cin >> x >> y;
//
// int squareX = x / a;
// int squareY = y / a;
//
//if ((squareX + squareY) % 2 == 0)
//{
//    std::cout << "black";
//}
//else
//{
//    std::cout << "white";
//}
// 
//std::cout << "1. Събиране" << std::endl;
//std::cout << "2. Изваждане" << std::endl;
//std::cout << "3. Умножение" << std::endl;
//std::cout << "4. Деление" << std::endl;
//std::cout << "5. Остатък при деление" << std::endl;
//std::cout << "Избор: ";
//unsigned int choice;
//int a, b;
//std::cin >> choice;
//std::cin >> a >> b;
//
//switch (choice)
//{
//case 1:
//    std::cout << a + b;
//    break;
//
//case 2:
//    std::cout << a - b;
//    break;
//
//case 3:
//    std::cout << a * b;
//    break;
//
//case 4:
//    if (b == 0)
//    {
//        std::cout << "Division by zero";
//    }
//    else
//    {
//        std::cout << (double)a / b;
//    }
//    break;
//
//case 5:
//    if (b == 0)
//    {
//        std::cout << "Division by zero";
//    }
//    else
//    {
//        std::cout << a % b;
//    }
//    break;
//
//default:
//    std::cout << "Invalid option";
//}
//
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
