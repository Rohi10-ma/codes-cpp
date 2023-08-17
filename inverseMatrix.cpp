#include <iostream>
#include <math.h>
using namespace std;
void adjoint_matrix( int adj[][3],int m[][3]);
void matrix_form(int matrix[][3]);
void get_input( int mat[][3]);
int Determinant (int arr[][3]);
void transverse(int trans[3][3] , int mat[3][3]);
void inverse (int inverse[][3] ,int adj[][3], int det);

int main()
{
    int b;
    int mat[3][3];
    int cofact_M[3][3];
    int adj_M[3][3];
    int inverse_M[3][3];
    
    get_input(mat);
    b=Determinant(mat);
    cout<<endl<<" Determinant is = "<<b<<endl<<endl;
    
    cout<<" || The adjoint matrix ||"<<endl<<endl;
    adjoint_matrix(cofact_M,mat);
    //finds adjoint matrix from cofactor matrix
    transverse(adj_M,cofact_M);
    //displays adjoint matrix
    matrix_form(adj_M);
    
    inverse(inverse_M , adj_M , b);
    
    cout<<endl;
    //inverse matrix
     cout<<" || The inverse matrix ||"<<endl<<endl;
    matrix_form (inverse_M);
    
    return 0;
}

void adjoint_matrix( int adj[3][3],int m[3][3])
{
            adj[0][0] = (1) * ( m[0][0]*((m[1][1]*m[2][2])-(m[2][1])*m[1][2]) );
            adj[0][1] = (-1) * ( m[0][1]*((m[1][0]*m[2][2])-(m[2][0])*m[1][2]) );
            adj[0][2] = (1) * ( m[0][2]*((m[1][0]*m[2][1])-(m[2][0])*m[1][1]) );
            
            adj[1][0] = (-1) * ( m[1][0]*((m[0][1]*m[2][2])-(m[2][1])*m[0][2]) );
            adj[1][1] = (1) * ( m[1][1]*((m[0][0]*m[2][2])-(m[2][0])*m[0][2]) );
            adj[1][2] = (-1) * ( m[1][2]*((m[0][0]*m[2][1])-(m[2][0])*m[0][1]) );
            
            adj[2][0] = (1) * ( m[2][0]*((m[0][1]*m[1][2])-(m[1][1])*m[0][2]) );
            adj[2][1] = (-1) * ( m[2][1]*((m[0][0]*m[1][2])-(m[1][0])*m[0][2]) );
            adj[2][2] = (1) * ( m[2][2]*((m[0][0]*m[1][1])-(m[1][0])*m[0][1]) );

}

void matrix_form(int matrix[][3])
{
    	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<" "<< matrix[i][j] << " ";
		}
		cout << endl;
	}

}

void get_input( int mat[][3])
{
	int a;
	for ( int i = 0; i < 3; i++)
	{
		cout << " ****Input of row**** ' " << i + 1 << " '" << endl << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << " Enter a number = ";
			cin >> a;
			mat[i][j] = a;
		}
		cout << endl;
	}
}

int Determinant (int arr[][3])
{
    int deter;
    int a[3];
    
    a[0]= arr[0][0]*((arr[1][1])*(arr[2][2]) - (arr [2][1])*(arr[1][2]));
    a[1]= arr[0][1]*((arr[1][0])*(arr[2][2]) - (arr [2][0])*(arr[1][2]));
    a[2]= arr[0][2]*((arr[1][0])*(arr[2][1]) - (arr [2][0])*(arr[1][1]));
    
    deter = a[0] - a[1] + a[2];
    
    return deter;
}

void transverse(int trans[3][3] , int mat[3][3])
{
    for ( int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			trans[i][j] = mat[j][i];
		}
	}
}

void inverse (int inverse[][3] ,int adj[][3], int det)
{
      for ( int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			inverse[i][j] = (1.0 / det) * adj[i][j];
		}
	}
}