#include <bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)
int main()
{
    int X,Y; 
    X = Y = 10; 

    int NumWays[X][Y]; 
    NumWays[0][0] = 1;
    
    F(j,1,Y-1)
        NumWays[0][j] = 1;
    
    F(i,1,X-1)
        NumWays[i][0] = 1;
    
    F(i,1,X-1)
    {
        F(j,1,Y-1)
        {
            
            NumWays[i][j] = NumWays[i-1][j] + NumWays[i][j-1];
        }
    }

    cout<<"Number of ways from(0,0) to (X,Y) is "<<NumWays[X-1][Y-1];
    return 0;
}