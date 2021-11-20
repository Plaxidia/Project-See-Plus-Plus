#include <iostream>
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

void gen_v( double  vector_a[], double  vector_b[],int max,double random,int min)
{
    srand((unsigned) time(0));
    int n = (rand()%(max-min+1) )+ min;
for (int i = 0 ; i<n; i++) 
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
   }

}
int main()
{
    int  max = 9;
    int min =1;
    srand((unsigned) time(0));
    int n = (rand()%(max-min+1) )+ min;
    cout<<"the value of n :"<< n<<endl;
   
    
    double vector_a[n];
    double vector_b[n];
 
    cout<< "Values of n: "<<gen_v( vector_a[], vector_b[], max, min)<<endl;
    cout<< "Dot product: "<<(dot_p(   vector_a,   vector_b,n))<<endl;
    //cout<<"Dot Product:"<<dot_p(n,vector_a,vector_b)endl;
    return 0;
        
}
