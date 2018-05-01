#include <iostream>
using namespace std ;
class Node {
public :
	string name , lastName , address , email ;
	int tel , postalcode ;
	Node *next ;
	Node *back ;
};
/*class happyDay {
	public :
		int day , month , year ;
		happyDay (int year1 , int month1 , int day1) : year(year1) , month(month1) , day(day1) {}
};*/
class person {
	Node *head , *last , *pl ;
	public :		
		person () {
			head = 0 ;
		}                                                        
		//int tel , postalCode ; 
		void search (void) ;
		void sort (void) ;
		void show (void) ;
		void add (void) ;
	/*	Node operator= (Node *c) {
		Node *temp ;
		temp = new Node ;
		temp->name = c->name ;
		temp->lastName = c->lastName ;
		return *temp ;
		}*/
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
	}
}
void person:: show (void) {
	for (; last ; last = last->back) {
		pl = last ;
		/*cout << "name 1 =  " << last->name << endl ;
		cout << "lastname 1 =  " << last->lastName << endl ;*/
	}
	last = pl ;
	for (; last ; last = last->next ){
		cout << "name =  " << last->name << endl ;
		cout << "lastname =  " << last->lastName << endl ;
		cout << "address =  " << last->address << endl ;
		cout << "email =  " << last->email << endl ;
		cout << "tel =  " << last->tel << endl ;
		cout << "postalcode = " << last->postalcode << endl ;
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
					/*temp = pl3 ;
					pl3->next = pl2->next ;
					pl3->back = pl2->back ;
					pl2->next = temp->next ;
					pl2->back = temp->back ;	
					//cout << "\n pl2->lastName [" << i << "] =  " << pl2->lastName[i] ;
					/*temp = pl3 ;
					pl3 = pl2 ;
					pl2 = temp ;*/
					//cout << "\n pl2->lastName [" << i << "] =  " << pl2->lastName[i] ;
					temp->name = pl3->name ;
					temp->lastName = pl3->lastName ;
					temp->address = pl3->address ;
					temp->email = pl3->email ;
					temp->tel = pl3->tel ;
					temp->postalcode = pl3->postalcode ;
					//temp = pl3 ;
					pl3->name = pl2->name ;
					pl3->lastName = pl2->lastName ;
					pl3->address = pl2->address ;
					pl3->email = pl2->email ;
					pl3->tel = pl2->tel ;
					pl3->postalcode = pl2->postalcode ;
					
					pl2->name = temp->name ;
					pl2->lastName = temp->lastName ;
					pl2->address = temp->address ;
					pl2->email = temp->email ;
					pl2->tel = temp->tel ;
					pl2->postalcode = temp->postalcode ;
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
	for (int i = 0 ; i < 3 ; i++)
		a.add() ;
	a.show() ;
	a.search() ;
	a.sort() ;
	cout << " \n this is sorted ! \n" ;
	a.show() ;
	
	return 0 ;
}



