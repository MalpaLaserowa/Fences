#ifndef UTILS_VECTOR2D_H
#define UTILS_VECTOR2D_H


#include <QVector>


namespace Utils {

template<class T>
class Vector2D : public QVector<T> {
  private:
    QVector<QVector<T> > array;

    unsigned int m_rows;

    unsigned int m_colls;


  public:
    Vector2D();

    Vector2D(unsigned int rows, unsigned int colls);

    QVector<T> & operator[](unsigned int Index);

    void resize(unsigned int rows, unsigned int colls);

};
template<class T>
Vector2D<T>::Vector2D() {
  // Bouml preserved body begin 00028B05
  // Bouml preserved body end 00028B05
}

template<class T>
Vector2D<T>::Vector2D(unsigned int rows, unsigned int colls) {
  // Bouml preserved body begin 00020F05
	array.resize(rows);

	for(unsigned int row_index = 0; row_index < rows; row_index++)
        array[row_index].resize(colls);

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
  // Bouml preserved body end 00022905
}


} // namespace Utils
#endif
