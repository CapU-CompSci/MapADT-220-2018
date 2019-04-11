/*
 *  Hash LinkedList : Linked List
 *
 *  Author:  Keyann Al-Kheder
 *  
 */


/*******************
 * PRIVATE TYPE DECLARATION
 ********************/
struct  Node {
    char* hash_key;					//Hash Key	
    int frequency;					//Hash Value
    struct Node* next;			//pointer to the next node	
};									
typedef struct Node Node_t;	


/*******************
 * PRIVATE TYPE DECLARATION
 ********************/
struct list_s{
	Node_t* head;				//pointer to the head node
	Node_t*tail;				//pointer to the tail node
	int capacity;				//list size
};
typedef struct list_s linkedList;



/*
 * Constructor - return a node 
 * POST:  Node: [Value][NULL-]
 */
Node_t* nodeCreate(char* key, int value);


/*
 * Constructor - return a new, empty list 
 * POST:  isEmpty(list) == NULL
 */
linkedList llCreate();

/*
 * Output a text representation of a node
 */
void printNode(Node_t*node);

/*
 * Output a text representation of the list
 */
void printList(linkedList list);


/*
 * Returns True is the list is empty, False otherwise 
 */
bool isEmpty(const linkedList list);

/*
 * Append the given item to the list 
 * POST: Linked List list grows by 1 node, which the tail now points too.
 */
void llAppend(linkedList* list, char* key, int data);



/*
*	Destructor Function
*	POST: isEmpty(list) == True
*/
void llDelete(linkedList* list);


/*
 * return true if key is in list at index, return true if key is not in list
 */
bool find(linkedList* list, char* key);


/*
 * return true if key is in the list
 */
bool isDuplicate(linkedList* list, Node_t* node);
