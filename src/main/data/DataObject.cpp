#include "main/data/DataObject.hpp"
#include "main/data/FileLoader.hpp"

static int s_dataCount;

ARM DataObject::DataObject()
{
    m_flag = 0;
    m_addr = 0;
}

ARM DataObject::~DataObject()
{
}

ARM void DataObject::setup(const char* filename, int a, int b)
{
    m_flag |= 1;
    m_addr = func_0207eb28(&data_02116ce8, filename, b, a);
    m_size = func_0207ebf0(&data_02116ce8);
    s_dataCount++;
}

ARM void DataObject::setup(void* addr)
{
    s_dataCount++;
    m_addr = addr;
}

ARM void DataObject::cleanup()
{
    s_dataCount--;
    if (m_flag & 1) {
        func_0207f840(data_0211a60c, m_addr);
    }
    m_flag = 0;
    m_addr = 0;
}

ARM void* DataObject::getAddr()
{
    return m_addr;
}

ARM long DataObject::getSize()
{
    return m_size;
}

ARM void LZDataObject::setup(const char* filename, int a, int b)
{
    m_flag |= 1;
    m_addr = func_0207eb28(&data_02116ce8, filename, b, a);
    m_size = func_0207ebf0(&data_02116ce8);
    if (func_0207f548(m_addr)) {
        m_size = func_0207f52c(m_addr);
        void* data = func_0207f590(m_addr);
        func_0207f840(data_0211a60c, m_addr);
        m_addr = data;
    }
    s_dataCount++;
}

ARM void LZDataObject::setup(void* addr)
{
    s_dataCount++;
    m_addr = addr;
}
