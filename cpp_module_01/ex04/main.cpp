#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char *av[])
{
    if(ac != 4)
    {
        std::cout << "program use: ./loser <filename> <sting1> <sting1>" << std::endl;
        return 1;
    }
    std::string buff;
    std::string filename = (const char *)av[1];
    std::string s1 = (const char *)av[2];
    std::string s2 = (const char *)av[3];
    if(filename.empty() || s1.empty() || s2.empty())
        return 0;
    int i = filename.find('.');
    std::string out_name= filename.substr(0, i) + ".replace";
    
    std::ifstream in_file(filename.c_str());
    if (!in_file.is_open())
    {
        std::cout << "cannot open the file" << std::endl;
        return 1;
    }
    std::ofstream out_file(out_name.c_str());
    if(out_file.fail())
    {
        std::cout << "can't create the replace file" << std::endl;
        return 1;
    }
    while(getline(in_file, buff, '\0'))
    {
        std::string tmp = buff;
        size_t pos = 0;
        while ((pos = tmp.find(s1, pos)) != std::string::npos) {
            tmp = tmp.substr(0, pos) + s2 + tmp.substr(pos + s1.length());
            pos += s2.length();
        }
        out_file << tmp << '\n';
    }
    in_file.close();
    out_file.close();
    return 0;
}