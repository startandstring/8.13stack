#include"statc.h"


void TestStack1()
{
	st st;
	stinit(&st);
	stpush(&st, 1);
	stpush(&st, 2);
	stpush(&st, 3);
	stpush(&st, 4);
	stpush(&st, 5);

	while (!stempty(&st))
	{
		printf("%d ", sttop(&st));
		stpop(&st);
	}
	printf("\n");

	stdestory(&st);
}

int main()
{
	TestStack1();

	return 0;
}

