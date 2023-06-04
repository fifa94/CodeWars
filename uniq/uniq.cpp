#include <string>
#include <vector>
#include <iostream>


// using vs = std::vector<std::string>;

std::vector<std::string> uniq(const std::vector<std::string> &v)
{
    std::vector<std::string> result;

    
    for (auto i = 0; i < v.size(); i++)
    {
        if (v[i] != v[i + 1])
        {
            result.push_back(v[i]);
        }
    }

    return result;
}

int main()
{
    std::vector<std::string> vs = {"a", "a", "b", "b", "c", "a", "b", "c", "c"};

    std::vector<std::string> vs1 = uniq(vs);

    for (auto& i : vs1)
    {
        std::cout << i << std::endl;
    }
    

    return 0;
}