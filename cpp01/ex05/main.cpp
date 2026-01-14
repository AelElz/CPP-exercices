#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Harl at DEBUG level:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "Harl at INFO level:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "Harl at WARNING level:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "Harl at ERROR level:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "Harl at unknown level:" << std::endl;
    harl.complain("SILENT");
    std::cout << std::endl;

    return 0;
}
