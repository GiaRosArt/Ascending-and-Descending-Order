// Ascending and Descending Order.cpp : Defines the entry point for the console application.
//

/*
Autor: Georgia Rossmann Martins
Description: C++ study exercise
*/

#include <vector>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

#ifdef _WIN32
#define WINPAUSE system(pause)
#endif

void main()
{
    std::vector <int> nmb;
    int qnt = 1;
    float avr = 0;

    cout << "This small program calculates the average of the numbers requested by the user and arranges them in ascending and descending sequences. \n" << endl;
    cout << "How many numbers to arrange?" << endl;
    cin >> qnt;
    nmb.resize(qnt);
    cout << "\n";

    for (int i = 0; i < qnt; i ++)
    {
        cout << "Please insert the ";
        cout << i + 1;
        cout << "o. number:" << endl;
        cin >> nmb[i];
        avr += nmb[i];
    }

    avr /= qnt;

    cout << "\n";
    cout << "The average is:" << endl;
    cout << avr;

    cout << "\n";
    cout << "The ascending order is:" << endl;

    for (int i = 0; i < qnt; i ++)
    {
        for (int j = 0; j < qnt; j++)
        {
            if (nmb[i] < nmb[j])
            {
                int k = nmb[j];
                nmb[j] = nmb[i];
                nmb[i] = k;
            }
        }
    }

    for (int i = 0; i < qnt; i++)
    {
        cout << nmb[i];
        if (i < qnt - 1)
        {
            cout << " < ";
        }
    }

    cout << "\n";
    cout << "The descending order is:" << endl;

    for (int i = 0; i < qnt; i++)
    {
        for (int j = 0; j < qnt; j++)
        {
            if (nmb[i] > nmb[j])
            {
                int k = nmb[j];
                nmb[j] = nmb[i];
                nmb[i] = k;
            }
        }
    }

    for (int i = 0; i < qnt; i++)
    {
        cout << nmb[i];
        if (i < qnt - 1)
        {
            cout << " > ";
        }
    }

    cout << "\n \n";
    system("pause");
}


