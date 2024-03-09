// arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//a program that determines the highest and lowest mark then determines the total of all the marks
const int ARRAY_SIZE = 5;
int mark[] = { 30,5,99,66,70 };
string name[] = { "'ana","kat","blessing","jeff","Chris" };

int main()
{
    //variable declaration
    int temp;
    string tempName;

    //introduction of for loop
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        //the array must be sorted 5 times'
        for (int k = 0; k < ARRAY_SIZE - 1; k++)
        {
            if (mark[k] > mark[k + 1])
            {
                //swap marks
                temp = mark[k];
                mark[k] = mark[k + 1];
                mark[k + 1] = temp;
                //swap names
                tempName = name[k];
                name[k] = name[k + 1];
                name[k + 1] = tempName;
            }
        }

    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << name[i] << ": " << mark[i] << endl;
    }
    return 0;
}
