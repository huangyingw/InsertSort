#include<iostream>
using namespace std;
#include"InsertSort.h"


  template <class Type>
InsertSort<Type>::InsertSort(int len)
{
  length=len;
  data=new Type[length];
}

  template <class Type>
void InsertSort<Type>::Print()
{
  for(int i=0;i<length;i++)
  {
    cout<<data[i]<<",";
  }
  cout<<endl;
}

  template <class Type>
void InsertSort<Type>::Sort()
{
  int k,j,left,right;
  Type temp;
  for(int i=0;i<length-1;i++)	
  {
    j=i+1;
    if(data[i]>data[j])//if the data[j] is smaller, then, find appropriate place in the previous i datas for it.
    {
      left=0;
      right=i;
      temp=data[j];
      while(left<right-1)
      {
        if(temp<data[(right+left)/2])
        {
          right=(right+left)/2;
        }
        else
        {
          left=(right+left)/2;
        }
      }
      for(;j>left;j--)
        data[j]=data[j-1];
      if(temp>data[left])
      {
        data[right]=temp;
      }
      else
      {
        data[left]=temp;
      }
    }
  }
}

int main() 
{
  InsertSort<int>* insertSort=new InsertSort<int>(10);
  insertSort->data[0]=8;
  insertSort->data[1]=2;
  insertSort->data[2]=10;
  insertSort->data[3]=3;
  insertSort->data[4]=5;
  insertSort->data[5]=4;
  insertSort->data[6]=6;
  insertSort->data[7]=7;
  insertSort->data[8]=1;
  insertSort->data[9]=9;
  insertSort->Sort();
  insertSort->Print();
  return 0;
}
