#include <unordered_map>
#include <list>
using namespace std;

class LFUCache {
    int capacity, minFreq;

    unordered_map<int, pair<int,int>> keyValFreq;
    unordered_map<int, list<int>> freqList;
    unordered_map<int, list<int>::iterator> keyIter;

public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }

    int get(int key) {
        if (!keyValFreq.count(key)) return -1;

        auto [value, freq] = keyValFreq[key];

        freqList[freq].erase(keyIter[key]);
        if (freqList[freq].empty() && freq == minFreq)
            minFreq++;

        freq++;
        freqList[freq].push_front(key);
        keyIter[key] = freqList[freq].begin();
        keyValFreq[key] = {value, freq};

        return value;
    }

    void put(int key, int value) {
        if (capacity == 0) return;

        if (keyValFreq.count(key)) {
            keyValFreq[key].first = value;
            get(key);
            return;
        }

        if (keyValFreq.size() == capacity) {
            int evict = freqList[minFreq].back();
            freqList[minFreq].pop_back();

            keyValFreq.erase(evict);
            keyIter.erase(evict);
        }

        keyValFreq[key] = {value, 1};
        freqList[1].push_front(key);
        keyIter[key] = freqList[1].begin();
        minFreq = 1;
    }
};