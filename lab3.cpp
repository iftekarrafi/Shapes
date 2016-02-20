/*
 Author: Iftekar Rafi
 Course: {135,136}
 Instructor: Ali AlSayed
 Assignment: Lab 3 Shapes Shapes Shapes
 
 This program prints out various shapes 
 based on what the user wants.
 
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int width, height, num, radius;
    int choice;
    do
    {
        cout << endl;
        cout << "Shapes! Shapes! Shapes!\n" << endl;
        /*
         Prompts the user a menu of options to choose from
         Stores into an int variable called choice.
         If the user does not choose these options, the 
         program will exit
         */
        cout << "1. Rectangle" << endl;
        cout << "2. X" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Inverted Triangle" << endl;
        cout << "5. Circle" << endl;
        cout << "6. Exit\n" << endl;
        cin >> choice;
        
        switch (choice)
        {
            /*
             If the user chooses option 2,
             it asks the user for the height and width to
             draw a rectangle depending on their inputs. 
             Stores input into 'height' and 'width'.
             If the height or width is less than or equal to 2,
             the program will ask the user to enter the values again.
             */
            case 1: //Rectangle
                cout << "Enter the height for the rectangle: ";
                cin >> height;
                cout << "Enter the width for the rectangle: ";
                cin >> width;
                while (height <= 2 || width <= 2)
                {
                    cout << "The height/width has to be 3 or higher.\n";
                    cout << "Enter the height for the rectangle: ";
                    cin >> height;
                    cout << "Enter the width for the rectangle: ";
                    cin >> width;
                }
                cout << endl;
                
                for(int i = 0; i < height; ++i )
                {
                    for(int j = 0; j < width; ++j )
                    {
                        if( i == 0 || i == height - 1 )
                        {
                            cout << "*";
                        }
                        else
                        {
                            if( j == 0 || j == width - 1 )
                                cout << "*";
                            else
                                cout << " ";
                        }
                    }
                    cout << "\n";
                }
                break;
            /*
             If the user chooses option 2,
             it asks the user for a number to draw an 'X'
             Stores input into 'num'. 
             If the num is even, the program will 
             ask the user to enter another value as it 
             only takes odd numbers.
             */
            case 2: // X
                cout << "Enter a Number: ";
                cin >> num;
                while (num % 2 == 0)
                {
                    cout << "Number has to be odd. \n";
                    cout << "Enter a Number: ";
                    cin >> num;
                }
                cout << endl;
                for(int i = 1; i <= num; i++)
                {
                    for(int j = 1; j<= num; j++)
                    {
                        if((i == j) || (j==(num+1)-i))
                        {
                            cout << "*";
                        }
                        else{
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;
            /*
             If the user chooses option 3,
             it asks the user for the height to draw
             a triangle based on their input.
             Stores input into 'height'.
             If the height is less than 2, the program will
             ask the user for the height again.
             */
            case 3: //Triangle
                cout << "Enter the height for the triangle: ";
                cin >> height;
                while (height < 2)
                {
                    cout << "Number of lines has to be greater than 2.\n";
                    cout << "Enter the height for the triangle: ";
                    cin >> height;
                }
                cout << endl;
                for (int i = 1; i <= height; i++)
                {
                    for (int j = 1; j <= i; j++)
                        cout << "*";
                    cout << endl;
                }
                break;
            /*
             If the user chooses option 4,
             it asks the user for the height to draw 
             an inverted trangle based on their input. 
             Stores input into 'height'.
             If the height is less than 2, the program will 
             ask the user for the height again.
             */
            case 4: //Inverted Triangle
                cout << "Enter the height for the inverted triangle: ";
                cin >> height;
                while (height < 2)
                {
                    cout << "Number of lines has to be greater than 2.\n";
                    cout << "Enter the height for the triangle: ";
                    cin >> height;
                }
                cout << endl;
                for(int i = height; i >= 1; i--)
                {
                    for(int j = height; j > i;  j--)
                    {
                        cout << " ";
                    }
                    for(int k = 1; k <= i; k++)
                    {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
            /*
             If the user chooses option 5
             it asks the user for the radius to draw 
             a circle based on their input. 
             Stores input into 'radius'
             If the radius is less than 1, the program 
             will ask the user for the radius again.
             */
            case 5: //Circle
                cout << "Enter the Radius: ";
                cin >> radius;
                while (radius < 1)
                {
                    cout << "Radius has to be greater than 1.\n";
                    cout << "Enter the Radius: ";
                    cin >> radius;
                }
                cout << endl;
                for (int i = 0; i <= 2*radius; i++)
                {
                    for (int j = 0; j <= 2*radius; j++)
                    {
                        double center = sqrt((i - radius)*(i - radius) + (j - radius)*(j - radius));
                        if (center > radius-0.5 && center < radius+0.5)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break; 
            /*
             If the user chooses option 6, 
             the program will exit.
             */
            case 6:
                cout << "Exiting ...\n";
                return 0; 
                break;
        }
    } while (choice >= 1 && choice <= 6); 
    return 0;
}