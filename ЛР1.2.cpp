/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char b;
    int g=0;
    string f="asdf";
    cout<<"Введите символ"<<endl;
    cin>>b;
    while(!((b>='A'&& b<='Z')||(b>='a'&& b<='z')))
    {
        cout<<"Введен не символ\n"<<"Введите символ"<<endl;
        cin.ignore();
        cin>>b;
        
    }
    cout<<"Введите строку"<<endl;
    cin.ignore();
    getline(cin,f);
    while(!(f.length()>1))
    {
        cout<<"Введена не строка\n"<<"Введите строку"<<endl;
        getline(cin,f);
        
    }
    cout<<"Введите искомый символ"<<endl;
    cin>>b;
    for(int i=0;i<f.length();i++)
    {
        if(f[i]==b)
        {
            cout<<"Искомый символ стоит в строке под номером "<<i+1<<endl;
            g++;
        }
        
    }
    if(g==0)
    {
        cout<<"Искомого символа в строке не найдено"<<endl;
        
    }
    
}
