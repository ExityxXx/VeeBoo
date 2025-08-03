#include <iostream>
#include <string>

const char *VEEBOO_TITLE_ASCII_ART =
R"VeeBoo(
__     __        ____              
\ \   / /__  ___| __ )  ___   ___  
 \ \ / / _ \/ _ \  _ \ / _ \ / _ \ 
  \ V /  __/  __/ |_) | (_) | (_) |
   \_/ \___|\___|____/ \___/ \___/ 
)VeeBoo";


int main(void)
{
    std::cout << VEEBOO_TITLE_ASCII_ART << std::endl;;
    return 0;
}

