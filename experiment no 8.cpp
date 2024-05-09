#include<iostream>
#define rows 50
#define cols 50
using namespace std;
int N;
class matrix{
    int arr[rows][cols];
    public:
    
    void input(int A[rows][cols]){
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
          arr[i][j] = A[i][j];
      }
    }
    }
    void display()
    {
     for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }

    }
    void operator+(matrix x);
    void operator-(matrix x);
    void operator*(matrix x);
    void setmatrix();
};
void matrix::operator +(matrix &x)
    { 
        int mat[rows][cols];
        for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
          mat[i][j] = arr[i][j] + x.arr[i][j];
      }
    }
    
     cout<<endl;
    }
void matrix::operator -(matrix x)
    { 
        int mat[rows][cols];
        for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
          mat[i][j] = arr[i][j] - x.arr[i][j];
      }
    }
     
     cout<<endl;
    }
void matrix::operator *(matrix x)
    { 
        int mat[rows][cols];
        for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {      
           mat[i][j] = 0;
          for(int k =0; k<N; k++)
        {
          mat[i][j] += arr[i][k] * (x.arr[k][j]);
        }
      }
    }
    
     cout<<endl;
    }
    void matrix :: setmatrix(){
    	
     for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
          cout<<arr[i][j]<<" ";
      }
   }
	}
int main()
{
    N=3;
    int arr1[rows][cols]= { {1,2,3},
                       {4,5,6},
                       {7,8,9}};
     int arr2[rows][cols]= { {11,12,13},
                       {14,15,16},
                       {17,18,19}};

     matrix mat1, mat2,mat3;
     mat1.input(arr1);
     mat2.input(arr2);
     cout<<"addition of two matrix"<<endl;
     mat1+mat2;
           
     cout<<"subtraction of two matrix"<<endl;
     mat2-mat1;
     cout<<"multiplication of two matrix"<<endl;
     mat1*mat2;
      return 0;
}












