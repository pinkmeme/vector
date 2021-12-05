#ifndef VECTOR_CVECTOR_H
#define VECTOR_CVECTOR_H

#include <cassert>

template<typename T>
class cvector
{
private:
    size_t _size = 0;
    size_t _capacity = 2;
    T* _data = nullptr;

    void ReAlloc(size_t new_capacity)
    {
        T* new_data = new T[new_capacity];
        if (new_capacity < _size){
            _size = new_capacity;
        }

        for(size_t i = 0; i < _size; i++){
            new_data[i] = std::move(_data[i]);
        }

        delete _data;
        _data = new_data;
        _capacity = new_capacity;
    }
public:
    cvector()
    {
        ReAlloc(2);
    }

    explicit cvector(size_t size)
    {
        ReAlloc(size);
    };

    cvector(size_t size, const T &initial)
    {
        ReAlloc(size);
        _size = size;
        for(size_t i = 0; i < _size; i++)
            _data[i] = initial;
    };

    cvector(const cvector<T> &value)
    {
        ReAlloc(value.capacity());
        _size = value.size();
        for(size_t i = 0; i < _size; i++)
            _data[i] = value._data[i];
    };

    ~cvector()
    {
        delete [] _data;
    }

    T& operator[](size_t index)
    {
        assert(!(_size < index));
        return _data[index];
    }

    cvector<T> & operator=(const cvector<T> & value)
    {
        delete [] _data;
        _size = value._size;
        _capacity = value._capacity;
        _data = new T[_capacity];
        for (int i = 0; i < _size; i++)
            _data[i] = value._data[i];
        return *this;
    };

    void push_back(const T& value)
    {
        if(_size >= _capacity){
            ReAlloc(_capacity * 2);
        }
        _data[_size++] = value;
    }

    void push_back(T&& value)
    {
        if(_size >= _capacity){
            ReAlloc(_capacity * 2);
        }
        _data[_size++] = std::move(value);
    }

    T pop_back(){
        _size--;
        T temp = _data[_size];
        _data[_size].~T();
        return temp;
    }

    void clear()
    {
        for(size_t i = 0; i < _size; i++)
            _data[i].~T();
        _size = 0;
    }

    void shrink_to_fit()
    {
        if(_size > 2) {
            ReAlloc(_size);
        }
        else{
            ReAlloc(2);
        }
    }

    bool empty() const {return _size == 0;}
    size_t size() const {return _size;};
    size_t capacity() const {return _capacity;};

};


class cpair
{
public:
    int _first;
    double _second;

    explicit cpair(int first = 0, double second = 0)
    {
        _first = first;
        _second = second;
    }

    cpair(const cpair& value)
    {
        _first = value._first;
        _second = value._second;
    }

    friend std::ostream& operator<< (std::ostream &out, const cpair &value)
    {
        out << value._first << " : " << value._second;
        return out;
    };

    friend std::istream& operator>> (std::istream &in, cpair &value)
    {
        in >> value._first >> value._second;
        return in;
    };

    cpair & operator=(const cpair& value) = default;

    friend bool operator<(const cpair& v, const cpair& v2);
    friend bool operator>(const cpair& v, const cpair& v2);
    friend bool operator==(const cpair& v, const cpair& v2);
    friend bool operator<=(const cpair& v, const cpair& v2);
    friend bool operator>=(const cpair& v, const cpair& v2);
};


bool operator>(const cpair& v, const cpair& v2)
{
    return (v._first > v2._first) or (v._first == v2._first and v._second > v2._second);
}

bool operator<(const cpair& v, const cpair& v2)
{
    return (v._first < v2._first) or (v._first == v2._first and v._second < v2._second);
}

bool operator==(const cpair& v, const cpair& v2)
{
    return v._first == v2._first and v._second == v2._second;
}

bool operator<=(const cpair& v, const cpair& v2)
{
    return v < v2 or v == v2;
}

bool operator>=(const cpair& v, const cpair& v2)
{
    return v > v2 or v == v2;
}



#endif //VECTOR_CVECTOR_H
