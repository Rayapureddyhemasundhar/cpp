class LFUCache {
    int minFreq, cap;

    unordered_map<int, pair<int,int>> valFreq;
    unordered_map<int, list<int>> freqList;
    unordered_map<int, list<int>::iterator> pos;
    unordered_map<int, int> keyFreq;

public:
    LFUCache(int capacity) {
        cap = capacity;
        minFreq = 0;
    }

    void update(int key) {
        int freq = keyFreq[key];

        freqList[freq].erase(pos[key]);
        keyFreq[key]++;

        freqList[freq + 1].push_back(key);
        pos[key] = --freqList[freq + 1].end();

        if (freqList[freq].empty() && minFreq == freq)
            minFreq++;
    }

    int get(int key) {
        if (!valFreq.count(key)) return -1;

        update(key);
        return valFreq[key].first;
    }

    void put(int key, int value) {
        if (cap <= 0) return;

        if (valFreq.count(key)) {
            valFreq[key].first = value;
            update(key);
            return;
        }

        if (valFreq.size() == cap) {
            int evict = freqList[minFreq].front();
            freqList[minFreq].pop_front();

            valFreq.erase(evict);
            keyFreq.erase(evict);
            pos.erase(evict);
        }

        valFreq[key] = {value, 1};
        keyFreq[key] = 1;
        minFreq = 1;

        freqList[1].push_back(key);
        pos[key] = --freqList[1].end();
    }
};