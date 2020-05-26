#include "Reg.h"

namespace reg
{
    int vowels(std::string name)
    {
        int number = 0;
        std::ifstream X;
        X.open(name);
        if (!X.is_open())
        {
            throw std::ios_base::failure("Error");
        }
        else
        {
            char j;
            std::string str;
            std::regex rx("([AaOoUuIiEeYy])");
            while (X.get(j))
            {
                str = j;
                if (regex_search(str.data(), rx))
                    number++;
            }
        }
        X.close();
        return number;
    }

    int one_letter(std::string name)
    {
        int number = 0;
        std::ifstream X;
        X.open(name);
        if (!X.is_open())
        {
            throw std::ios_base::failure("Error");
        }
        else
        {
            std::string str;
            std::regex rx("([A-Za-z])");
            while (!X.eof())
            {
                X >> str;
                if (regex_match(str.data(), rx))
                    number++;
            }
        }
        X.close();
        return number;
    }
}