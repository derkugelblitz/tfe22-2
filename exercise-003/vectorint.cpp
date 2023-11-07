#include "vectorint.hpp"
#include <fmt/chrono.h>
#include <fmt/format.h>

VectorInt::VectorInt(int size) {
    mp_Data = new int[size];
    m_size = size;
    m_capacity = size;
}

VectorInt::~VectorInt() {
    if(mp_Data != nullptr) {
        delete [] mp_Data;
    }
    mp_Data = nullptr;
}

/*void VectorInt::push_back(int value){
    if (m_size == m_capacity){
        m_capacity = m_capacity + 1;
        int* tmp = new int[m_capacity];
        for (int i = 0; i < m_size; i++){
            tmp[i] = mp_Data[i];
        }
        delete[] mp_Data;
        mp_Data = tmp;
    }
    mp_Data[m_size] = value;
    m_size++;*/
}

void VectorInt::push_back_new(int value){
    if (m_size == m_capacity){
        m_capacity *=2;
        int* tmp = new int[m_capacity];
        for (int i = 0; i < m_size; i++){
            tmp[i] = mp_Data[i];
        }
        delete[] mp_Data;
        mp_Data = tmp;
    }
    mp_Data[m_size] = value;
    m_size++;
}

int& VectorInt::at(int index){
    if (index < 0 || index >= m_size){
        fmt::print("Index out of range\n");
        return m_null;
    }
    return mp_Data[index];
}

int VectorInt::size(){
    return m_size;
}

void VectorInt::resize(int new_size){
    if (new_size > m_size) {
        m_size = new_size;
        int* tmp2 = new int[m_size];
        for (int i = 0; i < m_size; i++){
            tmp2[i] = mp_Data[i];
        }
        delete[] mp_Data;
        mp_Data = tmp2;
    }
    m_size = new_size;
}

void VectorInt::clear(){
    if(mp_Data != nullptr){
        delete [] mp_Data;
    }
    mp_Data = nullptr;
    m_size = 0;
    m_capacity = 0;
}