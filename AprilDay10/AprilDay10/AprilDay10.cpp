#include <iostream>
#include <string>
#include <vector>
#include <fstream>


/*
    Karl Rohr   
    Contact Info
        Email: krohr@fullsail.edu
        Discord: karlrohr


    Midterm and lab 6 will start being graded tomorrow evening. Remember that the midterm can not be turned in late. It is better
    to turn something in before the deadline than nothing at all.

    Going over instructions and flow of the Midterm


    Tasks for the day
        Any review/questions/examples people want to see


    // Begin of stuff for PG2 and beyond
    Git with Github
   Make an account with student email https://github.com/
   Download this  https://git-scm.com/install/windows

    Lots of command line

    File I/O
        Writing to a text File
        Reading from a text File

    Changing font color
    // End of stuff for PG2 and beyond
    
    Game demo stuff

    We'll get started at 1:15pm est


*/



// methods
void Line()
{
    std::cout << "---------------------------------" << std::endl;
}

void Message(std::string words)
{
    Line();
    std::cout << words << std::endl;
    Line();
}



void IfExample()
{
    /*
    if statements are program flow control - they are also decision making code

    if statements have a condition the condition is inside of ( ) and the condition will evaluate to true or false

    pattern for an if

    if (condition)
    { // scope of if - condition

    } // end scope of if - condition



    else
        An else statement is optional, it is the last keyword present on if an if structure. The purpose of it, is to run when all conditions
        in the if structure are false, the code in the scope of the else will run


    if (condition)
    { // begin scope of if - condition

    } // end scope of if - condition
    else
    { // begin scope of else

    } // end scope of else



    else if
        else ifs go under the original if, they do get their own condition, and you can have as many as you want

    if (condition)
    { // begin scope of if - condition

    } // end scope of if - condition
    else if (anotherCondition)
    { // begin scope of else if - anotherCondition

    } // end scope of else if - anotherCondition


    now to see and if with an else if and else

    if (condition)
    { // begin scope of if - condition

    } // end scope of if - condition
    else if (anotherCondition)
    { // begin scope of else if - anotherCondition

    } // end scope of else if - anotherCondition
    else
    { // begin scope of else

    } // end scope of else


    Some things to note about if structures is 

    if (2 < 3)
    {
    }

    if (2 < 3)
    {
    }

    even though these two if statements are identical, they are different if structures, so if statements are not connected to one another
    like an if and else if

    another thing to note is that, the first condition in an if structure that is true, it's scope will run and all else will be skipped

    if (2 == 2)
    {
        // we know this is true - because this is the first condition to be true, the else if is skipped entirely
    }
    else if (3 == 3)
    {

        // we also know this to be true
    }
    
    
    
    
    */
    if (2 == 2)
    {

    }

    if (3 == 3)
    {

    }
    else
    {

    }


    // Making some varaibles

    int number1 = 3;
    int number2 = 5;
    std::string word = "yes";
    bool flag = false;

    // If statement by it self
    if (number1 == 3)
    { // begin scope of if - number1 == 3

        // Because number1 was initialized to 3 and we have not alterd its value, this condition is true the code in this cope will run

        std::cout << "number1 is equal to 3" << std::endl;

    } // end scope of if - number1 == 3

    Line();

    // Now to write that to be false
    if (number1 != 3) // if number1 does not equal 3
    { // begin if - number1 does not equal 3
       
      // again because we know that number1 is 3 we haven't changed it, this statement will be false
        std::cout << "that means we won't see this output at all" << std::endl;

    } // end if - number1 does not equal 3

    Line();

    if (number1 > number2)
    {
        // this condition is if number1 is greater than number2 or as it's values if 3 > 5
        // this would evaluate to false because 3 is not greater than 5
        std::cout << "we still don't see this" << std::endl;
    }

    if (number1 < number2)
    {
        // because number1 is 3 and number2 is 5, 3 is less than 5, this condition evalutes to true
        std::cout << "number1 is less than number2" << std::endl;
    }

    Line();

    // Now to include the else

    if (word == "no")
    { // begin scope if - word == no

        // we know that word was initialized with the value of "yes" not no, so this condition would be false
        std::cout << "because word does not equal no we don't see this" << std::endl;

    } // end scope if - word == no
    else
    { // begin scope else

        // because the above condition is false the code in here the else, will run
        std::cout << "else statement of word == no, because word does not equal no we see this output " << std::endl;

    } // end scope else

    Line();

    // now to see an else not run because the condition is true

    if (word == "yes")
    { // begin scope if - word == yes

        // because word is yes, this condition is true, the scope here will run
        std::cout << "word is equal to yes, so we'll see this" << std::endl;

    } // end scope if - word == yes
    else
    { // begin scope of else

        // because word is yes, that condition is true, this else will not run
        std::cout << "because word is yes, and that condition is true, we don't see this" << std::endl;

    } // end scope of else

    Line();

    // Now to include the else ifs

    if (flag == true)
    { // begin scope if - flag == true

        // we know this to be false we initalized flag to false
        std::cout << "flag is not true" << std::endl;

    } // end scope if - flag == true
    else if (word == "no")
    { // begin scope of else if - word == "no"

        // we know word is yes so this is false

        std::cout << "word is yes" << std::endl;
    } // end scope of else if - word == "no"
    else if (number1 > 0)
    { // begin scope of else if - number1 > 0

        // we know this to be true, because number1 is 3
        // this is the scope that will run in this if structure
        std::cout << "number1 is greater than 0" << std::endl;
    } // end scope of else if - number1 > 0
    else
    { // begin scope of else

        // we include the else here even though we have one true condition just see the entire structure
        // because one of the three conditions above is true, the scope of the else will not run
        std::cout << "won't run" << std::endl;
    } // end scope of else

    Line();



}

