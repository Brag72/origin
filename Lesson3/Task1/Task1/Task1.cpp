#include <iostream>
#include <string>
#include <fstream>

class Adress
{
    std::string city;
    std::string street;
    int nHome;
    int nAppart;

public:

    Adress(std::ifstream &fin)
    {
        fin >> city;
        fin >> street;
        fin >> nHome;
        fin >> nAppart;
    }
    Adress(){}
   
    void swaps(Adress* arr,int arr_size)
    {
        int i = 0;
        int j = arr_size - 1;

        while (i < j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    void fileStream(std::ofstream &fout)
    {
        fout << city << ", " << street << ", " << nHome << ", " << nAppart << std::endl;
    }
};
int main()
{
    std::ifstream fin("in.txt");
    int arr_size;
    fin >> arr_size;
    
    std::ofstream fout("out.txt");
   
    Adress* arr = new Adress[arr_size];
    

    for (int i = 0; i < arr_size; ++i)
    {
        Adress adress(fin);
        arr[i] = adress;
    }    
    fin.close();

    arr->swaps(arr, arr_size);
    
    fout << arr_size << std::endl;
    
   for (int i = 0; i < arr_size; ++i)
    {
        arr[i].fileStream(fout);
    }
    fout.close();
    delete[] arr;
}   