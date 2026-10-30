#include <iostream>

int main()
{
    //unsigned int n;
    //std::cin >> n;

    //for (int x = 0; x <= n; x++)
    //{
    //    int y = n - x;
    //    std::cout << x << " + " << y << " = " << n << std::endl;
    //}

    //unsigned int a, b;
    //std::cin >> a >> b;

    //int smaller = (a < b ? a : b);

    //for (int i = smaller; i >= 1; i--)
    //{
    //    if (a % i == 0 && b % i == 0)
    //    {
    //        std::cout << i << " ,";
    //    }
    //}

    //unsigned int n;
    //std::cin >> n;

    //int sum = 0;

    //for (int i = 1; i < n; i++)
    //{
    //    if (n % i == 0)
    //    {
    //        sum += i;
    //    }
    //}

    //if (sum == n)
    //{
    //    std::cout << "Perfect number";
    //}
    //else
    //{
    //    std::cout << "Not a perfect number";
    //}

    //unsigned int n;
    //std::cin >> n;

    //for (int i = 0; i < n; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        if (i == j)
    //        {
    //            std::cout << "0 ";
    //        }
    //        else if (j > i)
    //        {
    //            std::cout << "+ ";
    //        }
    //        else
    //        {
    //            std::cout << "- ";
    //        }
    //    }

    //    std::cout << std::endl;
    //}

    //unsigned int n, position;

    //std::cin >> n >> position;

    //int temp = n;
    //int digits = 0;
    //while (temp > 0);
    //{
    //    digits++;
    //    temp /= 10;
    //}


    //if (position == 0 || position > digits)
    //{
    //    std::cout << "Invalid position";
    //}
    //else
    //{
    //    for (int i = 1; i < position; i++)
    //    {
    //        n /= 10;
    //    }

    //    std::cout << n % 10;
    //}

    //long long binary;
    //std::cin >> binary;

    //int decimal = 0;
    //int powerOfTwo = 1;

    //while (binary > 0)
    //{
    //    int digit = binary % 10;

    //    if (digit != 0 && digit != 1)
    //    {
    //        std::cout << "Invalid binary number";
    //        return 0;
    //    }
    //    decimal = decimal + digit * powerOfTwo;
    //    powerOfTwo *= 2;
    //    binary /= 10;
    //}

    //std::cout << decimal;

    //unsigned int n;
    //std::cin >> n;

    //int temp = n;
    //int digits = 1;
    //int square = n * n;
    //do
    //{
    //    digits *= 10;
    //    temp /= 10;
    //} while (temp > 0);

    //if (square % digits == n)
    //{
    //    std::cout << "Automorphic";
    //}
    //else
    //{
    //    std::cout << "Not automorphic";
    //}

    //unsigned int n;
    //std::cin >> n;

    //int steps = 0;
    //int maximum = n;

    //std::cout << n;

    //while (n != 1)
    //{
    //    if (n % 2 == 0)
    //    {
    //        n = n / 2;
    //    }
    //    else
    //    {
    //        n = 3 * n + 1;
    //    }

    //    steps++;

    //    if (n > maximum)
    //    {
    //        maximum = n;
    //    }

    //    std::cout << " " << n;
    //}

    //std::cout << std::endl;
    //std::cout << "Steps: " << steps << std::endl;
    //std::cout << "Maximum: " << maximum;

    //int numUp, numDown;
    //std::cin >> numUp >> numDown;

    //if (numDown == 0)
    //{
    //    std::cout << "Invalid denominator";
    //}
    //else if (numUp == 0)
    //{
    //    std::cout << "0/1";
    //}
    //else
    //{
    //    if (numDown < 0)
    //    {
    //        numUp = -numUp;
    //        numDown = -numDown;
    //    }

    //    int rev = numUp;

    //    if (rev < 0)
    //    {
    //        rev = -rev;
    //    }

    //    int smaller = (rev < numDown ? rev : numDown);
    //    int nod = 1;

    //    for (int i = smaller; i >= 1; i--)
    //    {
    //        if (rev % i == 0 && numDown % i == 0)
    //        {
    //            nod = i;
    //            break;
    //        }
    //    }

    //    numUp /= nod;
    //    numDown /= nod;

    //    if (numUp < 0)
    //    {
    //        std::cout << "-";
    //        numUp = -numUp;
    //    }

    //    std::cout << numUp << "/" << numDown;
    //}

    unsigned int n;
    std::cin >> n;

    int mostFrequent = 0;
    int maxCount = 0;

    for (int digit = 0; digit <= 9; digit++)
    {
        int temp = n;
        int count = 0;

        while (temp > 0);
        {
            if (temp % 10 == digit)
            {
                count++;
            }

            temp = temp / 10;
        }


        if (count > maxCount || (count == maxCount && count > 0))
        {
            maxCount = count;
            mostFrequent = digit;
        }
    }

    std::cout << mostFrequent;
}