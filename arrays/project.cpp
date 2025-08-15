 // Daily Planner Project in C++
 // By: Ganesh Sable
 #include<iostream>
 #include<fstream>
 #include<string>
 using namespace std;
 struct Task {
    int id;
    string title;
    string description;
 };
 void addTask() {
    ofstream fout("tasks.txt", ios::app);
    Task t;
    cout << "Enter Task ID: ";
    cin >> t.id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, t.title);
    cout << "Enter Description: ";
    getline(cin, t.description);
    fout << t.id << "|" << t.title << "|" << t.description << endl;
    fout.close();
    cout << "Task Added Successfully!" << endl;
 }
 void viewTasks() {
    ifstream fin("tasks.txt");
    Task t;
    string line;
    cout << "\n---- All Tasks ----\n";
    while (getline(fin, line)) {
        size_t pos1 = line.find("|");
        size_t pos2 = line.rfind("|");
        t.id = stoi(line.substr(0, pos1));
        t.title = line.substr(pos1 + 1, pos2 - pos1 - 1);
        t.description = line.substr(pos2 + 1);
        cout << "ID: " << t.id << "\nTitle: " << t.title << "\nDescription: " <<
 t.description << "\n---\n";
    }
    fin.close();
 }
 void deleteTask() {
    int del_id;
    cout << "Enter Task ID to delete: ";
    cin >> del_id;
    ifstream fin("tasks.txt");
    ofstream fout("temp.txt");
    string line;
    bool found = false;
    while (getline(fin, line)) {
        int id = stoi(line.substr(0, line.find("|")));
        if (id != del_id) {
            fout << line << endl;
        } else {
            found = true;
        }
    }
    fin.close();
    fout.close();
    remove("tasks.txt");
    rename("temp.txt", "tasks.txt");
    if (found)
        cout << "Task Deleted Successfully!" << endl;
    else
        cout << "Task Not Found!" << endl;
 }
 void menu() {
    int choice;
    do {
        cout << "\nDaily Planner Menu:\n";
        cout << "1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: deleteTask(); break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid Choice!" << endl;
        }
    } while (choice != 4);
 }
 int main() {
    menu();
    return 0;
 }