#include <iostream>
#include <string>

const char *VEEBOO_TITLE_ASCII_ART =
R"(
__     __        ____              
\ \   / /__  ___| __ )  ___   ___  
 \ \ / / _ \/ _ \  _ \ / _ \ / _ \ 
  \ V /  __/  __/ |_) | (_) | (_) |
   \_/ \___|\___|____/ \___/ \___/ 
)";

int main(void)
{
    std::cout << VEEBOO_TITLE_ASCII_ART;
    return 0;
}

