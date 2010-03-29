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
		fout<<data[i]<<",";
	}
	fout<<endl;
}

template <class Type> void InsertSort<Type>::Sort()
{
	int i,j,k,left,right;
	Type temp;
	for(i=0;i<length-1;i++)	
	{
		j=i+1;
		fout<<"i->"<<i<<",j->"<<j<<endl;
		fout<<"data[i]->"<<data[i]<<",data[j]->"<<data[j]<<endl;
		if(data[i]>data[j])
		{
			left=0;
			right=i;
			temp=data[j];

			fout<<"From left->"<<left<<" to right->"<<right<<endl;
			for(int index=left;index<right+1;index++)
				fout<<data[index]<<",";
			fout<<endl;
			
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
			fout<<"temp->"<<temp<<endl;
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
		fout<<"i="<<i<<endl;
		for(int index=i;index<length;index++)
				fout<<data[index]<<",";
			fout<<endl<<endl;
	}
}
