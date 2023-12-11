#include "pie/System/Vector2.h"

namespace pie {
  // ctor
  template <typename T>
  Vector2<T>::Vector2() : x(0), y(0) {}
  template <typename T>
  Vector2<T>::Vector2(T X, T Y) : x(X), y(Y) {}
  template <typename T>
  template <typename U>
  Vector2<T>::Vector2(const Vector2<U> &vector)
      : x(static_cast<T>(vector.x)), y(static_cast<T>(vector.y)) {}

  // operator ...
  template <typename T>
  Vector2<T> Vector2<T>::operator+(const Vector2<T> &right) const {
    return Vector2<T>(this->x + right.x, this->y + right.y);
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator-(const Vector2<T> &right) const {
    return Vector2<T>(this->x - right.x, this->y - right.y);
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator*(T scalar) const {
    return Vector2<T>(this->x * scalar, this->y * scalar);
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator/(T scalar) const {
    return Vector2<T>(this->x / scalar, this->y / scalar);
  }

  template <typename T>
  Vector2<T> Vector2<T>::operator+=(const Vector2<T> &right) {
    this->x += right.x;
    this->y += right.y;
    return *this;
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator-=(const Vector2<T> &right) {
    this->x -= right.x;
    this->y -= right.y;
    return *this;
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator*=(T scalar) {
    this->x *= scalar;
    this->y *= scalar;
    return *this;
  }
  template <typename T>
  Vector2<T> Vector2<T>::operator/=(T scalar) {
    this->x /= scalar;
    this->y /= scalar;
    return *this;
  }

  template <typename T>
  bool Vector2<T>::operator==(const Vector2<T> &other) {
    return this->x == other.x && this->x == other.y;
  }
  template <typename T>
  bool Vector2<T>::operator!=(const Vector2<T> &other) {
    return this->x != other.x || this->x != other.y;
  }
}  // namespace pie