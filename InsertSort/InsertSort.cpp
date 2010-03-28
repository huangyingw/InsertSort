// InsertSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"InsertSort.h"


void main() 
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
}
