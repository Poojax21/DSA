#include <iostream>
using namespace std;

#define SIZE 11

int table1[SIZE];
int table2[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++) {
        table1[i] = -1;
        table2[i] = -1;
    }
}

int h1(int key) {
    return key % SIZE;
}

int h2(int key) {
    return (key / SIZE) % SIZE;
}


void insert(int key) {
    int index1 = h1(key);

    if (table1[index1] == -1) {
        table1[index1] = key;
        return;
    }

    int displaced = table1[index1];
    table1[index1] = key;

    int index2 = h2(displaced);
    if (table2[index2] == -1) {
        table2[index2] = displaced;
        return;
    }
    cout << "Rehash needed for key " << key << endl;
}

void display() {
    cout << "Table 1:\n";
    for (int i = 0; i < SIZE; i++)
        cout << i << " -> " << table1[i] << endl;

    cout << "\nTable 2:\n";
    for (int i = 0; i < SIZE; i++)
        cout << i << " -> " << table2[i] << endl;
}

int main() {
    init();

    int keys[] = {20, 50, 53, 75};
    for (int key : keys)
        insert(key);

    display();
    return 0;
}