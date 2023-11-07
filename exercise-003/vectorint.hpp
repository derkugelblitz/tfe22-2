#ifndef WORKSPACES_TFE22_2_EXERCISE_003_VECTORINT_HPP
#define WORKSPACES_TFE22_2_EXERCISE_003_VECTORINT_HPP

class VectorInt {
public:
    VectorInt(int size);
    ~VectorInt();
    void push_back(int value);
    void push_back_new(int value);
    void resize(int new_size);
    void clear();
    int& at(int index);
    int size();
private:
    int m_size;
    int* mp_Data;
    int m_capacity;
};

#endif