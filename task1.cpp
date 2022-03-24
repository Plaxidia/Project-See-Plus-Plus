
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

double   dot_p( double  vector_a[], double  vector_b[], double n)
{
    double   product  = 0;
    for (int i = 0; i < n; i++)
    {
        product += vector_a[i] * vector_b[i];
    }
    return product;
}

void gen_v( double  vector_a[], double  vector_b[], double random, int n)
{
    

    if(n<=5)
    {
        cout<<"enter the values of vector_a:"<<endl;
        for (int i = 0 ; i<n; i++)
        {
          cin>>vector_a[i];
        }
        cout<<"enter the values of vector_b"<<endl;
        for (int i = 0 ; i<n; i++)
        {
          cin>>vector_b[i];
        }
    }

    else if (n>5)

       {
        cout<<"generated values of vector_a:"<<endl;
        for (int i = 0 ; i<n; i++)
            {
              random=(rand() % 9) + 1;
              vector_a[i] = random;
              cout<< vector_a[i]<<" ";
              cout<<endl;
            }
            
        cout<<"generated values of vector_b:"<<endl;
        for (int i = 0 ; i<n; i++)
            {
              random =(rand() % 9) + 1;
              vector_b[i] = random;
              cout<<vector_b[i]<<"  ";
              cout<<endl;
            }
       }
}
void   gen_Matrix_vector(double matrix[],double vector[],double random, int m)
{
   if (m<=4)
   {
      cout<<"input elements  of the Matrix :"<<endl;
    for (int i = 0 ; i<m; i++)
    {
        for (int j = 0 ; j<m; j++)
        {
          cin>>matrix[i * m + j] ;
           //matrix[i * m + j] = i + j;
        }
    }
    
    cout<<"input elements  of the Vector :"<<endl;
       for (int i = 0 ; i<m; i++)
        {
            cin>>vector[i];
           // break;
        }
  }
    else if (m>4)
   {//generate elemnts   of the matrix randomly:
        cout<<"generate elements   of the matrix  :"<<endl;
        for ( int i = 0 ; i<m; i++)
          {
            for (int j = 0 ; j<m; j++)
            {
            random=(rand() % 9) + 1;
            matrix[i * m + j] = random;
            cout<<  matrix[i * m + j]<<" ";
            }
            cout<<endl;
          }
          cout<<"generate elements  of the Vector :"<<endl;
          
        for (int i = 0 ; i<m; i++)
        {
          random=(rand() % 9) + 1;
            vector[i] = random;
            cout<<vector[i]<<" ";
            cout<<endl;
        }
    // printing out the generated matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // notation matrix[i*n+j]  for 1d array equivalent to matrix[i][j] for 2d array
            cout<<matrix[i * m+ j]<<" ";
        }
        cout << endl;
    }
  }      
}
void  Matrix_vector_multiplication(int m,double matrix[],double vector[], double result[])

{
  int k;
    //double result[m]; // store the result
    for (int i = 0 ; i<m; i++)
    {
       result[i]=0;
    }
    for (int i = 0 ; i<m; i++)
    {
        for (int j = 0 ; j<m; j++)
        {
            result[i] += matrix[i * m + j] * vector[j];
        }
    }
}
void show_result( double result[],int  m)
  {
    //double result[m];
    //Show the result
    cout <<"final result"<<endl;
    for (int i = 0; i<m; i++) 
    {
        cout<<result[i]<<endl;
    }
    cout<<endl;
  }  
int main()
{
  srand((unsigned) time(0));
  int n=(rand() % 9) + 1;
  cout<<"input the size of the vector :"<<" ";
  cin>>n;
  double vector_a[n];
  double vector_b[n];
  double random;
  cout<<"Vector generator :"<<endl;
  gen_v(vector_a,vector_b,random, n);
  cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;
//const int m=5;//square matrix size
 int m=(rand() % 9) + 1;

cout<< "input the size of the matrix:"<< endl;
cin>>m;
cout<< "input the size of the vector:"<<endl;
cin>>m;
double matrix[m * m];//matrix is stored in 1d array of the n*n size, row by row
double vector[m];
double result[m];
cout<< "matrix vector generator  :"<< endl;
gen_Matrix_vector( matrix, vector, random, m);

cout<< "matrix multiplication: ";
Matrix_vector_multiplication(m,matrix,vector,result);
cout<< "the result :"<<endl;
show_result(result,m);
}