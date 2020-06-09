#include "Reg.h"

namespace reg
{
    int vowels(std::string name)
    {
        int number = 0;
        std::ifstream enter;
        enter.open(name);
        if (!enter.is_open())
        {
            throw std::ios_base::failure("Error");
        }
        else
        {
            char j;
            std::string str;
            std::regex rx("([AaOoUuIiEeYy])");
            while (enter.get(j))
            {
                str = j;
                if (regex_search(str.data(), rx))
                    number++;
            }
        }
        enter.close();
        return number;
    }

    int one_letter(std::string name)
    {
        int number = 0;
        std::ifstream enter;
        enter.open(name);
        if (!enter.is_open())
        {
            throw std::ios_base::failure("Error");
        }
        else
        {
            std::string str;
            std::regex rx("([A-Za-z])");
            while (!enter.eof())
            {
                enter >> str;
                if (regex_match(str.data(), rx))
                    number++;
            }
        }
        enter.close();
        return number;
    }
}
