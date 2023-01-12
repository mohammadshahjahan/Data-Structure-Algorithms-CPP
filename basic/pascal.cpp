#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int l = 9;
    int mat[8][9] = {0};
    mat[0][1] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < l; j++)
        {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j =0;j<n-i;j++){
            cout<<"  ";
        }
        for (int j = 0; j < l; j++)
        {
            
            if(mat[i][j]!=0)
            {
                if(mat[i][j]>=10)
                cout << mat[i][j] << " ";
                else{
                    cout << mat[i][j] << "  ";
                }
            }
        }
        
        cout << endl;
    }
    return 0;
}