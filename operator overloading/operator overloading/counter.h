#pragma once
class Counter
{
private:
    int count;

public:
    Counter();
    Counter(int c);
    int get_count();

    // Prefix
    Counter operator ++ ();
    Counter operator -- ();

    // Postfix
    Counter operator ++ (int);
    Counter operator -- (int);
};

