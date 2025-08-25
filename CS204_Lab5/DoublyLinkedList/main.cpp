/*Author: Gizem Gezici
  Date: 12.03.2012
  Doubly Linked List
  Modified in 25.03.2021 by Artrim Kjamilji
  to include the deletList() member function
  Modified in 27.03.2023 by Selim Kirbiyik
  to change stop condition to quit keyword
  Program Run: In order to see the different effects between print and printReverse 
  as well as add to beginning and add to end member functions, you can write the 
  same sentence! For example, the sentence could be:
  *****CS204 is a very enjoyable course!*****
  Have fun!:)
*/


#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;


int main()
{
	linkedlist myDoublyLinkedList;
	string word = "";
    bool continueInput = true;

	cout << "Dear user, please enter some words. If you would like to stop writing words" << endl;
    cout << "then please write \"quit\"" << endl;
    do {
        cin >> word;
        if(word == "quit")
        {
            continueInput = false;
        }
        else
        {
            myDoublyLinkedList.addToBeginning(word);
        }
    } while(continueInput);

	//Since we are adding words at the beginning of the list
	//Print the list
	//The last added word will be displayed first
	myDoublyLinkedList.printList();
	cout << endl;
	//Print the list in a reverse order
	//The last added word will be displayed last
	myDoublyLinkedList.printListInverse();

	//Clear the linked list.
	myDoublyLinkedList = linkedlist();

    continueInput = true;
	cout << "Dear user, please enter some words. If you would like to stop writing words" << endl;
	cout << "then please write \"quit\"" << endl;
    do {
        cin >> word;
        if(word == "quit")
        {
            continueInput = false;
        }
        else
        {
            //Difference with above
            myDoublyLinkedList.addToEnd(word);
        }
    } while(continueInput);

	//Since we are adding words at the end of the list
	//Print the list
	//The last added word will be displayed last
	myDoublyLinkedList.printList();
	cout << endl;

	//Print the list in a reverse order
	//The last added word will be displayed first
	myDoublyLinkedList.printListInverse();

	/*****************
	You may implement a delete function for this linked list
	******************/

	myDoublyLinkedList.deleteList();
	myDoublyLinkedList.printList();
	myDoublyLinkedList.printListInverse();

	return 0;
}