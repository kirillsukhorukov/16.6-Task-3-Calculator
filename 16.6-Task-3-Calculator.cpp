#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "-----Calculator-----" << endl;
    
    string buffer;
    
    //Цикл работы калькулятора
    while (true)
    {
        //Ввод строки с действием
        cout << "Enter the operation (+-*/) with two numbers: ";
        cin >> buffer;
        //Организация выхода из цикла
        if (buffer == "exit") break;
        //Разделение строки на составляющие
        istringstream bufferStream(buffer);
        double a, b;
        char operation;
        bufferStream >> a >> operation >> b;
        //Обработка команды
        if (operation == '+') cout << a << operation << b << '=' << a + b << endl;
        else if (operation == '-') cout << a << operation << b << '=' << a - b << endl;
        else if (operation == '*') cout << a << operation << b << '=' << a * b << endl;
        else if (operation == '/') cout << a << operation << b << '=' << a / b << endl;
        else cout << "Incorrect operation!" << endl;
    }
   
    return 0;
}
