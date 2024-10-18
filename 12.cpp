#include <iostream>
#include <vector>
#include <random>  
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    std::random_device rd;  // объект для получения случайных чисел
    std::mt19937 gen(rd());  // генератор случайных чисел
    std::uniform_int_distribution<> dist(-100, 100);  // диапазон случайных чисел от 1 до 100



    /*int n;
    std::cout << "размер массива: ";
    std::cin >> n;

    std::vector<double> r(n); //создаем вектор

    // заполняем массив случайными числами
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- изначальный массив" << std::endl;



    // 1.1
    for (int i = 0; i < n; ++i) {
        r[i] *= 2;
        std::cout << r[i] << " ";
    }
    std::cout << "- массив, умноженный на 2" << std::endl;


    // 1.2
    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;
    for (int i = 0; i < n; ++i) {
        r[i] -= a;
        std::cout << r[i] << " ";
    }
    std::cout << "- массив минус число а" << std::endl;


    // 1.3
    double first_element = r[0];
    if (first_element != 0) {
        for (int i = 0; i < n; ++i) {
            r[i] /= first_element;
            std::cout << r[i] << " ";
        }
    }
    else {
        std::cout << "первый элемент массива равен нулю" << std::endl;
    }
    std::cout << "- преобразованный массив" << std::endl;*/




    /*int n1;
    std::cout << "размер массива: ";
    std::cin >> n1;
    std::vector<double> r1(n1);
    for (int i = 0; i < n1; ++i) {
        r1[i] = dist(gen);
        std::cout << r1[i] << " ";
    }
    std::cout << "- изначальный массив" << std::endl;



    //2.1
    float summ = 0;
    for (int i = 0; i < n1; ++i) {
        summ += r1[i];
    }
    std::cout << "сумма элементов массива:" << " " << summ << std::endl;


    //2.2
    float summ1 = 0;
    for (int i = 0; i < n1; ++i) {
        summ1 += pow(r1[i],2);
    }
    std::cout << "сумма квадратов элементов массива:" << " " << summ1 << std::endl;


    //2.3
    float summ2 = 0;
    for (int i = 0; i < 6; ++i) {
        summ2 += r1[i];
    }
    std::cout << "сумма первых шести элементов массива:" << " " << summ2 << std::endl;


    //2.4
    float summ3 = 0;
    int k1;
    std::cout << "k1: ";
    std::cin >> k1;
    k1 -= 1;
    int k2;
    std::cout << "k2: ";
    std::cin >> k2;
    k2 -= 1;
    for (k1; k1 <= k2; ++k1) {
        summ3 += r1[k1];
    }
    std::cout << "сумма c k1 по k2 элементов массива:" << " " << summ3 << std::endl;


    //2.5
    float srar = 0;
    srar = summ / n1;
    std::cout << "среднее арифметическое:" << " " << srar << std::endl;


    //2.6
    int s1;
    std::cout << "s1: ";
    std::cin >> s1;
    s1 -= 1;
    int s2;
    std::cout << "s2: ";
    std::cin >> s2;
    s2 -= 1;

    float summ4 = 0;
    int k;
    float srar1 = 0;
    k = s2 - s1 + 1; //количество элементов
    for (s1; s1 <= s2; ++s1) {
        summ4 += r1[s1];
    }
    srar1 = summ4 / k;
    std::cout << "среднее арифметическое с s1 по s2 элементов::" << " " << srar1 << std::endl;*/



    //3

   /* int n = 20;
    std::vector<double> r(n);
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- изначальный массив" << std::endl;


    int r2[3];
    for (int i = 0; i < 3; ++i) {     //сохраняем первые три символа
        r2[i] = r[i];
    }


    for (int i = 0; i < 3; ++i) {   //перемещаем последние три элемента в начало
        r[i] = r[r.size() - 3 + i];
    }

    for (int i = 0; i < 3; ++i) {    // перемещаем первые три в конец из сохраненного массива
        r[r.size() - 3 + i] = r2[i];
    }


    for (int i = 0; i < n; ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- изменный массив" << std::endl;*/




    //4.1

    /*int n;
    std::cout << "размер массива: ";
    std::cin >> n;
    std::vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- изначальный массив" << std::endl;

    
    
    for (int i = 0; i < r.size(); ++i) {
        if (r[i] < 0) {
            r.erase(r.begin() + i); //удаляем найденный отрицательный элемент
            break;
        }
    }

    for (int i = 0; i < r.size(); ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- измененный массив1" << std::endl;
    //4.2
    for (int i =  r.size() - 1; i >= 0; --i) {
        if (r[i] % 2 == 0) {
            r.erase(r.begin() + i); // удаляем найденный четный элемент
            break;
            
        }
    }
    
     for (int i = 0; i < n; ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- измененный массив2" << std::endl;*/



    //5
   
    /*std::vector<char> r;
    char s;

    std::cout << "Введите название города: ";
    while (std::cin.get(s) && s != '\n') {  // вводим и считываем символы до enter
        r.push_back(s);      // добавляем символ в вектор
    }

    
    int l = r.size(); //количество символов

    if (l % 2 == 0) {
        std::cout << "количество символов четное." << std::endl;
    }
    else {
        std::cout << "количество символов нечетное." << std::endl;
    }
    */

    //6

    /*std::vector<char> r1;
    std::vector<char> r2;

    char s1;
    std::cout << "фамилия1:";  
    while (std::cin.get(s1) && s1!= '\n') {  //вводим и считываем каждый символ
        r1.push_back(s1); //добавляем символ в вектор
    }

    char s2;
    std::cout << "фамилия2:";
    while (std::cin.get(s2) && s2 != '\n') {
        r2.push_back(s2);
    }

    int l1 = r1.size();  //длина первой фамилии
    int l2 = r2.size();  // длина второй

    if (l1 > l2) {
        std::cout << "первая длиннее" << std::endl;
    }
    else if (l2 > l1) {
        std::cout << "вторая длиннее" << std::endl;
    }
    else {
        std::cout << "они одинаковые по длине" << std::endl;
    }*/


    // 7
    
    /*std::vector<char> r1;  //вектор первого города
    std::vector<char> r2;   //вектор второго города
    std::vector<char> r3;   //вектор третьего города

    char s1;
    char s2;
    char s3;

    std::cout << "город1:";
    while (std::cin.get(s1) && s1 != '\n') {  //считываем и добавляем символы в вектор1
        r1.push_back(s1);
    }

    std::cout << "город2:";                 
    while (std::cin.get(s2) && s2!='\n') {    //считываем и добавляем символы в вектор2
        r2.push_back(s2);
    }

    std::cout << "город3:";
    while (std::cin.get(s3) && s3 != '\n') {    //считываем и добавляем символы в вектор3
        r3.push_back(s3);
    }

    int l1 = r1.size();  //количество символов первого
    int l2 = r2.size();   //количество символов второго
    int l3 = r3.size();   //количество символов третьего


    if (l1 > l2 && l1 > l3) {                 //проверяем и выводим на экран
        std::cout << "саммый длинный:";
        for (int i = 0; i < r1.size(); ++i) {
            std::cout << r1[i];
        }
    }
    else if(l2 > l1 && l2 > l3) {
        std::cout << "саммый длинный:";
        for (int i = 0; i < r2.size(); ++i) {
            std::cout << r2[i];
        }
    }
    else {
        std::cout << "саммый длинный:";
        for (int i = 0; i < r3.size(); ++i) {
            std::cout << r3[i];
        }
    }

    if (l1 < l2 && l1 < l3) {
        std::cout << "саммый короткий:";
        for (int i = 0; i < r1.size(); ++i) {
            std::cout << r1[i];
        }
    }
    else if (l2 < l1 && l2 < l3) {
        std::cout << "саммый короткий:";
        for (int i = 0; i < r2.size(); ++i) {
            std::cout << r2[i];
        }
    }
    else {
        std::cout << " " << "саммый короткий : ";
        for (int i = 0; i < r3.size(); ++i) {
            std::cout << r3[i];
        }
    }*/



    //8
   
    /*std::vector<char> r;     //вектор для слова
    char s;
    std::cout << "введите слово:";
    while (std::cin.get(s) && s!='\n') {   // считываем и довбавляем символы в вектор
        r.push_back(s);
    }


    int m;      // число, с которого идем
    std::cout << "m:";
    std::cin >> m;

    int n;      // число, по которое идем
    std::cout << "n:";
    std::cin >> n;


    for (int i = m; i <= n; ++i) {   // выводим на экран кусок слова для заданного промежутка
        std::cout << r[i];
    }*/


    //9

    /*std::vector<char> r;  //вектор для слова
    char s;
    std::cout << "введите слово:";
    while (std::cin.get(s) && s!= '\n') {  //считываем символы и добавляем в вектор 
        r.push_back(s);
    }


    int l = r.size();   //количество символов в нашем слове

    for (int i = 0; i < l; ++i) {   //сначала выводим звездочки, равные длине слова
        std::cout << "*";
    }

    for (int i = 0; i < r.size(); ++i) {   // выводим само слово
        std::cout << r[i];
    }
    for (int i = 0; i < l; ++i) {   // завершаем звездочками
        std::cout << "*";
    }*/




     //10

     /*std::vector<char> r;
     char s;
     std::cout << "введите предложение:";
     while (std::cin.get(s) && s != '\n') {
         r.push_back(s);
     }


     int l = r.size();  //количество символов 
     int k = 0;   // счетчик букв а

     for (char i:r) {   //проходим по вектору и сравниваем каждый символ с i
         if (i == 'a') {
             k += 1;
         }
     }

     if (k == 0) {
         std::cout <<"0%" << std::endl;
     }

     else {
         float h = (k * 100) / l;
         std::cout << h << "%" << std::endl;
     }*/



     //11

     std::string k = "Can you can a can as a canner can can a can?";   //исходная строка
     std::string w;
     std::cout << "введите слово:";
     std::cin >> w;
     std::vector<char> r;



     




    return 0;
}
