#include <string>
#include <iostream>
void Permutation(const std::string & str, int begin)
{
    std::string str_cp = str.substr(begin, str.length() - begin);
    std::cout << str_cp << std::endl;
    for (int i=begin;i< str_cp.length() - 2;i++)
    {
        std::string begin_char = &str_cp[begin];
        std::string cur_char = &str_cp[i];
        str_cp.replace(begin, 1, cur_char);
        str_cp.replace(i, 1, begin_char);
        Permutation(str_cp, i+1);
        str_cp.replace(begin, 1, begin_char);
        str_cp.replace(i, 1, cur_char);
    }

}
void Permutation(std::string str)
{
    if(str.length() == 0)
    {
        return;
    }
    Permutation(str, 0);
}
