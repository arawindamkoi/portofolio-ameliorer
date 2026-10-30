
#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Display portfolio header
void header() {
    cout << "\n========================================\n";
    cout << "          PERSONAL PORTFOLIO            \n";
    cout << "========================================\n";
    cout << "           WELCOME TO MY PROFILE        \n";
    cout << "========================================\n";
}

// 1. Introduction
void introduction() {
    cout << "\n========== INTRODUCTION ==========\n";
    cout << "Name       : Your Name\n";
    cout << "Profession : Creative Designer\n";
    cout << "Location   : Indonesia\n";
    cout << "About Me   : I am a creative and motivated\n";
    cout << "             individual passionate about\n";
    cout << "             technology, design, and creativity.\n";
    cout << "=================================\n";
}

// 2. What Can I Do
void skills() {
    cout << "\n========== WHAT CAN I DO ==========\n";
    cout << "[1] Graphic Design\n";
    cout << "[2] Web Development\n";
    cout << "[3] Video Editing\n";
    cout << "[4] Photography\n";
    cout << "[5] Digital Content Creation\n";
    cout << "==================================\n";
}

// 3. Work Job
void workJob() {
    cout << "\n============ WORK / JOB ============\n";
    cout << "Project 1 : Personal Website Design\n";
    cout << "Project 2 : Social Media Content\n";
    cout << "Project 3 : Branding & Visual Identity\n";
    cout << "Project 4 : Digital Creative Campaign\n";
    cout << "====================================\n";
}

// 4. Experience
void experience() {
    cout << "\n============ EXPERIENCE ============\n";
    cout << "2023 - 2024 : Graphic Design Projects\n";
    cout << "2024 - 2025 : Digital Content Creation\n";
    cout << "2025 - 2026 : Freelance Creative Work\n";
    cout << "\nEducation  : Your Education Background\n";
    cout << "Achievement: Your Achievements\n";
    cout << "====================================\n";
}

// Main menu
int main() {
    int choice;

    do {
        header();

        cout << "\n[1] Introduction\n";
        cout << "[2] What Can I Do\n";
        cout << "[3] Work / Job\n";
        cout << "[4] Experience\n";
        cout << "[5] Exit\n";

        cout << "\nSelect a category: ";
        cin >> choice;

        switch (choice) {
            case 1:
                introduction();
                break;

            case 2:
                skills();
                break;

            case 3:
                workJob();
                break;

            case 4:
                experience();
                break;

            case 5:
                cout << "\nThank you for visiting my portfolio!\n";
                break;

            default:
                cout << "\nInvalid selection. Please try again.\n";
        }

        if (choice != 5) {
            cout << "\nPress Enter to return to the main menu...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        }

    } while (choice != 5);

    return 0;
}
