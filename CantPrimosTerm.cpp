#include<iostream>
using namespace std;

int main()
{
    int maxPrimo = 0, resultado; 
    int contResto[10];
    
    for(int v=0; v<10;v++){
    contResto[v]=0;
    }
    
    for (int y = 1; y < 10000; y++)
    {
        bool primo=1;
        for (int x=2; x<y; x++)
        {
            if (y%x==0)
                primo=0;
        }
        if (primo)
        {
        for (int z=1;z<10;z++)
        {
           resultado = (y - z);
            if (resultado%10 == 0)
            {
              contResto[z]++;
            }
        }
    }
    
    }
    for (int x =0 ; x<10; x++){
   
     cout << contResto[x] << endl;
     }
    return 0;
}