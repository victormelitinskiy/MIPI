/*
 * A12.c
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

int main(void)
{
	
    int num, sum;

    // Получаем трехзначное число от пользователя
    printf("Print number");
    scanf("%d", &num);

    // Извлекаем цифры и вычисляем их сумму
    // Первая цифра (сотни)
    int firstDigit = num / 100;

    // Последняя цифра (единицы)
    int lastDigit = num % 10;

    // Средняя цифра (десятки)
    int middleDigit = (num / 10) % 10;

    // Суммируем цифры
    sum = firstDigit + middleDigit + lastDigit;

    // Выводим результат
    printf("Sum: %d\n", sum);

    return 0;
	
}

