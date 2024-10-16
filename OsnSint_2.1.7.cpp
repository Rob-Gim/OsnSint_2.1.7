#include <iostream>
#include <fstream>      //библиотека ввода из файла
#include <string>

using namespace std;

int main() {
    string s;
    ofstream fout("output.txt", ios_base::trunc);
    fout << "a";
    fout.close();

    fstream fin;
    fin.open("output.txt");	        //путь к файлу вывода    
    if (fin.is_open()) {
            fin >> s;
            cout << s << endl;
    }
    fin.close();                    //закрытие файла записи
   
    fout.open("output.txt", ios_base::app);
    fout << "b";
    fout.close();

    fin.open("output.txt");	        //путь к файлу вывода    
    if (fin.is_open()) {
            fin >> s;
            cout << s;
    }
    fin.close();               //закрытие файла записи
    fout.close();                    //закрытие файла чтения
}