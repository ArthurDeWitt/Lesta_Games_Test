#include <iostream>
#include <deque>

template <typename T>
class Circular {
public:
    Circular(size_t capacity) : capacity(capacity) {}

    void push(const T& value) {
        if (buffer.size() == capacity) {
            buffer.pop_front();
        }
        buffer.push_back(value);
    }

    T pop() {
        if (buffer.empty()) {
            throw std::runtime_error("Buffer is empty");
        }
        T value = buffer.front();
        buffer.pop_front();
        return value;
    }

private:
    std::deque<T> buffer;
    size_t capacity;
};

/*
* 1. ����� �������� ������� ������� ����� ����������� �������� (������ ������ ����� �������� :))
* 2. ���������� ������� ������� ������ ����� ���������� ����� �������� � �������� ��������� � ��������� ������, 
     �� �������� ����� ����� �������� � ��������� ������� (��� ����� � ��������� � ��������� �������� ��������) 
*/