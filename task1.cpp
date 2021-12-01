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
*/
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

//double   Matrix_vector_multiplication( double  matrix_a[][], double  vector_x[],  double   result[],double n)

double   Matrix_vector_multiplication( double  matrix_a[4][4], double  vector_x[4],  double   result[],double n)
{
    for (int i = 0; i < n; i++)
    {
        result [i]=0;
    }
    
  for (int j=0;j<3;j++)
  {
 
    for (int i = 0; i < n; i++)
    {
        result [i]+= matrix_a[i][j] * vector_x[j];
    }
  }
    for (int i=0;i<3;i++)
    {
        cout<<matrix_a[i]<<"  "<<endl;
    }
   return result[4];
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
    double matrix_a[4][4] ={{2,3,4,5},{0,2,1,2},{2,9,8,1},{1,3,2,5}};
    double vector_x[4]={2,4,1,0};
    double result [4];
    cout<<"Vector generator :"<<endl;
    gen_v(vector_a,vector_b,random, n);

    cout<<"print the matix :"<<endl;
    cout<<" print 6 the vector  :"<<endl;
    cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;
    cout<< "matrix multiplication:"<< Matrix_vector_multiplication( matrix_a, vector_x,result  ,n);
    return 0;
}