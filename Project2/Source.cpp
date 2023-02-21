//Dmitrieva_Olesya_Andreevna_SBD211

#include <windows.h> //подключить русский ввод-вывод
#include <iostream>  //ввод-вывод данных
#include <cmath>     //библиотека выполнения математических операций
#include <thread>
#include <chrono>
#include <stdio.h>

using namespace std;  //чтобы не писать каждый раз std
int main()
{
	setlocale(0, "");	int N;
List:
	do
	{
		cout << endl;
		cout << "------------------------------------------------------------- \n";
		cout << "Введите номер действия                   \n"; 	 cout << endl;
		cout << "1. Вывести задачу 1 [GitHub]             \n";
		cout << "2. Вывести задачу 2 [Arrays]             \n";
		cout << "3. Вывести задачу 3 [Shift]              \n";   cout << endl;
		cout << "Перейти к номеру: ";                            cin >> N;
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
		cout << "Задача #1 [GitHub]                                                    \n";               cout << endl;
		cout << "Загрузить на GitHub пять проектов на выбор                            \n";
		cout << "-------------------------------------------------------------         \n";
		std::string s = "ЗАГРУЗКА . . . . . . . . . . . . . . . . . . . . . . . . . .  \n";               cout << endl;
		for (auto& x : s)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			std::cout << x;
		}
		cout << endl;
		cout << "5 проектов загружено на GitHub: ";                                                       cout << endl;
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
	     cout << "Задача #2 [Arrays]                                              \n";   cout << endl;
	     cout << "В проект Arrays добавить:                                       \n";
	     cout << "- сумму элементов массива;                                      \n";
	     cout << "- среднее арифметическое элементов массива;                     \n";
	     cout << "- в том же массиве найти минимальное и максимальное значение;   \n";   cout << endl;
	     cout << "-------------------------------------------------------------   \n";
		 const int n = 5;
		 int arr[n] = { };               cout << "Введите 5 элементов массива: ";
		 for (int i = 0; i < n; i++)
		 {
			 cin >> arr[i];
		 }                                cout << "Вывод массива на экран в прямом порядке:   ";
		 for (int i = 0; i < n; i++)
		 {
			 cout << arr[i] << "\t";
		 }
		 cout << endl;                    cout << "Вывод массива на экран в обратном порядке: ";
		 for (int i = n - 1; i >= 0; i--)
		 {
			 cout << arr[i] << "\t";
		 }
		 cout << endl;
		 int sum = 0;
		 for (int i = 0; i < n; i++)
		 {
			 sum += arr[i];
		 }                                cout << "Сумма элементов массива: " << sum << endl;
		 double average = 0;
		 for (int i = 0; i < n; i++)
		 {
			 average = sum/n;
		 }                                cout << "Среднее арифметическое массива: " << average << endl;
		 int max = arr[0]; int min = arr[0]; 
		 for (int i = 1; i < n; i++)
		 {
			 if (max < arr[i]) max = arr[i];
			 if (min > arr[i]) min = arr[i]; 
		 }
		 cout << "Минимальное значение массива: " << min << endl;
		 cout << "Максимальное значение массива: " << max << endl;
	}
	    goto Three;     goto List;
Three:
	if (N == 3)
	{
		cout << endl;
		cout << "Задача #3 [Shift]                                                     \n";   cout << endl;
		cout << "В Solution 'Arrays' добавить проект Shift.                            \n";
		cout << "В этом проекте есть массив из 10 элементов,                           \n";
		cout << "проинициализированный при объявлении значениями 0 1 2 3 ... 9         \n";
		cout << "Необходимо выполнить циклический сдвиг этого массива на заданное      \n";
		cout << "число элементов влево, а потом вправо. Например:                      \n";
		cout << "Исходный массив:                                                      \n";
		cout << "	0	1	2	3	4	5	6	7	8	9                              \n";
		cout << "	1	2	3	4	5	6	7	8	9	0                              \n";
		cout << "	2	3	4	5	6	7	8	9	0	1                              \n";
		cout << "Тот же массив сдвинутый на три элемента влево:                        \n";
		cout << "	3	4	5	6	7	8	9	0	1	2                              \n";
		cout << "Важно чтобы массив не просто вывелся на экран в нужном виде,          \n";
		cout << "а чтобы значения его элементов изменили свое расположение в памяти.   \n";   cout << endl;
		cout << "-------------------------------------------------------------         \n";
		const int n = 10;
		int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
		//Вывод исходного массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;                                          cout << endl;
		int number_of_shifts;
		cout << "Введите количество сдвигов: ";                cin >> number_of_shifts;
		cout << endl;
		for (int i = 0; i < number_of_shifts % n; i++)         //Этот цикл повторяет сдвиг массива на 1 элемент
		{
			//Этот код сдвигает массив на один элемент влево:
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];	               //В текущий элемент массива ложим следующий элемент
			}
			arr[n - 1] = buffer;
		}
		//system("CLS");                                       //Стирание с экрана
		//Вывод сдвинутого массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
		//Sleep(500);	                                       //Функция Sleep() приостанавливает выполнение программы на заданное число миллисекунд
	}
	goto List;
End:
	return 0;
}
