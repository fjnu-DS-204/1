#include <iostream>
#include <vector>
#include <list>
const int TABLE_SIZE = 10;
// ��ϣ����
int hashFunction(int key) {
    return key % TABLE_SIZE;
}
// ����ѧ�ŵ���ϣ��
void insertToHashTable(std::vector<std::list<int> >& hashTable, int key) {
    int index = hashFunction(key);
    hashTable[index].push_back(key);
}

// ��ѯѧ���Ƿ��ڹ�ϣ����
bool searchInHashTable(std::vector<std::list<int> >& hashTable, int key) {
    int index = hashFunction(key);
    for (int value : hashTable[index]) {
        if (value == key) {
            return true;
        }
    }
    return false;
}

