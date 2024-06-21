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
        cout << "����� ���������� � �������� ���������!" << endl;
        cout << "1. ����� ��� ��������� ����������" << endl;
        cout << "2. ����� ��� ���������� ����������" << endl;
        cout << "3. ����� ��� ��������� � ���������� ����������" << endl;
        cout << "�������� ��� �����: " << endl;

        Race.SetType();
        system("cls");

        cout << "������� ����� ��������� (������ ���� ������������): " << endl;
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

        cout << "������ ���� ���������������� ���� �� 2 ������������ ��������!" << endl;
        int Select;
        std::string VehReg;

        while (true)
        {
            if (Race.GetType() == "Land")
            {
                cout << "����� ��� ��������� ����������.";
            }
            else if (Race.GetType() == "Air")
            {
                cout << "����� ��� ���������� ����������.";
            }
            else if (Race.GetType() == "All")
            {
                cout << "����� ��� ��������� � ���������� ����������.";
            }
            cout << "����������: " << Race.GetDistance() << endl;

            if (Race.GetNumRegistered(VehiclesArray, Size) > 0)
            {
                string temp = VehReg;
                temp.erase(temp.length() - 2, 2);
                cout << "������������������ ������������ ��������: " << temp << endl;
            }

            cout << "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-������\n0. ��������� �����������" << endl;
            cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: " << endl;

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
                    cout << "������� ���������������� ������������ ��� ������������� ��������!" << endl;
                    continue;
                }
                if (VehiclesArray[Select - 1]->GetRegCheck())
                {
                    cout << VehiclesArray[Select - 1]->GetName() << " ��� ���������������!" << endl;
                    continue;
                }
            }

            if (Select == 0)
            {
                if (Race.GetNumRegistered(VehiclesArray, Size) < 2)
                {
                    cout << "������ ���� ���������������� ���� �� 2 ������������ ��������!" << endl;
                    continue;
                }
                cout << "1. ���������������� ���������\n2. ������ �����\n�������� ��������: ";
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
            cout << VehiclesArray[Select - 1]->GetName() << " ������� ���������������!" << endl;
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
        cout << "���������� �����: " << endl;
        for (int i = 0; i < Size; ++i)
        {
            if (VehiclesArray[i]->GetRegCheck())
            {
                cout << PrizePlace << ". " << VehiclesArray[i]->GetName() << ". �����: " << VehiclesArray[i]->TimeComplRace(Race) << endl;
                PrizePlace++;
            }
        }
        cout << endl;

        cout << "1. �������� ��� ���� �����\n2. �����\n�������� ��������: ";
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