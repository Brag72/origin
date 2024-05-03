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

    Adress(std::ifstream& fin)
    {
        fin >> city;
        fin >> street;
        fin >> nHome;
        fin >> nAppart;
    }
    Adress() {}

    void fileStream(std::ofstream& fout)
    {
        fout << city << ", " << street << ", " << nHome << ", " << nAppart << std::endl;
    }
    std::string getCity()
    {
        return city;
    }
};
int main()
{
    std::ifstream fin("in.txt");
    int arr_size;
    fin >> arr_size;

    std::ofstream fout("out.txt");

    Adress* arr = new Adress[arr_size];
    
    Adress temp;
    
    for (int i = 0; i < arr_size; ++i)
    {
        Adress adress(fin);
        arr[i] = adress;
    }
    fin.close();

    for (int j = 0; j < arr_size; ++j)
    {
        for (int i = 0; i < arr_size - 1; i++)
        {
            if (arr[i].getCity() > arr[i + 1].getCity())
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    fout << arr_size << std::endl;

    for (int i = 0; i < arr_size; ++i)
    {
        arr[i].fileStream(fout);
    }
    fout.close();
    delete[] arr;
}