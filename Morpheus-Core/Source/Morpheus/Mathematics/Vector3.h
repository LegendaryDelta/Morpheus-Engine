#pragma once

#include <iostream>
#include "Morpheus/Core/Common.h"

namespace Morpheus {

	struct Vector3
	{
	public:
		FLOAT x, y, z;

		Vector3();
		Vector3(const FLOAT& X, const FLOAT& Y, const FLOAT& Z);

		Vector3& Add(const Vector3& other);
		Vector3& Subtract(const Vector3& other);
		Vector3& Multiply(const Vector3& other);
		Vector3& Divide(const Vector3& other);

		Vector3& Normalize();
		Vector3& Cross(const Vector3& Other);
		FLOAT& Dot(const Vector3& Other);
		FLOAT& Magnitude();

		friend Vector3& operator+(Vector3 Left, const Vector3& Right);
		friend Vector3& operator-(Vector3 Left, const Vector3& Right);
		friend Vector3& operator/(Vector3 Left, const Vector3& Right);
		friend Vector3& operator*(Vector3 Left, const Vector3& Right);

		bool operator==(const Vector3& Other);
		bool operator!=(const Vector3& Other);

		Vector3& operator+=(const Vector3& Other);
		Vector3& operator-=(const Vector3& Other);
		Vector3& operator*=(const Vector3& Other);
		Vector3& operator/=(const Vector3& Other);

		friend std::ostream& operator<<(std::ostream& Stream, const Vector3& Vector);
	};
}