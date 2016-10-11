// SimpleStringsWeek6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char string1[21] = "gyaxCLcIkWnyhL7xZ0tK";
	char string2[21] = "vHUJBwVnk2Pst3LacnIs";
	char string3[21] = "MrKeRwsOtEzvrrz2EGPV";
	int i;
	int ascii;
	int noDigitsReplaced = 0;
	int lowerCase = 0;
	int upperCase = 0;


	printf("BEFORE:\nstring1 = %s\nstring2 = %s\nstring3 = %s\n\n\n", string1, string2, string3);


	for (i = 0; string1[i] != '\0'; i++)
	{
		ascii = string1[i];
		if ((ascii >= 48) && (ascii <= 57))
		{
			string1[i] = 32;
			noDigitsReplaced++;
		}
	}


	for (i = 0; string2[i] != '\0'; i++)
	{
		ascii = string2[i];
		if ((ascii >= 65) && (ascii <= 90))
		{
			ascii += 32;
			string2[i] = ascii;
			lowerCase++;
		}
	}


	for (i = 0; string3[i] != '\0'; i++)
	{
		ascii = string3[i];
		if ((ascii >= 97) && (ascii <= 122))
		{
			ascii -= 32;
			string3[i] = ascii;
			upperCase++;
		}
	}

	printf("AFTER:\n");
	printf("string1 = %s <%d digits replaces>\n", string1, noDigitsReplaced);
	printf("string2 = %s <%d characters converted to lowercase>\n", string2, lowerCase);
	printf("string3 = %s <%d characters converted to uppercase>\n", string3, upperCase);

	return 0;
}

