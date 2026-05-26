#include "vect2.hpp"

vect2::vect2() { x = 0; y = 0; }
vect2::~vect2() {}
vect2::vect2(int x, int y) { this->x = x; this->y = y; }
vect2::vect2(const vect2 &ref) { x = ref.x; y = ref.y; }
vect2 &vect2::operator=(const vect2 &ref)
{
	if (*this == ref)
		return *this;
	x = ref.x;
	y = ref.y;
	return *this;
}

int		vect2::operator[](int index) const { return !index ? x : y; }
int		&vect2::operator[](int index) { return !index ? x : y; }

vect2		&vect2::operator++()
{
	x++;
	y++;
	return *this;
}

vect2		vect2::operator++(int)
{
	vect2 tmp(*this);

	++(*this);
	return tmp;
}

vect2		&vect2::operator--()
{
	x--;
	y--;
	return *this;
}

vect2		vect2::operator--(int)
{
	vect2 tmp(*this);

	--(*this);
	return tmp;
}

vect2		vect2::operator+(const vect2 &ref) const
{
	vect2 tmp(*this);

	tmp.x += ref.x;
	tmp.y += ref.y;
	return tmp;
}

vect2		&vect2::operator+=(const vect2 &ref)
{
	*this = *this + ref;
	return *this;
}

vect2		vect2::operator-(const vect2 &ref) const
{
	vect2 tmp(*this);

	tmp.x -= ref.x;
	tmp.y -= ref.y;
	return tmp;
}

vect2		&vect2::operator-=(const vect2 &ref)
{
	*this = *this - ref;
	return *this;
}

vect2		vect2::operator*(int scalar) const
{
	vect2 tmp(*this);

	tmp.x *= scalar;
	tmp.y *= scalar;
	return tmp;
}

vect2		&vect2::operator*=(int scalar)
{
	*this = *this * scalar;
	return *this;
}

vect2		vect2::operator-() const
{
	vect2 cpy(*this);

	cpy.x = -cpy.x;
	cpy.y = -cpy.y;
	return cpy;
}

vect2		operator*(int scalar, const vect2 &ref)
{
	vect2 cpy(ref);

	cpy *= scalar;
	return cpy;
}

bool		vect2::operator==(const vect2 &ref) const { return x == ref.x && y == ref.y; }
bool		vect2::operator!=(const vect2 &ref) const { return !(*this == ref); }

std::ostream	&operator<<(std::ostream &out, const vect2 &ref)
{
	out << '{' << ref[0] << ", " << ref[1] << '}';
	return out;
}
