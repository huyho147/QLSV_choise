#include <iostream>
using namespace std;
void MainMenu()
{
	cout << "====================================================================================";
	cout << "\n                                    MENU                                           ";
	cout << "\n====================================================================================";
	cout << "\n	1. Quan sat tat ca sinh vien !!!";
	cout << "\n	2. Quan sat 1 sinh vien bang ID !!!";
	cout << "\n	3. Hien diem thi cuoi ky cao nhat va thap nhat !!!";
	cout << endl;
}

void Header()
{
	cout << "====================================================================================";
	cout << "\nID\t\tKiemtra1\tKiemtra2\tGiuaky\t\tCuoi ky";
	cout << "\n====================================================================================";
	cout << endl;
}

void ViewAll(int Array [4][5])
{
	Header();
	for (int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << Array[i][j]<<"\t\t";
		}cout << endl;
	}
}

void ViewByID(int Array [4][5])
{
	
	int id;
	cout << "Moi ban nhap ID: ";
	cin >> id;
	bool l = false;
	for (int i = 0; i < 4;i++)
	{
		if (id == Array[i][0])
		{
			Header();
			l = true;
			for (int j = 0; j < 5; j++)
			{
				cout << Array[i][j] << "\t\t";
			}
		}
		
	}
	
		if (l == false) 
		cout << "Nhap ID sai !!!";
}

int DiemMin(int Array[4][5])
{
	int min = Array[0][4];
	for (int i = 0; i < 4; i++)
	{
		if (min > Array[i][4])
			min = Array[i][4];
	}
	return min;
}

int DiemMax(int Array[4][5])
{
	int max = Array[0][4];
	for (int i = 0; i < 4; i++)
	{
		if (max < Array[i][4])
			max = Array[i][4];
	}
	return max;
}

void ShowMinMax(int Array[4][5])
{
	cout << "\nDiem lon nhat la: " << DiemMax(Array);
	cout << "\nDiem nho nhat la: " << DiemMin(Array);
}

int main()
{
	int choise;
	char confirm;
	int Array[4][5] = {{101,7,7,8,9}, {202,6,8,5,8}, {303,5,6,6,7}, {404,8,9,8,9}};
	MainMenu();
	

	do
	{
		cout << "Nhap lua chon cua ban (1 - 3): ";
		cin >> choise;
		switch (choise)
		{
		case 1: ViewAll(Array); break;
		case 2: ViewByID(Array); break;
		case 3: ShowMinMax(Array); break;
		default: cout << "Nhap sai!!! Hay nhap lai!!!";
			break;
		}
		cout << "\nNhap y hoac Y de tiep tuc: ";
		cin >> confirm;
	} while (confirm == 'y' || confirm == 'Y');
}