#include <iostream>
#include <time.h>
#include <cstdlib>
/*array with characters*/
std::string characters_alpha[9] = {
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
};
std::string characters_signs[9] = {"_", "@"};

/*number/password generator*/
class randomnum
{
public:
    randomnum()
    {
        int password_index = (rand() % 9) + 1;
        std::cout << characters_alpha[password_index] + characters_signs[password_index];
    }
};

int main()
{
    system("cls");
    /*loop that generates the required no of characters for password*/
    std::cout << "Password:: ";

    srand(time(0));

    for (int i = 1; i <= 16; i++)
    {
        randomnum *pass = new randomnum;
    }

    return 0;
}