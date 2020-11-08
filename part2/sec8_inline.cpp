#include <stddef.h>

class CIntArray
{
private:
  int* m_pnum;
  int m_nNumOf;

public:
  bool Success(); // メモリの確保が成功したか
  int NumOf();    // 配列の要素数
  int SizeOf();   // 配列のサイズ
};

inline bool CIntArray::Success()
{
  return m_pnum != NULL;
}

inline int CIntArray::NumOf()
{
  return m_nNumOf;
}

inline int CIntArray::SizeOf()
{
  return m_nNumOf*sizeof*m_pnum;
}
