#include <iostream>

using namespace std;
int main()
{
    int a,b,c,d;
    int temp = 0;
    cout<<"Enter number of rows and columns for the first matrix: \n";
    cin>>a>>b;
    cout<<"Enter number of rows and columns for the second matrix: \n";
    cin>>c>>d;

    int matrix1[a][b];
    int matrix2[c][d];

    if (b==c){
        cout<<"Elements of the first matrix: "<<endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin>> matrix1[i][j];
            }
        }

        cout<<"Elements of the second matrix: "<<endl;
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                cin>> matrix2[i][j];
            }
        }

        cout<<"Resultant matrix: "<<endl;
        for (int k = 0; k < a; k++)
        {
            for (int i = 0; i < d; i++)
            {
                for (int j = 0; j < b; j++)
                {
                temp += matrix1[k][j] * matrix2[j][i];
                }
            cout<<temp<<"  ";
            }
        cout<<"\n";   
        }
    }
    else
    {
        cout<<"Enter correct rows and columns!";
    }
    
    return 0;
}