void SwitchExample()
{
    /*
        The primary difference between if structures and switch statements are
            ifs can compare value types against sorts of things, using the operators listed
            > >= < <= != == 

            switches can not

            ifs can utilize all data types

            switches can only do numeric types (depending on the language)

            ifs compare data against other data

            switches are checking the value of the variable we are switching on, against values present in the case statements

            you can create things like objects or variables in side of if statements

            you can not with switches

            you can alter values in both


            pattern for a switch

            switch(aVariable)
            {
                case 0:

                    break;

                case 1:

                    break;

                default:
                    break;


            }

            you can have as many case statements as you want

            the default is optional so you need to write it if you don't want to or don't need to
    */

    int number = 3;

    std::string value = "";

    switch (number)
    {
    case 0:
        // number is 3 this won't run
        std::cout << "won't run" << std::endl;
        value = "case 0";
        break;

    case 1:
        // number is 3 this won't run
        std::cout << "won't run" << std::endl;
        value = "case 1";
        break;

    case 2:
        // number is 3 this won't run
        std::cout << "won't run" << std::endl;
        value = "case 2";
        break;

    case 3:
        std::cout << "because number has the value of 3 this runs" << std::endl;
        value = "case 3";
        break;

    default:
        // number is 3 this won't run
        std::cout << "won't run" << std::endl;
        value = "default";
        break;
    }

    // outside of the switch
    // we can output value

    std::cout << "value: " << value << std::endl;




}

void WriteToFile()
{
    // step 1 to writing to a file is to create an ofstream object
    std::ofstream outFile("file.txt"); // everytime the project runs it will create/overwrite this file
    // the location of this file will be where the .cpp file exists in the project directory
   

   // outFile.open("file.txt");


    if (outFile.is_open())
    {
        outFile << "Arthas Menethil" << std::endl;
        outFile << "yummi " << std::endl;
    }

    outFile.close(); // any time we open a file we need to close it when we're done
}


void ReadFromFile()
{
    // similar process to writing however the class is different
    std::ifstream file("file.txt");

    //file.open("file.txt");
    std::string line = "";

    if (file.is_open())
    {
        while (getline(file, line))
        {

            std::cout << line << std::endl;
        }
    }
    else
    {
        std::cout << "file not open" << std::endl;
    }


    file.close();
}

void AppendToFile()
{

    std::ofstream file("file.txt", std::ios_base::app);

    //file.open("file.txt", std::ios::app);

    
    if (!file.is_open())
    {
        // file not found
        std::cout << "no file found" << std::endl;
    }
    else
    {
        file << "Uther" << std::endl;
    }

    file.close();

}


void SetColor(int colorCode)
{
    std::cout << "\033[" << colorCode << "m";
    /*
        30 black
        31 red
        32 green
        33 yellow
        34 blue
        35 magenta
        36 cyan
        37 white
        90 bright black
        91 bright red
        92 bright green
        93 bright yellow
        94 bright blue
        95 bright magenta
        96 bright cyan
        97 bright white
    */

}

void ResetColor()
{
    std::cout << "\033[0m";
}

void DisplayErrorText(std::string words)
{

    SetColor(91);
    Line();

    


    std::cout << words << std::endl;

    Line();

    ResetColor();

}


void UserDirection(std::string words)
{
    SetColor(92);
    Line();

    std::cout << words << std::endl;
    Line();
    ResetColor();

}


int main()
{
    // IfExample();
    // SwitchExample();
     //WriteToFile();
     //ReadFromFile();
    //AppendToFile();

     DisplayErrorText("testing testing testing");

     UserDirection("Don't forget to add and commit and push");


}
