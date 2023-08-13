#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int newtype;
typedef struct stack
{
	newtype* a;
	int top;
	int capacity;
}st;
void stinit(st* ps);
void stdestory(st* ps);
void stpush(st* ps, newtype x);
void stpop(st* ps);
newtype sttop(st* ps);

int stsize(st* ps);
bool stempty(st* ps);