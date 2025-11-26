/*
 * A7.c
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

int main(int argc, char **argv)
{
	signed int a,b, min, max;
	 // Получаем число от пользователя
    printf("Print number: ");
    scanf ("%d %d", &a, &b);
	max = a>b ? a : b;
	min = a<b ? a : b;
	printf ("%d>%d\n", min, max);
	return 0;
}

