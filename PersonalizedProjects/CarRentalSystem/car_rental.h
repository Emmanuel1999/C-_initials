#include <iostream>
/*
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
*/

void customer_data();
int car_count();
int customer_count();
int rate(int, int);
void new_customer_data();
void car_data();
void admin();
void user();
void menu();
void fullscreen();
void art();
void exit_art();
void new_car_data();
void del_car();
void display_car();
void existing_customer();
void load();
void load_CHECK();
void gotoxy(int, int);
void time();
void boarder();
int count_user();
void tNc();
void read_user_pass();
void avail_car();
int count_avail();
const std::string current_date_time();
const std::string Date();
void date();
void display_available_car();
void gotoXY(int, int);
void load_EXIT();
void load_UPDATE();
void new_user_pass();
void password();
void reset_available();
void show_car_data();
void welcome();

struct car{};
struct customer{};
struct pass{};


pass userPass[1000];
car rent[1000];
customer cust[1000];
car avail[1000];
