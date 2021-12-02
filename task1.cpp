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

void   Matrix_vector_multiplication()
{   
    cout <<"values  of n"<<endl;
    double n=4; 
    double  matrix_a[4][4] ;
    double  vector_x[4];
    double result [4];
    double r1, c1, r2;
     // j= columns,i=rows

    for (int i = 0; i < n; i++)
    {
        result [i]=0;
    }
    for (int j=0;j<n;j++)
    {  
      for (int i = 0; i < n; i++)
       {
         cin>>j;
         cin>>i;
         cout<<matrix_a[j][i];
       }
    }
    cout<<"values of matrix_a[j][i]"<<endl;
  for (int j=0;j<n;j++)
    {  
      cin>>j;
       cout<<vector_x[j];
    }
    cout<<"values of vector_x[j]"<<endl;
  for (int j=0;j<n;j++)
    {  
      for (int i = 0; i < n; i++)
       {
          for (int k = 0; i < n; k++)
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
    double  matrix_a[4][4];
    double vector_x[4];
    cout<<"Vector generator :"<<endl;
    gen_v(vector_a,vector_b,random, n);
    cout<< "Dot product: "<<dot_p( vector_a,vector_b,n)<<endl;
    cout<< "matrix multiplication:"<< endl;

     Matrix_vector_multiplication();
    getchar();
}