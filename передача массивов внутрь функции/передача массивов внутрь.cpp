#include <iostream>
//задача 1
int Date(int day1, int day2, int month1, int month2, int year1, int year2, int difference, int date1, int date2)
{
    int diffirence = date2 - date1;
    return diffirence;
}
int Year(int vesoc, int nevesoc)
{
    return vesoc, nevesoc;
}
//задача 2
double number(int arr[], int len) {
    double sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
        return sum / len;
//задача 3
        int Numbers(int numberpoz, int numberneg, int numberzero)
        {
            return numberpoz, numberneg, int numberzero)
        }




     

    
        int main()
        {
            setlocale(LC_ALL, "RU");
            int day1, day2, month1, month2, year1, year2, diff, date1, date2, ves;
            std::cout << "введите первый день";
            std::cin >> day1;
            std::cout << "введите второй  день";
            std::cin >> day2;
            std::cout << "введите первый мес€ц";
            std::cin >> month1;
            std::cout << "введите второй мес€ц";
            std::cin >> month2;
            std::cout << "введите первый год";
            std::cin >> year1;
            std::cout << "введите второй год";
            std::cin >> year2;
            diff = date2 - date1;
            std::cout << "разница между датами составл€ет::" << diff << "дней";
            std::cout << "введите год";
            std::cin >> ves;
            if (ves % 4 == 0 && ves % 100 == 0)
            {
                std::cout << "год весокосный" << "\n";
            }
            else if (ves % 4 == 0 && ves % 100 == 0)
            {
                std::cout << "год не весокосный" << "\n";
            }
            else if (ves % 4 == 0)
            {
                std::cout << "год весокосный" << "\n";
            }
            else
            {
                std::cout << "год не весокосный";
            }
            //задача 2
            int arr[] = { 40, 20, 31, 67, 51 };
            int len = sizeof(arr) / sizeof(arr[0]);
            std::cout << number(arr, len);
            //задача 3
            const int size = 5;
            int arr[size]{ 32,-5,0 };
            for (int i = 0; i < size; i++)
            {
                arr[size] = i;


            }
            return 0;
        }
    
    



      





 
    
  
  
    




