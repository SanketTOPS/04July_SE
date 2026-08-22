#include<stdio.h>
struct studinfo
{
	int id;
};
main()
{
	studinfo st;
	studinfo st1;
	st.id=101;
	st1.id=102;
	printf("ID is:%d",st.id);
	printf("\nID is:%d",st1.id);
}
