struct LList {
	void* data; //��������� �� �����
	struct LList* pnext; // ��������� �� ��������� �������
	struct LList* pprev;// ��������� �� ���������� �������
};
typedef struct LList LinkedList;

int size(void);
void add(void* item);
void print(void (*pf)(void *p));
void save(char *s, int n);

