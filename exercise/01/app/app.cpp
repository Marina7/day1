// app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include "../lib/public.h"
#include "../dll2/public.h"

int main()
{
	// static library
	std::cout << "static lib: " << static_lib::get_value(1) << std::endl;

	// dynamic library

	// dynamic library with implib
	std::cout << "dynamic lib with implib: " << get_value(1) << std::endl;

    
}
