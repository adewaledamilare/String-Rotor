
/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of South Wales                            /
/ (Formerly University of Glamorgan)                    /
/  Pontypridd. UK                                       /
/*******************************************************/


#include <iostream>
#include <string>
using namespace std;

class stringEffect
{
//This function rotates the characters of any supplied string until it reaches the end of it.
//It is a void function and does not need to return any value
//It requests for a single argument which is a pointer to a character variable
public:
void nameRotor(char* characters)
{
	//Call on the function nameCount first to know how many characters are in the string supplied
	int Length = nameCount(characters);

	//Optionally Display the computed length of the string
	//cout << Length;

	//Blank Line
	cout << endl;

	//Display the present or the initial character stored in the memory
	cout << characters << endl;

	//Declare an integer variable count, which will be used to count how many times the characters in the string are swapped
	int count=0;

	//Declare another variable j and Start a loop from 1, up to the time the we reach the end of the string.
	//Remember that a computer stores a string as an array of characters and ends it with a semi-colon,
	//Therefore the last REAL character in the string is the total Length minus 1 (Length-1)
	for(int j=1; j<=Length-1; j++)
	{
		//Smart move to make first is to set the last empty space at the end of the string,
		//which is holding the ('\n') null value to be equal to the first character in the string
		characters[Length]=characters[0];

		//Now Start a loop from the first character in the string to the end of it
		for(int i=0; i<=Length; i++)
		{
			//Shift each of the characters in the string now by a single value
			characters[i]=characters[i+1];
		}

		cout << endl;

		cout << "After rotation " << j <<" of the string we have: " << endl << endl;

		//Display the newly shifted characters and the generated string
		cout << characters << endl;

		//Increment the Loop
		count++;

		//Display the number of times the characters have been swapped, this is what the variable count is used for
		cout << "I have made " << count << " changes to the supplied character" << endl;

		//Blank Line
		cout << endl;

		//Pause the system to see your output displayed
		system("pause");
	}	
  }

//This function rotates characters of any supplied string until it reaches the last two.
//It only displays it when it reaches a point where the first two characters have been replaced with the last two characters
//It is a void function and does not need to return any value
//It requests for a single argument which is a pointer to a character variable
void TwoCharsRotor(char* characters)
{
	//Call on the function nameCount first to know how many characters are in the string supplied
	stringEffect char_count;

	int Length = char_count.nameCount(characters);

	//Display the computed length of the string
	cout << Length;

	//Blank Line
	cout << endl;

	//Display the present or the initial character stored in the memory
	cout << characters << endl;

	//Declare an integer variable count, which will be used to count how many times the characters in the string are swapped
	int count=0;
	
	//Start the loop from a time when count is equal to zero
	//This is the main loop that will be used to Specify where in the loop the replacement and rotation should stop
	//It will also be used to specify when the output of our manipulated string should be displayed
	do
	{
	    //Declare another variable j and Start a loop from 1, up to the time the we reach the end of the string.
	    //Remember that a computer stores a string as an array of characters and ends it with a semi-colon,
	    //Therefore the last REAL character in the string is the total Length minus 1 (Length-1)
		for(int j=1; j<=Length-1; j++)
	    {
		
		//Smart move to make first is to set the last empty space at the end of the string,
		//which is holding the ('\n') null value to be equal to the first character in the string	
		characters[Length]=characters[0];

		//Now Start a loop from the first character in the string to the end of it
		for(int i=0; i<=Length; i++)
		    {
			    //Shift each of the characters in the string now by a single value
			    characters[i]=characters[i+1];
		    }
		//Increment the count by 1 (one)
		count++;
	    }
	}
	//Now Specify where in the loop the replacement and rotation should stop
	//Display the newly shifted characters and the generated string
	while(count <= Length-1);

	//Display the presently stored string in the memory
	cout << characters << endl;

	//Display the number of times the characters have been swapped, this is what the variable count is used for
	cout << "I have made " << count << " changes before getting the supplied string" << endl;

	//Blank Line
	cout << endl;
   }


//This Function is used to count the number of characters available in any string supplied.
//It returns an integer variable
//It requests for a single argument which is a pointer to a character variable
int nameCount(char *howMany)
  {
	//Declare an integer variable count, which will be used to count how many characters are in the string supplied
	int count = 0;

	//Start counting from the start of the memory location, when count was equal to zero until it reaches the NULL ('\n') character
	while(howMany[count]!='\0')
	{
		//Increment the count
		count++;
	}
	//Return the integer variable count which now holds how many characters are in the string.
	return count;
   }

private:
	int Length;

    int count, i, j;
};



int main()
{
    stringEffect stringTest;
	
	//Declare an Array of 100 possible locations and initialize them all to NULL (An Empty Stack) 
	char user[100] = { };

	//Request for any string, lower than 100 characters
    cout << "Enter a name, word, or any string : ";

	//Store the supplied string in the reserved memory location (on the stack)
    cin >> user;

	//Optionally you can Call on the Function nameCount declared below and pass in the array directly so as to know the total number of characters present, 
	// The Function will compute and give out the total number of characters in the string supplied
    //cout << nameCount(user);

	//Blank Line
    cout << endl;

	//Call on the Function nameRotor to manipulate the supplied string and pass in the user[] array
	stringTest.nameRotor(user);

	//Blank Line
    cout <<endl;

	//Call on the Function TwoCharsRotor to replace the last 2 characters of the supplied string and pass in the user[] array
	stringTest.nameRotor(user);

	//Blank Line
	cout << endl;
}    
