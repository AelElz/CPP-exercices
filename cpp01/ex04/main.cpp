#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error: cannot open input file" << std::endl;
		return (1);
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cout << "Error: cannot create output file" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}

	return (0);
}
