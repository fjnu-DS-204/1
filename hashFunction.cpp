#include <iostream>
#include <vector>
#include <list>
const int TABLE_SIZE = 10;
// 哈希函数
int hashFunction(int key) {
    return key % TABLE_SIZE;
}
// 插入学号到哈希表
void insertToHashTable(std::vector<std::list<int> >& hashTable, int key) {
    int index = hashFunction(key);
    hashTable[index].push_back(key);
}

// 查询学号是否在哈希表中
bool searchInHashTable(std::vector<std::list<int> >& hashTable, int key) {
    int index = hashFunction(key);
    for (int value : hashTable[index]) {
        if (value == key) {
            return true;
        }
    }
    return false;
}

