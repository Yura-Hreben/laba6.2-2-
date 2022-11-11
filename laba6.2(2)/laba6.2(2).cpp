// Lab 6_2 
// спосіб 2 
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 

using namespace std;

double rand(int n, int a[], int i)
{
    if (i < n)
    {
        a[i] = rand() % 100;
        cout << a[i] << ", ";
        return rand(n, a, i + 1);
    }
}

double arr(int n, int a[], int i, int j)
{
    if (i < n)
    {
        int x;
        cout << "Введiть " << i + 1 << "елемент масива: "; cin >> x;
        a[i] = x;
        return arr(n, a, i + 1, j);
    }
    if (j < n)
    {
        cout << a[j] << ", ";
        return arr(n, a, i, j + 1);
    }
}

double in(int a[], int n, int i, int index, int min)
{
    if (i < n)
    {
        if (a[i] % 2 == 1)
        {
            index += a[i];
            min++;
        }

        return in(a, n, i + 1, index, min);
    }
    return index / min;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int  size;
    int x, i = 0;
    cout << "Введiть довжину масива "; cin >> size;
    int* a = new int[size];

    cout << "\nЯкщо хочете ввести значення масиву самi введiть '1', якщо нi тодi iнше число "; cin >> x;

    if (x == 1)
    {
        arr(size, a, i, i);
    }
    else
    {
        cout << "\nв масив записуються числа вiд 1 до 100 ";
        cout << "\narray: ";  rand(size, a, i);
    }
    cout << "\n Середнє арифметичне: " << in(a, size, i, i, i);
    delete[] a;
    return 0;
}