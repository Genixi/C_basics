struct LList {
	void* data; //указатель на даные
	struct LList* pnext; // указатель на следующий элемент
	struct LList* pprev;// указатель на предыдущий элемент
};
typedef struct LList LinkedList;

int size(void);
void add(void* item);
void print(void (*pf)(void *p));
void save(char *s, int n);

