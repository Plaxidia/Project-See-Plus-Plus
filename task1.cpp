/*

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
void   gen_Matrix_vector(double random)
{ 
  // row  and colum size definition for the matrix A
    
    int row_size = 0;//matrix_size
    int col_size = 0;
    int A[row_size][col_size];  // Matrix A
    int X[row_size]; // vector
    

    cout<<"row size: "<<endl;
    cin>>row_size;
    
    cout<<"column size :"<<endl;
    cin>>col_size;
    
    // the Vector must be equal to the col size of the Matrix A
    do{
        cout<<"vector size: "<<endl;
        cin>>row_size;//matrix size = vector size
      }
  while(row_size!= col_size);
   if (row_size<=4) 
   {
    // input elements of the matrix A
    cout<<"input elements  of the matrix A :"<<endl;
    for (int i = 0 ; i<row_size; i++) 
    {
        for (int j = 0 ; j<col_size; j++) 
        {
            cin>>A[i][j];
        }
    }

    // input elements of the vector X
    cout<<"input elements  of the Vector X:"<<endl;
       for (int i = 0 ; i<row_size; i++) 
        {
            cin>>X[i];
        }
  }
    else if (row_size>4)
   {  
     //generate elemnts   of the matrix A :
        cout<<"generate elemnts   of the matrix A :"<<endl;
        for (int i = 0 ; i<row_size; i++) 
          {
            for (int j = 0 ; j<col_size; j++) 
            {
            random=(rand() % 9) + 1;    
            A[i][j] = random;
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
          }

    // input elements of the vector X
         cout<<"generate elements  of the Vector X:"<<endl;
        for (int i = 0 ; i<row_size; i++) 
        {
          random=(rand() % 9) + 1;    
            X[i] = random;
            cout<<X[i]<<" ";
            cout<<endl;  
        }
  }
}
void  Matrix_vector_multiplication()
{ 
    int row_size = 0;
    int col_size = 0;
     
    int A[row_size][col_size];  // Matrix A
    int X[row_size]; // vector
      Perform multiplication
     Example : A * X
     1 -1 2     2
     0 -3 1     1
                0   
    result:
          1
         -3
    int result[row_size]; // store the result
    for (int i = 0 ; i<row_size; i++) 
    {
       result[i]=0;
    }
    for (int i = 0 ; i<row_size; i++) 
    {
        for (int j = 0 ; j<col_size; j++) 
        {
            result[i] += A[i][j] * X[j];
        }
    }
      // Show the result
    cout<<"Final Result:"<<endl;
    for (int i = 0; i<row_size; i++) 
    {
        cout<<result[i]<<endl;
    }
    cout<<endl;
    //return result[col_size];
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
  cout<< "matrix vector generator:"<< endl;
  gen_Matrix_vector(random);
  cout<< "matrix multiplication:"<< endl;
  
  Matrix_vector_multiplication();
  
  return 0;
   
}
*/
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
void   gen_Matrix_vector(double random, int vector_size, int row_size,int col_size )
{
    int A[row_size][col_size];  // Matrix A
    int X[row_size]; // vector
   if (row_size<=4)
   {
    // input elements of the matrix A
    cout<<"input elements  of the matrix A :"<<endl;
    for (int i = 0 ; i<row_size; i++)
    {
        for (int j = 0 ; j<col_size; j++)
        {
            cin>>A[i][j];
        }
    }

    // input elements of the vector X
    cout<<"input elements  of the Vector X:"<<endl;
       for (int i = 0 ; i<vector_size; i++)
        {
            cin>>X[i];
        }
  }
    else if (row_size>4)
   {
     //generate elemnts   of the matrix A :
        cout<<"generate elemnts   of the matrix A :"<<endl;
        for (int i = 0 ; i<row_size; i++)
          {
            for (int j = 0 ; j<col_size; j++)
            {
            random=(rand() % 9) + 1;
            A[i][j] = random;
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
          }

    // input elements of the vector X
         cout<<"generate elements  of the Vector X:"<<endl;
        for (int i = 0 ; i<row_size; i++)
        {
          random=(rand() % 9) + 1;
            X[i] = random;
            cout<<X[i]<<" ";
            cout<<endl;
        }
  }
}

void  Matrix_vector_multiplication( int vector_size, int row_size,int col_size )
{

    int A[row_size][col_size];  // Matrix A
    int X[row_size]; // vector
    /*  Perform multiplication
     Example : A * X
     1 -1 2     2
     0 -3 1     1
                0
    result:
          1
         -3
     */
    int result[row_size]; // store the result
    for (int i = 0 ; i<row_size; i++)
    {
       result[i]=0;
    }
    for (int i = 0 ; i<row_size; i++)
    {
        for (int j = 0 ; j<col_size; j++)
        {
            result[i] += A[i][j] * X[j];
        }
    }
      // Show the result
    cout<<"Final Result:"<<endl;
    for (int i = 0; i<row_size; i++)
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
  cout<< "matrix vector generator:"<< endl;

// row  and colum size definition for the matrix A
      int row_size = 0;//matrix_size
      int col_size = 0;
      int vector_size = 0 ;
      
      cout<<"row size: "<<endl;
      cin>>row_size;
      
      cout<<"column size :"<<endl;
      cin>>col_size;  

      int A[row_size][col_size];
      // the Vector must not be equal to the col size of the Matrix A
      do{
          cout<<"vector size: "<<endl;
          cin>>vector_size;//matrix size = vector size
        }
      while(row_size != col_size);
      

      int X[vector_size];

      gen_Matrix_vector(random, vector_size, row_size, col_size);

      cout<< "matrix multiplication: "<< endl;
      Matrix_vector_multiplication(vector_size ,row_size ,col_size);

}

