#ifndef UTILS_VECTOR2D_H
#define UTILS_VECTOR2D_H


#include <QVector>


namespace Utils {

template<class T>
class Vector2D {
  private:
    QVector<QVector<T> > array;

    unsigned int m_rows;

    unsigned int m_colls;


  public:
    Vector2D();

    Vector2D(unsigned int rows, unsigned int colls);

    QVector<T> & operator[](unsigned int Index);

    void resize(unsigned int rows, unsigned int colls);

    void size(unsigned int & rows, unsigned int & colls);

};
template<class T>
Vector2D<T>::Vector2D() {
  // Bouml preserved body begin 00028B05
    m_rows = m_colls = 0;
  // Bouml preserved body end 00028B05
}

template<class T>
Vector2D<T>::Vector2D(unsigned int rows, unsigned int colls) {
  // Bouml preserved body begin 00020F05
    resize(rows, colls);
  // Bouml preserved body end 00020F05
}

template<class T>
QVector<T> & Vector2D<T>::operator[](unsigned int Index) {
  // Bouml preserved body begin 00020F85
	return array[Index];
  // Bouml preserved body end 00020F85
}

template<class T>
void Vector2D<T>::resize(unsigned int rows, unsigned int colls) {
  // Bouml preserved body begin 00022905
    array.resize(rows);

    for(unsigned int row_index = 0; row_index < rows; row_index++)
        array[row_index].resize(colls);

    m_rows = rows;
    m_colls = colls;

  // Bouml preserved body end 00022905
}

template<class T>
void Vector2D<T>::size(unsigned int & rows, unsigned int & colls) {
  // Bouml preserved body begin 0002DD05
     rows = array.size();
     colls = array[0].size();


  // Bouml preserved body end 0002DD05
}


} // namespace Utils
#endif
