/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,b, a[3][3];
    cout<<"Заполните матрицу"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"a["<<i<<"] ["<<j<<"] = ";
            cin>>a[i][j];
            
        }
        
    }
    cout<<"Идет расчет определителя матрицы 3х3"<<endl;
    b=a[0][0]*a[1][1]*a[2][2]-a[0][0]*a[1][2]*a[2][1]-a[0][1]*a[1][0]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-a[0][2]*a[1][1]*a[2][0];
    cout<<"Определитель матрицы = "<<b<<endl;
    return 0;
}
