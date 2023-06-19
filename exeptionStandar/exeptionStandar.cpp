#include <iostream>
#include <exeeption>
//untuk obyek exeption yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;
|
int main()
{
    cout << "Awal Program" << endl;  //penanda 1:
    try {
        array<int, 3> data = {1,2,3};
