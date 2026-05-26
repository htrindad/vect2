#pragma once
#include <iostream>

class vect2
{
	private:
		int x;
		int y;
	public:
		vect2();
		vect2(const vect2 &ref);
		~vect2();
		vect2	&operator=(const vect &ref)
		int	operator[](int index) const;
		int	&operator[](int index);
		vect2	&operator++();
		vect2	operator++(int);
		vect2	&operator--();
		vect2	operator--(int);
		vect2	operator+(const vect2 &ref) const;
		vect2	&operator+=(const vect2 &ref);
		vect2	operator-(const vect2 &ref) const;
		vect2	&operator-=(const vect2 &ref);
		vect2	operator*(int scalar) const;
		vect2	&operator*=(int scalar);
		vect2	operator-() const;
		bool	operator==(const vect2 &ref) const;
		bool	operator!=(const vect2 &ref) const;
};

vect2		operator*(int scalar, const vect2 &ref);
std::ostream	&operator<<(std::ostream &out, const vect2 &ref);
