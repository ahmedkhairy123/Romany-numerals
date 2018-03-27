// FCI � Programming 1 � 2018 - Assignment 2
// Program Name: Roman numerals.cpp
// Last Modification Date: 02/03/2018 .
// Author2 and ID and Group: Ahmed Thabet Khairy  20160009 .
// Author3 and ID and Group: Alaa Elsaed Mohamed  20160148 .
// Teaching Assistant: Ashraf Mohey .
// Purpose: return the year written as a four-digit Arabic to the year written in Roman numerals.

#include <iostream>

using namespace std;

int main()
{
    int N=0,x ,y;
    while(N==0)
    {
        cout <<"Hello user!!! "<<endl;
        cout <<"please enter the year as a four digit Arabic: ";
        cin>>x;
        if (x>999)
        {
            for (y=x/1000;y>0;y--)
                cout <<"M";
            x=x%100;
        }
        if (x==999)
        {
            cout <<"MI";
            x=x-999;
        }
        if (x==995)
        {
            cout <<"VM";
            x=x-995;
        }
        if (x==990)
        {
            cout <<"XM";
            x=x-990;
        }
        if (x==950)
        {
            cout <<"LM";
            x=x-950;
        }
        if (x==900)
        {
            cout <<"CM";
            x=x-900;
        }
        if (x>499)
        {
            for (y=x/500;y>0;y--)
                cout <<"D";
            x=x%500;
        }
        if (x==499)
        {
            cout <<"ID";
            x=x-499;
        }
        if (x==495)
        {
            cout <<"VD";
            x=x-495;
        }
        if (x==490)
        {
            cout <<"XD";
            x=x-490;
        }
        if (x==450)
        {
            cout <<"LD";
            x=x-450;
        }
        if (x==400)
        {
            cout <<"CD";
            x=x-400;
        }
        if (x>99)
        {
            for (y=x/100;y>0;y--)
                cout <<"C";
            x=x%100;
        }
        if (x==99)
        {
            cout <<"IC";
            x=x-99;
        }
        if (x==95)
        {
            cout <<"VC";
            x=x-95;
        }
        if (x==90)
        {
            cout <<"XC";
            x=x-90;
        }
        if (x>49)
        {
            for (y=x/50;y>0;y--)
                cout <<"L";
            x=x%50;
        }
        if (x==49)
        {
            cout <<"IL";
            x=x-49;
        }
        if (x==45)
        {
            cout <<"VL";
            x=x-45;
        }
        if (x==40)
        {
            cout <<"XL";
            x=x-40;
        }
        if (x>9)
        {
            for (y=x/10;y>0;y--)
                cout <<"X";
            x=x%10;
        }
        if (x==9)
        {
            cout <<"IX";
            x=x-9;
        }
        if (x==4)
        {
            for (y=x/5;y>0;y--)
                cout <<"V";
            x=x%5;
        }
        if (x==4)
        {
            cout <<"IV";
            x=x-4;
        }
        for (y=x;y>0;y--)
            cout<<"I";
        cout <<endl<<"enter 0 to conttinue: ";
        cin >>N;

    }


    return 0;
}
