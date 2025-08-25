/*************************************
*Modified by Gizem Gezici
*Date: 05.03.2012
*Circular Linked List
*************************************/

#include <iostream>
#include <string>
#include "linkedList.h"

int main()
{	
	linkedlist list;
	string word = "";
	cout << "Please enter a word!" << endl;
    // By default, the program runs in internal C-lion console. In this case, use Ctrl-D to exit from the loop. Note this might not work in Windows. So, you may need to use the external console, see below.
    // To run the program in the external console in C-Lion. In this case, use Ctrl-Z to exit from the loop (in Windows). To use the external console in C-Lion. Run|Edit Configurations|Run in external console
	while(cin >> word)
	{
		list.addToBeginning(word);
		cout << "Please enter a word!" << endl;
	}

	list.printList();
	cout << endl;
	list.printListInverse();

    //cin.clear(); // uncomment these two lines when you run the program in the external console (in order to see the output at the end).
    //cin.get();

	return 0;
}

