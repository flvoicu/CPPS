#include <iostream>
#include <fstream>

static int open_files(std::ifstream *inputFile, std::ofstream *outputFile, std::string file) {

	(*inputFile).open(file, std::fstream::in);
	(*outputFile).open(file + "replace", std::fstream::out);
	if (!inputFile || !outputFile)
	{
        std::cerr << "Failed to open files" << std::endl;
		(*inputFile).close();
		(*outputFile).close();
        return 1;
    }
	return 0;
}


static void manage_files(std::string s1, std::string s2, std::ifstream *inputFile, std::ofstream *outputFile) {
	std::string line;
	std::string tmp;
	int check = 0;
	int j = 0;
   
    while (std::getline(*inputFile, line)) {
		int last = 0;
		if (check)
			line = tmp + line;
		for (int i = 0; i <= line.length(); i++) {
			if (line[i] == s1[j]) {
				j++;
				if (j == s1.length()) {
					tmp = line;
					if (last) {
						tmp.erase(0, last);
					}
					tmp.erase(i - j, line.length() - i + j);
					*outputFile << tmp << s2;
					last = i;
					j = 0;
				}
			}
			else 
				j = 0;
		}
		tmp = line;
		tmp.erase(0, last);
		check = 1;
		if (j == 0) {
			*outputFile << tmp;
			check = 0;
		}
    }
}


int main(int ac, char* av[]) {

	if (ac != 4){
		std::cerr << "Invalid argument number." << std::endl;
		return 1;
	}
	std::ifstream inputFile;
    std::ofstream outputFile;
	int j = 0;
	int start = 0;
	int end = 0;

	if (open_files(&inputFile, &outputFile, av[2]) == 1)
		return 1;

	manage_files(av[3], av[4], &inputFile, &outputFile);

    inputFile.close();
    outputFile.close();
    return 0;
}