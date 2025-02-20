#include <stdio.h>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main() {
    int number;
    printf("%s", "Введите номер задачи: ");
    scanf("%d", &number);
    if (number == 1) {
        task1();
    }
    else if (number == 2) {
        task2();
    }
    else if (number == 3) {
        task3();
    }
    else if (number == 4) {
        task4();
    }
    else if (number == 5) {
        task5();
    }
    else if (number == 6) {
        task6();
    }
    else if (number == 7) {
        task7();
    }
    else if (number == 8) {
        task8();
    }
    else {
        printf("%s", "Такой задачи нет\n");
    }
}


void task1() {
    printf("%s", "Название задачи: Минимальный вес для полета\n");
    int number;
    scanf("%d", &number);
    if (number >= 60 && number <= 90) {
        printf("%s", "Может пройти отбор\n");
    }
    else {
        printf("%s", "Не может пройти отбор\n");
    }
}

void task2() {
    printf("%s", "Название задачи: Топливо для лунохода\n");
    int dist;
    scanf("%d", &dist);
    if (dist < 500) {
        printf("%s", "Сможет\n");
    }
    else {
        printf("%s", "Не сможет\n");
    }
}

void task3() {
    printf("%s", "Название задачи: Кодировка деталей двигателя ракеты\n");
    char symbol;
    scanf(" %c", &symbol); // откуда у тебя появилась идея поставить пробел перед %c ? Я просил обходиться без AI =/
    // Фрагмент из скинутого Вами "03_Шпаргалка для практики №1" (138 строка)
    // 3. **Использование пробела в формате `scanf`:**
    // ```c
    // scanf(" %c", &symbol); // Пробел перед %c игнорирует пробельные символы
    // ```
    if (symbol >= 'A' && symbol <= 'Z') {
        printf("%s", "Входит\n");
    }
    else {
        printf("%s", "Не входит\n");
    }
}

void task4() {
    printf("%s", "Название задачи: Ожидаемый старт миссии\n");
    int date;
    scanf("%d", &date);
    int year, month, day;
    year = date / 10000;
    month = date % 10000 / 100;
    day = date % 100;
    // if (year >= 2025 && month == 2 && day > 11) {
    //     printf("%s", "Находится в будущем\n");
    // }
    // else if (year >= 2025 && month > 2) { // тут нельзя было обойтись одним условияем, вместо двух ?!
    //     printf("%s", "Находится в будущем\n");
    // }
    // else {
    //     printf("%s", "Не находится в будущем\n");
    // }
    if (year > 2025 || (year == 2025 && (month > 2 || (month == 2 && day > 11)))) {
        printf("%s", "Находится в будущем\n");
    } else {
        printf("%s", "Не находится в будущем\n");
    }
}

void task5() {
    printf("%s", "Название задачи: Радиосвязь с Землей\n");
    float number;
    scanf("%f", &number);
    if (number >= 2.5 && number <= 3.5) {
        printf("%s", "Входит\n");
    }
    else {
        printf("%s", "Не входит\n");
    }
}

void task6() {
    printf("%s", "Название задачи: Оптимальный вес груза\n");
    int N;
    scanf("%d", &N);
    if (N % 4 == 0) {
        printf("%s", "Возможно, ");
        printf("%d", N / 4);
        printf("%s", "\n");
    }
    else {
        printf("%s", "Не возможно\n");
    }
}

void task7() {
    printf("Название задачи: Уровень кислорода на борту\n");
    float oxygenLevel;
    scanf("%f", &oxygenLevel);
    if (oxygenLevel < 15.0) {
        printf("Уровень кислорода слишком низкий\n");
    } else {
        printf("Уровень кислорода в норме\n");
    }
}

void task8() {
    printf("Название задачи: Смена экипажа на орбите\n");
    int astronauts;
    scanf("%d", &astronauts);
    if (astronauts % 2 == 0) {
        printf("Можно доставить всех космонавтов группами без остатка\n");
    } else {
        printf("Нельзя доставить всех космонавтов без остатка\n");
    }
}
