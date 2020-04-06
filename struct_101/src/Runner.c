/*
 * Runner.c
 *
 *  Created on: 06-Apr-2020
 *      Author: Soham
 */

#include<stdio.h>
struct point
{
	int x, y;
};

int main()
{
	struct point s = {1, 2};
	struct point *p = &s;
	printf("x: %d, y: %d",p->x,p->y);
}
