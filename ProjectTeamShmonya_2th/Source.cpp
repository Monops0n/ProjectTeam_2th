#include "Header.h"

void main()
{
    setlocale(LC_ALL, "ru");
    Shifr();
    int zadanie;
    do
    {
        clear();
        cout << "\t+-----------------------------------------------------+" << endl;
        cout << "\t|                                                     |" << endl;
        cout << "\t|          ������������ �� ����� ����������������     | " << endl;
        cout << "\t|                                                     |" << endl;
        cout << "\t+-----------------------------------------------------+" << endl;
        cout << "\t|                                                     |" << endl;
        cout << "\t|    1 - ����� ��� �������                            |" << endl;
        cout << "\t|    2 - ����� ��� �������������                      |" << endl;
        cout << "\t|    3 - �����                                        |" << endl;
        cout << "\t|                                                     |" << endl;
        cout << "\t+-----------------------------------------------------+" << endl << endl << endl;
        cout << "\t";
        cin >> zadanie;
        switch (zadanie)
        {
        case 1: mainstudent(); break;
        case 2: mainteacher(); break;
        case 3: cout << "\t����� �� ���������....." << endl << endl << endl; break;
        }
        if (zadanie != 1 && zadanie != 2 && zadanie != 3) cout << "\t������ �������� ���, ���������� ��� ���..." << endl << endl; Sleep(1000);
    } while (zadanie != 7);
    Shifr();
    Sleep(1000);
}