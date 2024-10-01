//Crystal Zhang 
//10/1/2024
//Lab 4

#include <iostream> 
#include <string>

using namespace std; 

int main() {

double sugar; //adds a variable called sugar that includes a decimal 
string fruit; //adds a string variable called fruit

int amtFruit; //adds a variable called amt that includes a whole number
int i = 1; //adds variable used for the intitial in the loop

cout << "How many fruits do you want to enter?" << endl; 
cin >> amtFruit; 

for (i=1; i<=amtFruit; i++) //loops the code below until variable i is greater than amtFruits entered by user, increases by 1 each loop
{ 
    cout << "Enter the name of the fruit." << endl; //prompts user to enter fruit name
    cin >> fruit; //allows user to enter fruit name

    cout << "Enter the sugar content of the fruit" << endl; //prompts user to enter sugar content of fruit
    cin >> sugar; //allows user to enter sugar content of fruit

    if (sugar < 10) //takes the user inputted sugar content and compares it with 10, if statement found true, it will execute 
        cout << fruit << " LOW SUGAR FRUIT" << endl;   //if the sugar content is less than 10, it will print this message

    else if (sugar >= 10 && sugar <= 14) //takes user inputted sugar content and compares with with 10 and 14, if true it will execute
        cout << fruit << " MEDIUM SUGAR FRUIT" << endl; //if the sugar content is greater or equal to 10 and less than or equal to 14 (in between 10 and 14 includsive) it will print this message

    else //if none of the if comments above apply, it will execute below
        cout << fruit << " HIGH SUGAR FRUIT" <<endl; //if the sugar content is not less than or equal top 14 and less than or equal to 10, it will print this message
}

/* 
output if 

grapes 23.37
avocado .99
strawberries 7
grapefruit 10.6
orange 14 

total fruits: 5

How many fruits do you want to enter?
5
Enter the name of the fruit.
grapes
Enter the sugar content of the fruit
23.37
grapes HIGH SUGAR FRUIT
Enter the name of the fruit.
avocado
Enter the sugar content of the fruit
.99
avocado LOW SUGAR FRUIT
Enter the name of the fruit.
strawberries
Enter the sugar content of the fruit
7
strawberries LOW SUGAR FRUIT
Enter the name of the fruit.
grapefruit
Enter the sugar content of the fruit
10.6
grapefruit MEDIUM SUGAR FRUIT
Enter the name of the fruit.
orange
Enter the sugar content of the fruit
14
orange MEDIUM SUGAR FRUIT
*/
    return 0; 
}