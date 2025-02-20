#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    printf("%s", "Учет студентов в университете\n");
    struct Student {
        char name[50];
        int age;
        float gpa;
    };
    int N;
    scanf("%d", &N);
    struct Student students[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", "---------\n");
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.1f\n", students[i].gpa);
    }
}

void task2() {
    printf("%s", "Инвентаризация товаров\n");
    struct Item { 
        char name[50];
        int count;
        float price;
    };
    int N;
    scanf("%d", &N);
    struct Item items[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %d %f", items[i].name, &items[i].count, &items[i].price);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", "---------\n");
        printf("Item: %s\n", items[i].name);
        printf("Quantity: %d\n", items[i].count);
        printf("Price: %.1f\n", items[i].price);
    }
}

void task3() {
    printf("%s", "Календарь событий\n");
    struct Date {
        int day;
        int month;
        int year;
    };
    struct Event {
        char name[50];
        struct Date date;
        char description[200];
    };
    int N;
    scanf("%d", &N);
    struct Event events[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, 
            &events[i].date.month, &events[i].date.year, events[i].description);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", "---------\n");
        printf("Event: %s\n", events[i].name);
        printf("Date: %d/%d/%d\n", events[i].date.day, events[i].date.month, events[i].date.year);
        printf("Description: %s\n", events[i].description);
    }
}

void task4() {
    printf("%s", "Книга учета сотрудников\n");
    struct Employee {
        char name[50];
        char pos[50];
        float price;
    };
    int N;
    scanf("%d", &N);
    struct Employee emp[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", emp[i].name, emp[i].pos, &emp[i].price);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", "---------\n");
        printf("Name: %s\n", emp[i].name);
        printf("Age: %s\n", emp[i].pos);
        printf("GPA: %.2f\n", emp[i].price);
    }
}

void task5() {
    printf("%s", "Задача с объединением\n");
    union Data {
        int i;
        double f;
        char str[20];
    };
    int choice;
    printf("1. Целое число\n2. Вещественное число\n3. Строка\n");
    scanf("%d", &choice);
    union Data data;
    if (choice == 1) {
        scanf("%d", &data.i);
        printf("Integer: %d\n", data.i);
    } else if (choice == 2) {
        scanf("%lf", &data.f);
        printf("Float: %lf\n", data.f);
    } else if (choice == 3) {
        while (getchar() != '\n');
        fgets(data.str, sizeof(data.str), stdin);
        printf("String: %s\n", data.str);
    } else {
        printf("Неверный выбор\n");
    };
}

void task6() {
    printf("%s", "Журнал учета транспортных средств\n");
    struct Vehicle {
        char mark[20];
        char model[20];
        int year;
        char engine[20];
    };
    int N;
    scanf("%d", &N);
    struct Vehicle cars[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%s %s %d %s", cars[i].mark, cars[i].model, 
            &cars[i].year, cars[i].engine);
    }
    printf("%s", "---------\n");
    for (int i = 0; i < N; i++) {
        printf("%s ", cars[i].mark);
        printf("%s ", cars[i].model);
        printf("%d ", cars[i].year);
        printf("%s", cars[i].engine);
        printf("%s", "\n");
    }
}

void task7() {
    printf("%s", "Журнал учета студентов с использованием объединений\n");
    union Grade {
        int num;
        char letter[3];
    };
    int N;
    scanf("%d", &N);
    union Grade grades[N];
    for (int i = 0; i < N; i++) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].num);
            printf("Grade: %d\n", grades[i].num);
        } else if (type == 2) {
            scanf("%s", grades[i].letter);
            printf("Grade: %s\n", grades[i].letter);
        }
    }
}

void task8() {
    printf("%s", "График учебных дисциплин\n");
    struct Course {
        char name[20];
        int count;
        char teacher[20];
    };
    int N;
    scanf("%d", &N);
    struct Course courses[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].count, courses[i].teacher);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", "---------\n");
        printf("Course: %s\n", courses[i].name);
        printf("Credits: %d\n", courses[i].count);
        printf("Professor: %s\n", courses[i].teacher);
    }
}
