#include"statc.h"
void stinit(st* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}
void stdestory(st* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
void stpush(st* ps, newtype x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		newtype* tmp = (newtype*)realloc(ps->a, sizeof(newtype) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;

}
void stpop(st* ps)
{
	assert(ps);
	assert(ps->top > 0);
	--ps->top;
}
newtype sttop(st* ps)
{
	assert(ps);
	assert(ps->top);
	return ps->a[ps->top - 1];
}

int stsize(st* ps)
{
	assert(ps);
	return ps->top;
}
bool stempty(st* ps)
{
	assert(ps);
	return ps->top == 0;
}