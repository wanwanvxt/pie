#pragma once

namespace pie {
  template <typename T>
  class Vector2 {
   public:
    T x, y;

#pragma region ctor
    Vector2();
    Vector2(T X, T Y);
    template <typename U>
    explicit Vector2(const Vector2<U> &vector);
#pragma endregion ctor

#pragma region operator
    Vector2<T> operator+(const Vector2<T> &right) const;
    Vector2<T> operator-(const Vector2<T> &right) const;
    Vector2<T> operator*(T scalar) const;
    Vector2<T> operator/(T scalar) const;

    Vector2<T> operator+=(const Vector2<T> &right);
    Vector2<T> operator-=(const Vector2<T> &right);
    Vector2<T> operator*=(T scalar);
    Vector2<T> operator/=(T scalar);

    bool operator==(const Vector2<T> &other);
    bool operator!=(const Vector2<T> &other);
#pragma endregion operator
  };

  typedef Vector2<int> Vector2i;
  typedef Vector2<float> Vector2f;
  typedef Vector2<unsigned int> Vector2u;
}  // namespace pie