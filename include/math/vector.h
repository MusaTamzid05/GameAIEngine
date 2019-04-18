#ifndef VECTOR_H
#define VECTOR_H

#include <sstream>

namespace Math {

    class Vector {

        public:

            Vector(const float x = 0  , const float y = 0);
            virtual ~Vector(){}
            float x;
            float y;

            Vector operator+(const Vector& vec);
            Vector operator-(const Vector& vec);
            Vector operator*(const Vector& vec);
            Vector operator/(const Vector& vec);
            Vector operator=(const Vector& vec);

            std::ostream& operator<<(std::ostream& out);
    };
};

#endif
