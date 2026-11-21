#include "counter.h"
Counter::Counter() : count(0) {}

Counter::Counter(int c) : count(c) {}

int Counter::get_count() {
    return count;
}

// Prefix ++
Counter Counter::operator ++ () {
    ++count;
    return Counter(count);
}

// Prefix --
Counter Counter::operator -- () {
    --count;
    return Counter(count);
}

// Postfix ++
Counter Counter::operator ++ (int) {
    count++;
    return Counter(count);
}

// Postfix --
Counter Counter::operator -- (int) {
    count--;
    return Counter(count);
}
