#pragma warning (disable : 4267)
#include <iostream>
#include "BootsAllTerrain.h"
#include "Camel.h"
#include "Broom.h"
#include "Carpet.h"
#include "Eagle.h"
#include "Centaur.h"
#include "CamelFast.h"
#include "Race.h"
#include "VehicleAir.h"
#include "VehicleLand.h"
#include "Vehicle.h"
#include <windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    Race Race;
    while (true)
    {
        cout << "Добро пожаловать в гоночный симулятор!" << endl;
        cout << "1. Гонка для наземного транспорта" << endl;
        cout << "2. Гонка для воздушного транспорта" << endl;
        cout << "3. Гонка для наземного и воздушного транспорта" << endl;
        cout << "Выберите тип гонки: " << endl;

        Race.SetType();
        system("cls");

        cout << "Укажите длину дистанции (должна быть положительна): " << endl;
        Race.SetDistance();
        system("cls");

        Camel Camel;
        CamelFast CamelFast;
        Carpet Carpet;
        Centaur Centaur;
        Eagle Eagle;
        Broom Broom;
        BootsAllTerrain BootsAllTerrain;

        Vehicle* VehiclesArray[]{ &BootsAllTerrain, &Broom, &Camel, &Centaur, &Eagle, &CamelFast, &Carpet };
        int Size = size(VehiclesArray);

        cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства!" << endl;
        int Select;
        std::string VehReg;

        while (true)
        {
            if (Race.GetType() == "Land")
            {
                cout << "Гонка для наземного транспорта.";
            }
            else if (Race.GetType() == "Air")
            {
                cout << "Гонка для воздушного транспорта.";
            }
            else if (Race.GetType() == "All")
            {
                cout << "Гонка для наземного и воздушного транспорта.";
            }
            cout << "Расстояние: " << Race.GetDistance() << endl;

            if (Race.GetNumRegistered(VehiclesArray, Size) > 0)
            {
                string temp = VehReg;
                temp.erase(temp.length() - 2, 2);
                cout << "Зарегистрированные транспортные средства: " << temp << endl;
            }

            cout << "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n7. Ковёр-самолёт\n0. Закончить регистрацию" << endl;
            cout << "Выберите транспорт или 0 для окончания процесса регистрации: " << endl;

            cin >> Select;
            system("cls");

            if (Select > 7)
            {
                continue;
            }
            if (Select != 0)
            {
                if (VehiclesArray[Select - 1]->GetVehType() != Race.GetType() && Race.GetType() != "All")
                {
                    cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << endl;
                    continue;
                }
                if (VehiclesArray[Select - 1]->GetRegCheck())
                {
                    cout << VehiclesArray[Select - 1]->GetName() << " уже зарегистрирован!" << endl;
                    continue;
                }
            }

            if (Select == 0)
            {
                if (Race.GetNumRegistered(VehiclesArray, Size) < 2)
                {
                    cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства!" << endl;
                    continue;
                }
                cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
                cin >> Select;
                system("cls");

                if (Select == 1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }

            VehiclesArray[Select - 1]->SetRegCheck(true);
            cout << VehiclesArray[Select - 1]->GetName() << " успешно зарегистрирован!" << endl;
            VehReg += VehiclesArray[Select - 1]->GetName() + ", ";
        }
        for (int i = 0; i < Size - 1; ++i)
        {
            for (int j = 0; j < Size - 1; ++j)
            {
                if (VehiclesArray[j]->TimeComplRace(Race) > VehiclesArray[j + 1]->TimeComplRace(Race))
                {
                    swap(VehiclesArray[j], VehiclesArray[j + 1]);
                }
            }
        }
        int PrizePlace = 1;
        cout << "Результаты гонки: " << endl;
        for (int i = 0; i < Size; ++i)
        {
            if (VehiclesArray[i]->GetRegCheck())
            {
                cout << PrizePlace << ". " << VehiclesArray[i]->GetName() << ". Время: " << VehiclesArray[i]->TimeComplRace(Race) << endl;
                PrizePlace++;
            }
        }
        cout << endl;

        cout << "1. Провести еще одну гонку\n2. Выйти\nВыберите действие: ";
        cin >> Select;
        system("cls");

        if (Select == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
}