template <class Type> class InsertSort
{
  private:
    int length;

  public:
    Type* data;
    InsertSort<Type>(int len);
    void Sort();
    void Print();
};
