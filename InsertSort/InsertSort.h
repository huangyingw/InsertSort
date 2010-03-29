#include <fstream>
using namespace std;

template <class Type> class InsertSort
{
	private:
		int length;
		ofstream fout; 

	public:
		Type* data;
		InsertSort<Type>(int len);
		~InsertSort<Type>();
		void Sort();
		void Print();
};

template <class Type> InsertSort<Type>::InsertSort(int len)
{
	length=len;
	data=new Type[length];
	fout.open("output.txt");
}

template <class Type> InsertSort<Type>::~InsertSort()
{
	fout.close();
}


template <class Type> void InsertSort<Type>::Print()
{
	for(int i=0;i<length;i++)
	{
		cout<<data[i]<<",";
	}
	cout<<endl;
}

template <class Type> void InsertSort<Type>::Sort()
{
	int k,j,left,right;
	Type temp;
	for(int i=0;i<length-1;i++)	
	{
		j=i+1;
		if(data[i]>data[j])//如果data[j]值较小，则在为其寻找合适的插入位置
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
