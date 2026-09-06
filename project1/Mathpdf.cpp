#include "Mathpdf.h"

void Openpdf(const wchar_t* subPath)
{
    ShellExecute(
        NULL,
        L"open",
        subPath,
        NULL,
        NULL,
        SW_SHOWNORMAL
    );
}

void Openpdf_answer()
{
	std::wstring subPath;
	std::wcout << "Choose and Text\n" << "Mathematics_resources\\\\ \"AND\" " "Exponent_ans.pdf\t" "Factor_ans.pdf\t" "Identity_ans.pdf\t" << std::endl;
	std::wcin >> subPath;
	Openpdf(subPath.c_str());
}