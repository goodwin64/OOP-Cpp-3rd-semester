#pragma once
#include <iostream>
#include "menu.h"
#include "task.h"

using namespace std;

int main(){
	
	setlocale(0, "");

	information();
	menu();
	system("pause");
	return 0;
}