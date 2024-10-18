#include <iostream>
#include <vector>
#include <random>  
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    std::random_device rd;  // ������ ��� ��������� ��������� �����
    std::mt19937 gen(rd());  // ��������� ��������� �����
    std::uniform_int_distribution<> dist(-100, 100);  // �������� ��������� ����� �� 1 �� 100



    /*int n;
    std::cout << "������ �������: ";
    std::cin >> n;

    std::vector<double> r(n); //������� ������

    // ��������� ������ ���������� �������
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- ����������� ������" << std::endl;



    // 1.1
    for (int i = 0; i < n; ++i) {
        r[i] *= 2;
        std::cout << r[i] << " ";
    }
    std::cout << "- ������, ���������� �� 2" << std::endl;


    // 1.2
    double a;
    std::cout << "������� ����� a: ";
    std::cin >> a;
    for (int i = 0; i < n; ++i) {
        r[i] -= a;
        std::cout << r[i] << " ";
    }
    std::cout << "- ������ ����� ����� �" << std::endl;


    // 1.3
    double first_element = r[0];
    if (first_element != 0) {
        for (int i = 0; i < n; ++i) {
            r[i] /= first_element;
            std::cout << r[i] << " ";
        }
    }
    else {
        std::cout << "������ ������� ������� ����� ����" << std::endl;
    }
    std::cout << "- ��������������� ������" << std::endl;*/




    /*int n1;
    std::cout << "������ �������: ";
    std::cin >> n1;
    std::vector<double> r1(n1);
    for (int i = 0; i < n1; ++i) {
        r1[i] = dist(gen);
        std::cout << r1[i] << " ";
    }
    std::cout << "- ����������� ������" << std::endl;



    //2.1
    float summ = 0;
    for (int i = 0; i < n1; ++i) {
        summ += r1[i];
    }
    std::cout << "����� ��������� �������:" << " " << summ << std::endl;


    //2.2
    float summ1 = 0;
    for (int i = 0; i < n1; ++i) {
        summ1 += pow(r1[i],2);
    }
    std::cout << "����� ��������� ��������� �������:" << " " << summ1 << std::endl;


    //2.3
    float summ2 = 0;
    for (int i = 0; i < 6; ++i) {
        summ2 += r1[i];
    }
    std::cout << "����� ������ ����� ��������� �������:" << " " << summ2 << std::endl;


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
    std::cout << "����� c k1 �� k2 ��������� �������:" << " " << summ3 << std::endl;


    //2.5
    float srar = 0;
    srar = summ / n1;
    std::cout << "������� ��������������:" << " " << srar << std::endl;


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
    k = s2 - s1 + 1; //���������� ���������
    for (s1; s1 <= s2; ++s1) {
        summ4 += r1[s1];
    }
    srar1 = summ4 / k;
    std::cout << "������� �������������� � s1 �� s2 ���������::" << " " << srar1 << std::endl;*/



    //3

   /* int n = 20;
    std::vector<double> r(n);
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- ����������� ������" << std::endl;


    int r2[3];
    for (int i = 0; i < 3; ++i) {     //��������� ������ ��� �������
        r2[i] = r[i];
    }


    for (int i = 0; i < 3; ++i) {   //���������� ��������� ��� �������� � ������
        r[i] = r[r.size() - 3 + i];
    }

    for (int i = 0; i < 3; ++i) {    // ���������� ������ ��� � ����� �� ������������ �������
        r[r.size() - 3 + i] = r2[i];
    }


    for (int i = 0; i < n; ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- �������� ������" << std::endl;*/




    //4.1

    /*int n;
    std::cout << "������ �������: ";
    std::cin >> n;
    std::vector<int> r(n);
    for (int i = 0; i < n; ++i) {
        r[i] = dist(gen);
        std::cout << r[i] << " ";
    }
    std::cout << "- ����������� ������" << std::endl;

    
    
    for (int i = 0; i < r.size(); ++i) {
        if (r[i] < 0) {
            r.erase(r.begin() + i); //������� ��������� ������������� �������
            break;
        }
    }

    for (int i = 0; i < r.size(); ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- ���������� ������1" << std::endl;
    //4.2
    for (int i =  r.size() - 1; i >= 0; --i) {
        if (r[i] % 2 == 0) {
            r.erase(r.begin() + i); // ������� ��������� ������ �������
            break;
            
        }
    }
    
     for (int i = 0; i < n; ++i) {
        std::cout << r[i] << " ";
    }
    std::cout << "- ���������� ������2" << std::endl;*/



    //5
   
    /*std::vector<char> r;
    char s;

    std::cout << "������� �������� ������: ";
    while (std::cin.get(s) && s != '\n') {  // ������ � ��������� ������� �� enter
        r.push_back(s);      // ��������� ������ � ������
    }

    
    int l = r.size(); //���������� ��������

    if (l % 2 == 0) {
        std::cout << "���������� �������� ������." << std::endl;
    }
    else {
        std::cout << "���������� �������� ��������." << std::endl;
    }
    */

    //6

    /*std::vector<char> r1;
    std::vector<char> r2;

    char s1;
    std::cout << "�������1:";  
    while (std::cin.get(s1) && s1!= '\n') {  //������ � ��������� ������ ������
        r1.push_back(s1); //��������� ������ � ������
    }

    char s2;
    std::cout << "�������2:";
    while (std::cin.get(s2) && s2 != '\n') {
        r2.push_back(s2);
    }

    int l1 = r1.size();  //����� ������ �������
    int l2 = r2.size();  // ����� ������

    if (l1 > l2) {
        std::cout << "������ �������" << std::endl;
    }
    else if (l2 > l1) {
        std::cout << "������ �������" << std::endl;
    }
    else {
        std::cout << "��� ���������� �� �����" << std::endl;
    }*/


    // 7
    
    /*std::vector<char> r1;  //������ ������� ������
    std::vector<char> r2;   //������ ������� ������
    std::vector<char> r3;   //������ �������� ������

    char s1;
    char s2;
    char s3;

    std::cout << "�����1:";
    while (std::cin.get(s1) && s1 != '\n') {  //��������� � ��������� ������� � ������1
        r1.push_back(s1);
    }

    std::cout << "�����2:";                 
    while (std::cin.get(s2) && s2!='\n') {    //��������� � ��������� ������� � ������2
        r2.push_back(s2);
    }

    std::cout << "�����3:";
    while (std::cin.get(s3) && s3 != '\n') {    //��������� � ��������� ������� � ������3
        r3.push_back(s3);
    }

    int l1 = r1.size();  //���������� �������� �������
    int l2 = r2.size();   //���������� �������� �������
    int l3 = r3.size();   //���������� �������� ��������


    if (l1 > l2 && l1 > l3) {                 //��������� � ������� �� �����
        std::cout << "������ �������:";
        for (int i = 0; i < r1.size(); ++i) {
            std::cout << r1[i];
        }
    }
    else if(l2 > l1 && l2 > l3) {
        std::cout << "������ �������:";
        for (int i = 0; i < r2.size(); ++i) {
            std::cout << r2[i];
        }
    }
    else {
        std::cout << "������ �������:";
        for (int i = 0; i < r3.size(); ++i) {
            std::cout << r3[i];
        }
    }

    if (l1 < l2 && l1 < l3) {
        std::cout << "������ ��������:";
        for (int i = 0; i < r1.size(); ++i) {
            std::cout << r1[i];
        }
    }
    else if (l2 < l1 && l2 < l3) {
        std::cout << "������ ��������:";
        for (int i = 0; i < r2.size(); ++i) {
            std::cout << r2[i];
        }
    }
    else {
        std::cout << " " << "������ �������� : ";
        for (int i = 0; i < r3.size(); ++i) {
            std::cout << r3[i];
        }
    }*/



    //8
   
    /*std::vector<char> r;     //������ ��� �����
    char s;
    std::cout << "������� �����:";
    while (std::cin.get(s) && s!='\n') {   // ��������� � ���������� ������� � ������
        r.push_back(s);
    }


    int m;      // �����, � �������� ����
    std::cout << "m:";
    std::cin >> m;

    int n;      // �����, �� ������� ����
    std::cout << "n:";
    std::cin >> n;


    for (int i = m; i <= n; ++i) {   // ������� �� ����� ����� ����� ��� ��������� ����������
        std::cout << r[i];
    }*/


    //9

    /*std::vector<char> r;  //������ ��� �����
    char s;
    std::cout << "������� �����:";
    while (std::cin.get(s) && s!= '\n') {  //��������� ������� � ��������� � ������ 
        r.push_back(s);
    }


    int l = r.size();   //���������� �������� � ����� �����

    for (int i = 0; i < l; ++i) {   //������� ������� ���������, ������ ����� �����
        std::cout << "*";
    }

    for (int i = 0; i < r.size(); ++i) {   // ������� ���� �����
        std::cout << r[i];
    }
    for (int i = 0; i < l; ++i) {   // ��������� �����������
        std::cout << "*";
    }*/




     //10

     /*std::vector<char> r;
     char s;
     std::cout << "������� �����������:";
     while (std::cin.get(s) && s != '\n') {
         r.push_back(s);
     }


     int l = r.size();  //���������� �������� 
     int k = 0;   // ������� ���� �

     for (char i:r) {   //�������� �� ������� � ���������� ������ ������ � i
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

     std::string k = "Can you can a can as a canner can can a can?";   //�������� ������
     std::string w;
     std::cout << "������� �����:";
     std::cin >> w;
     std::vector<char> r;



     




    return 0;
}
