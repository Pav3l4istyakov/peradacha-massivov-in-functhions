#include <iostream>
//������ 1
int Date(int day1, int day2, int month1, int month2, int year1, int year2, int difference, int date1, int date2)
{
    int diffirence = date2 - date1;
    return diffirence;
}
int Year(int vesoc, int nevesoc)
{
    return vesoc, nevesoc;
}
//������ 2
double number(int arr[], int len) {
    double sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
        return sum / len;
//������ 3
        int Numbers(int numberpoz, int numberneg, int numberzero)
        {
            return numberpoz, numberneg, int numberzero)
        }




     

    
        int main()
        {
            setlocale(LC_ALL, "RU");
            int day1, day2, month1, month2, year1, year2, diff, date1, date2, ves;
            std::cout << "������� ������ ����";
            std::cin >> day1;
            std::cout << "������� ������  ����";
            std::cin >> day2;
            std::cout << "������� ������ �����";
            std::cin >> month1;
            std::cout << "������� ������ �����";
            std::cin >> month2;
            std::cout << "������� ������ ���";
            std::cin >> year1;
            std::cout << "������� ������ ���";
            std::cin >> year2;
            diff = date2 - date1;
            std::cout << "������� ����� ������ ����������::" << diff << "����";
            std::cout << "������� ���";
            std::cin >> ves;
            if (ves % 4 == 0 && ves % 100 == 0)
            {
                std::cout << "��� ����������" << "\n";
            }
            else if (ves % 4 == 0 && ves % 100 == 0)
            {
                std::cout << "��� �� ����������" << "\n";
            }
            else if (ves % 4 == 0)
            {
                std::cout << "��� ����������" << "\n";
            }
            else
            {
                std::cout << "��� �� ����������";
            }
            //������ 2
            int arr[] = { 40, 20, 31, 67, 51 };
            int len = sizeof(arr) / sizeof(arr[0]);
            std::cout << number(arr, len);
            //������ 3
            const int size = 5;
            int arr[size]{ 32,-5,0 };
            for (int i = 0; i < size; i++)
            {
                arr[size] = i;


            }
            return 0;
        }
    
    



      





 
    
  
  
    




