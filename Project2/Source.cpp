//Dmitrieva_Olesya_Andreevna_SBD211

#include <windows.h> //���������� ������� ����-�����
#include <iostream>  //����-����� ������
#include <cmath>     //���������� ���������� �������������� ��������
#include <thread>
#include <chrono>
#include <stdio.h>

using namespace std;  //����� �� ������ ������ ��� std
int main()
{
	setlocale(0, "");
	int N;
List:
	do
	{
		cout << endl;
		cout << "------------------------------------------------------------- \n";
		cout << "������� ����� ��������                   \n"; 	 std::cout << endl;
		cout << "1. ������� ������ 1 [GitHub]             \n";
		cout << "2. ������� ������ 2 [Arrays]             \n";
		cout << "3. ������� ������ 3 [Shift]              \n";   std::cout << endl;
		cout << "������� � ������: ";                            cin >> N;
		cout << "------------------------------------------------------------- \n";
		if (N == 1)     goto One;
		if (N == 2)     goto Two;
		if (N == 3)     goto Three;
	}
	    while (N != 4);	goto End;
One:
	if (N == 1)
	{
		cout << endl;
		cout << "������ #1 [GitHub]                                                    \n";
		cout << endl;
		cout << "��������� �� GitHub ���� �������� �� �����                            \n";
		cout << "-------------------------------------------------------------         \n";
		std::string s = "�������� . . . . . . . . . . . . . . . . . . . . . . . . . .  \n";
		cout << endl;
		for (auto& x : s)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			std::cout << x;
		}
		cout << endl;
		cout << "5 �������� ��������� �� GitHub: ";                                                       cout << endl;
		cout << "1. https://github.com/GeneraIntegral/Pascal-s-triangle-/blob/master/Project4/Source.cpp  \n";		
		cout << "2. https://github.com/GeneraIntegral/Constants-Operators/blob/master/Project1/Source.cpp \n";
		cout << "3. https://github.com/GeneraIntegral/Control-structures/blob/master/Project1/Source.cpp  \n";
		cout << "4. https://github.com/GeneraIntegral/DayaTypes/blob/master/Project2/Source.cpp           \n";		
		cout << "5. https://github.com/GeneraIntegral/Loops-day/blob/master/Project2/Source.cpp           \n";
	}
	    goto Two;       goto List;
Two:
	if (N == 2)
	{
	     cout << endl;
	     cout << "������ #2 [Arrays]                                              \n";
	     cout << endl;
	     cout << "� ������ Arrays ��������:                                       \n";
	     cout << "- ����� ��������� �������;                                      \n";
	     cout << "- ������� �������������� ��������� �������;                     \n";
	     cout << "- � ��� �� ������� ����� ����������� � ������������ ��������;   \n";
	     cout << endl;
	     cout << "-------------------------------------------------------------   \n";
		 const int n = 5;
		 int arr[n] = { };
		 cout << "������� 5 ��������� �������: ";
		 for (int i = 0; i < n; i++)
		 {
			 cin >> arr[i];
		 }
		 cout << "����� ������� �� ����� � ������ �������:   ";
		 for (int i = 0; i < n; i++)
		 {
			 cout << arr[i] << "\t";
		 }
		 cout << endl;
		 cout << "����� ������� �� ����� � �������� �������: ";
		 for (int i = n - 1; i >= 0; i--)
		 {
			 cout << arr[i] << "\t";
		 }
		 cout << endl;
		 int sum = 0;
		 for (int i = 0; i < n; i++)
		 {
			 sum += arr[i];
		 }
		 cout << "����� ��������� �������: " << sum << endl;
		 double average = 0;
		 for (int i = 0; i < n; i++)
		 {
			 average = sum/n;
		 }
		 cout << "������� �������������� �������: " << average << endl;
		 int max = arr[0]; 
		 int min = arr[0]; 
		 for (int i = 1; i < n; i++)
		 {
			 if (max < arr[i]) max = arr[i];
			 if (min > arr[i]) min = arr[i]; 
		 }
		 cout << "����������� �������� �������: " << min << endl;
		 cout << "������������ �������� �������: " << max << endl;
	}
	    goto Three;     goto List;
Three:
	if (N == 3)
	{
		cout << endl;
		cout << "������ #3 [Shift]                                                     \n";
		cout << endl;
		cout << "� Solution 'Arrays' �������� ������ Shift.                            \n";
		cout << "� ���� ������� ���� ������ �� 10 ���������,                           \n";
		cout << "��������������������� ��� ���������� ���������� 0 1 2 3 ... 9         \n";
		cout << "���������� ��������� ����������� ����� ����� ������� �� ��������      \n";
		cout << "����� ��������� �����, � ����� ������. ��������:                      \n";
		cout << "�������� ������:                                                      \n";
		cout << "	0	1	2	3	4	5	6	7	8	9                              \n";
		cout << "	1	2	3	4	5	6	7	8	9	0                              \n";
		cout << "	2	3	4	5	6	7	8	9	0	1                              \n";
		cout << "��� �� ������ ��������� �� ��� �������� �����:                        \n";
		cout << "	3	4	5	6	7	8	9	0	1	2                              \n";
		cout << "����� ����� ������ �� ������ ������� �� ����� � ������ ����,          \n";
		cout << "� ����� �������� ��� ��������� �������� ���� ������������ � ������.   \n";
		cout << endl;
		cout << "-------------------------------------------------------------         \n";

		const int n = 10;
		int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
		//����� ��������� ������� �� �����:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;                                          cout << endl;
		int number_of_shifts;
		cout << "������� ���������� �������: ";                cin >> number_of_shifts;
		                                                       cout << endl;
		for (int i = 0; i < number_of_shifts % n; i++)         //���� ���� ��������� ����� ������� �� 1 �������
		{
			//���� ��� �������� ������ �� ���� ������� �����:
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];	                       //� ������� ������� ������� ����� ��������� �������
			}
			arr[n - 1] = buffer;
		}
		//system("CLS");                                       //�������� � ������
		//����� ���������� ������� �� �����:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		//Sleep(500);	                                       //������� Sleep() ���������������� ���������� ��������� �� �������� ����� �����������
	}
	goto List;
End:
	return 0;
}