/*
 * B8.c
 * 
 * Copyright 2025 Виктор <Виктор@DESKTOP-0PV8NM5>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
int main(void)
{	signed int a,x;
	x = 0;	
	 // Получаем число от пользователя
    printf("Print number: ");
    scanf ("%d", &a);
	a = abs(a);
	 while(a > 0){
        if (a % 10 == 9) x++;
        a = a / 10;
    }
    if (x == 1)
    {printf("yes");
	}
	else
	printf("no");
	return 0;
}

