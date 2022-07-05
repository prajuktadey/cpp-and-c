int main()
{
    int *x;//stack memory, it points to an inetegr array of size 3
    int size = 3;
    x= new int[size];

    for(int i; i<size; i++)
    {
        x[i]= i+3;//contents of the array is going to be 345
    }

    delete[]x;//since we did new we need to delete as well
}