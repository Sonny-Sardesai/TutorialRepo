// VersionControlTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void loop(int counter) {
    for (int i = 0; i < counter; i++)
    {
        std::cout << "For loop is working for the "<< i+1 << " time!\n";
    }
}
int main()
{
<<<<<<< HEAD
    char Question[] = "What is your name?";
    char Name [20];
    std::cout << "Hello World!!\n";



    printf("Hi Yall it'syour boi, Boi uber\n");
        printf("%s", &Question);
        scanf_s("%s", &Name);
        printf("Ciao %s\n", &Name);
=======
    int counter;
    std::cin >> counter;
    loop(counter);
>>>>>>> 34bf8ed1d0267d7c7a57fac97818bede9340f747
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
