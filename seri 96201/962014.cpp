#include <iostream>
using namespace std ;
class happyDay {
	public :
		int day , month , year ;
};
class Node : public happyDay{
public :
	string name , lastName , address , email ;
	int tel , postalcode ;
	Node *next ;
	Node *back ;
};
class person {
	Node *head , *last , *pl ;
	public :		
		person () {
			head = 0 ;
		}                                                        
		void search (void) ;
		void sort (void) ;
		void show (void) ;
		void add (void) ;
};
void person:: add (void) {
	Node *temp ;
	temp = new Node ;
	temp->next = NULL ;
	if (head == NULL) {
		temp->back = NULL ;
		head = temp ;
		cout << "enter name :  " ;
		cin >> head->name ;
		cout << "enter last name :  " ;
		cin >> head->lastName ;
		cout << "enter address :  " ;
		cin >> head->address ;
		cout << "enter email :  " ;
		cin >> head->email ;
		cout << "enter telephone :  " ;
		cin >> head->tel ;
		cout << "enter postalcode :  " ;
		cin >> head->postalcode ;
		cout << "enter the " ;
		cin >> head->day ;
		cout << "enter the " ;
		cin >> head->month ;
		cout << "enter the " ;
		cin >> head->year ;
		last = head ;
		pl = head ;
	}
	else {
		last->next = temp ;
		temp->back = last ;
		last = temp ;
		cout << "enter name :  " ;
		cin >> last->name ;
		cout << "enter last name :  " ;
		cin >> last->lastName ;
		cout << "enter address :  " ;
		cin >> last->address ;
		cout << "enter email :  " ;
		cin >> last->email ;
		cout << "enter telephone :  " ;
		cin >> last->tel ;
		cout << "enter postalcode :  " ;
		cin >> last->postalcode ;
		cout << "enter the birthday :  " ;
		cin >> head->day ;
		cout << "enter the birth month :  " ;
		cin >> head->month ;
		cout << "enter the Year of Birth :  " ;
		cin >> head->year ;
	}
}
void person:: show (void) {
	for (; last ; last = last->back) {
		pl = last ;
	}
	last = pl ;
	for (; last ; last = last->next ){
		cout << "name =  " << last->name << endl ;
		cout << "lastname =  " << last->lastName << endl ;
		cout << "address =  " << last->address << endl ;
		cout << "email =  " << last->email << endl ;
		cout << "tel =  " << last->tel << endl ;
		cout << "postalcode = " << last->postalcode << endl ;
		cout << "happy day : " <<last->year << " / " << last->month << " / " << last->day ; ;
		cout << "-------------------------------------------\n" ;
	}
}
void person::search (void) {
	string lS ;
	pl = head ;
	cout << "\n		enter the last name for search :  \n\n" ;
	cin >> lS ;
	int i = 0 ;
	while (i == 0) {
		for (; pl ; pl = pl->next ) {
			if ( lS == pl->lastName ) {
				cout << "\n		this last name is avilable ! \n\n" ;
				i = 1 ;
				break ;
			}
		}
		if (i == 0) {
			cout << "\nthis last name unavilable !     pls try again !\n" ;
			cin >> lS ;
			pl = head ;
		}
	}
}
void person::sort (void)  {
	pl = head ;
	Node *pl3 , *pl2 , *temp ;
	temp = new Node ;
	pl3 = pl ;
	for ( ; pl3 ; pl3 = pl3->next ) {
		for (pl2 = pl3 ; pl2 ; pl2 = pl2->next) {
			for (int i = 0 ; pl2->lastName[i] ; i++) {
				if (pl2->lastName[i] < pl3->lastName[i] ) {
					temp->name = pl3->name ;
					temp->lastName = pl3->lastName ;
					temp->address = pl3->address ;
					temp->email = pl3->email ;
					temp->tel = pl3->tel ;
					temp->postalcode = pl3->postalcode ;
					temp->year = pl3->year ;
					temp->month = pl3->month ;
					temp->day = pl3->day ;
					
					pl3->name = pl2->name ;
					pl3->lastName = pl2->lastName ;
					pl3->address = pl2->address ;
					pl3->email = pl2->email ;
					pl3->tel = pl2->tel ;
					pl3->postalcode = pl2->postalcode ;
					pl3->year = pl2->year ;
					pl3->month = pl2->month ;
					pl3->day = pl2->day ;
					
					pl2->name = temp->name ;
					pl2->lastName = temp->lastName ;
					pl2->address = temp->address ;
					pl2->email = temp->email ;
					pl2->tel = temp->tel ;
					pl2->postalcode = temp->postalcode ;
					pl2->year = temp->year ;
					pl2->month = temp->month ;
					pl2->day = temp->day ;
					break ;
				}
				if (pl2->lastName[i] > pl3->lastName[i]) {
					break ;
				}
			}
		}
	}
} 
int main () {
	person a ;
	int n ;
	cout << "enter the number of person :  " ;
	for ( ; n > 0 ; n--)
		a.add() ;
	a.show() ;
	a.search() ;
	a.sort() ;
	cout << " \n this is sorted ! \n" ;
	a.show() ;
	return 0 ;
}
