/*
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

void gen_v( double  vector_a[], double  vector_b[],double random)
{ 
    int min;
    int max;
    srand((unsigned) time(0));
    int n = (rand()%(max-min+1))+ min;
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
        cout<<"generate the  values of vector_a:"<<endl;
        for (int i = 0 ; i<n; i++)
            {
              random = (rand()%(max-min+1) )+ min;
              vector_a[i] = random;
              cout<< vector_a[i]<<" ";
            }
        cout<<"generate the  values of vector_b:"<<endl;
        for (int i = 0 ; i<n; i++)
            {
              random = (rand()%(max-min+1) )+ min;
              vector_b[i] = random;
              cout<<vector_b[i]<<"  ";
            }
       }
 cout<<"the value of n :"<< n<<endl;
}

double   dot_p( double  vector_a[], double  vector_b[], double   n)
{
    double   product  = 0;
    for (int i = 0; i < n; i++)
    {
        product += vector_a[i] * vector_b[i];
    }
    return product;
}
int main()
{
    int max= 9;
    int min = 1;
    srand((unsigned) time(0));
    int n = (rand()%(max-min+1))+min;
    //cout<<"the value of n :"<< n<<endl;
    double vector_a[n];
    double vector_b[n];
    double random;
    cout<<" Vector generator :"<<endl;
    gen_v(vector_a,vector_b,random);
    cout<< "Dot product: "<<endl;
    dot_p( vector_a,vector_b,n);
    return 0;
        
}


//end/////

//new code starts here////
//final presentation for 25 nov
double   dot_p( double  vector_a[], double  vector_b[], double   n)
{
    double   product  = 0;
    for (int i = 0; i < n; i++)
    {
        product += vector_a[i] * vector_b[i];
    }
    return product;
}

void gen_v( double  vector_a[], double  vector_b[], double random)
{ 
    int n=(rand() % 7) + 1;
    cout<<"The value of n is: "<<n<<endl;

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
               random=(rand() % 7) + 1;
              vector_a[i] = random;
              cout<< vector_a[i]<<" ";
              cout<<endl;
            }
            
        cout<<"generated values of vector_b:"<<endl;
        for (int i = 0 ; i<n; i++)
            {
              random =(rand() % 7) + 1;
              vector_b[i] = random;
              cout<<vector_b[i]<<"  ";
              cout<<endl;
            }
    }
}

int main()
{
    int n=(rand() % 7) + 1;
    double vector_a[n];
    double vector_b[n];
    double random;
    cout<<"Vector generator :"<<endl;
    gen_v(vector_a,vector_b,random);
    cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;
    return 0;
}
//ends here//

// code starts with matrix vector multi//

#include <iostream>
#include <string>
#include <ostream>
using namespace std;

double   dot_p( double  vector_a[], double  vector_b[], double   n)
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
   
    cout<<"The value of n is: "<<n<<endl;

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


 //Propertie of Matrix multiplication by a Vector:
 //We define the matrix-vector product only for the case when the number of columns in A
 equals
//the number of rows in X.
 
 ref : https://mathinsight.org/matrix_vector_multiplication
 



void   Matrix_vector_multiplication()
{   //double n =4;
    cout <<"values  of n"<<endl;
  
    double  matrix_a[4][4] ;
    double  vector_x[4];
    double result [4];
    double r1, c1, r2;
     // j= columns,i=rows
     cout << "Enter rows and columns matrix_a: ";
     cin>>r1>>c1;
     
     cout << "Enter rows  for vector_x: ";
     cin>>r2;
    for (int i = 0; i < c1; i++)
    {
        result [i]=0;
    }
    for (int j=0;j<c1;j++)
    {  
      for (int i = 0; i < r1; i++)
       {
         cout << "Enter element the matrix_a[][]" <<endl;
         cin>>matrix_a[j][i];
       }
    }
  for (int j=0;j<c1;j++)
    { 
      cout<<"values of vector_x[j]"<<endl;
      cin>>vector_x[j];
    }
 
  for (int j=0;j<c1;j++)
    {  
      for (int i = 0; i < r1; i++)
       {
          for (int k = 0; i < r2; k++)
          {  
        result [j]+= matrix_a[j][i] * vector_x[j];
          }
        cout<<result<<" ";
       }
       cout<<" ";
    }
 
}

int main()
{
    srand((unsigned) time(0));
    int n=(rand() % 9) + 1;
    cout<<"input the size of the vector :"<<endl;
    cin>>n;
    double vector_a[n];
    double vector_b[n];
    double random;
    cout<<"Vector generator :"<<endl;
    gen_v(vector_a,vector_b,random, n);
    cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;

    cout<< "matrix multiplication:"<< endl;
    Matrix_vector_multiplication();
   return 0;
   
}
*/

//that was the practise it ends here 

// the final presentation is below 

#include <iostream>
#include <string>
#include <ostream>
using namespace std;

double   dot_p( double  vector_a[], double  vector_b[], double   n)
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
   
    cout<<"The value of n is: "<<n<<endl;

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
void   gen_Matrix_vector()
{ 

}
void   Matrix_vector_multiplication()
{ 
// row  and colum size definition for the matrix A
    
    //cout<<"Enter size of Matrix_A"<<endl;
    
    
    int row_size = 0;
    int col_size = 0;
    int matrix_size = 0;
    
    cout<<"Enter size of Matrix_A"<<endl;
    cin>>matrix_size;

    cout<<"row size: "<<endl;
    cin>>row_size;
    
    cout<<"column size :"<<endl;
    cin>>col_size;
    
// the Vector must be equal to the col size of the Matrix A
    do{
        cout<<"vector size: "<<endl;
        cin>>matrix_size;//matrix size = vector size
      }
    while(matrix_size != col_size);
    
    int A[row_size][col_size];  // Matrix A
    int X[matrix_size]; // vector

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
    for (int i = 0 ; i<matrix_size; i++) 
    {
            cin>>X[i];
    }

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
    
}

int main()
{
    srand((unsigned) time(0));
  int n=(rand() % 9) + 1;
  cout<<"input the size of the vector :"<<endl;
  cin>>n;
  double vector_a[n];
  double vector_b[n];
  double random;
  cout<<"Vector generator :"<<endl;
  gen_v(vector_a,vector_b,random, n);
  cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;

    cout<< "matrix multiplication:"<< endl;
    Matrix_vector_multiplication();
   return 0;
   
}