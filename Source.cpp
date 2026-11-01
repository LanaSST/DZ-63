#include <fstream>
#include <iostream>
#include <filesystem>
#include "DataAsHTML.h"
#include "DataAsJSON.h"
#include "DataAsText.h"

void saveToAsHTML(std::ofstream &file, const HTMLPrintable &printable)
{
    file << printable.printAsHTML();
}

void saveToAsJSON(std::ofstream &file, const JSONPrintable &printable)
{
    file << printable.printAsJSON();
}

void saveToAsText(std::ofstream &file, const TextPrintable &printable)
{
    file << printable.printAsText();
}


int main()
{
    const std::string str = "SOLID";

    DataAsText text(str);
    DataAsHTML html(str);
    DataAsJSON json(str);

    //Сохранение в отдельные файлы
    std::cout << "1.\n";
    std::cout << "Path: " << std::filesystem::current_path() << "\n";
    std::cout << "output.txt" << " " << "output.html" << " " <<  "output.json" << "\n";
    std::ofstream out1("output.txt");
    if (!out1) {
        std::cerr << "Cannot open output.txt\n";
        return 1;
    }
    saveToAsText(out1, text);
    std::ofstream out2("output.html");
    if (!out2) {
        std::cerr << "Cannot open output.html\n";
        return 1;
    }
    saveToAsHTML(out2, html);
    std::ofstream out3("output.json");
    if (!out3) {
        std::cerr << "Cannot open output.json\n";
        return 1;
    }
    saveToAsJSON(out3, json);

    // Печать через отдельные интерфейся
    std::cout << "2.\n";
    std::cout << "Text: " << text.printAsText() << '\n';
    std::cout << "HTML: " << html.printAsHTML() << '\n';
    std::cout << "JSON: " << json.printAsJSON() << '\n';

    // Полиморфизм
    std::cout << "3.\n";
    const HTMLPrintable &asHtml = html;
    std::cout << "Base: " << asHtml.printAsHTML() << '\n';

    return 0;
}
