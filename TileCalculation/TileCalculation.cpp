#include <FL/Fl.H>
#include "MainAppWindow.h"
#include <exception>

int main(int argc, char* argv[]) {
    //try {
        MainAppWindow windowApp(1000, 800, "Tile calculation");
    /*}
    catch (const std::exception& e) {
        std::cout<<e.what()<<std::endl;
    }
    catch (...) {
        std::cout <<"Unexpected ERROR" << std::endl;
    }*/
    return(Fl::run());
}