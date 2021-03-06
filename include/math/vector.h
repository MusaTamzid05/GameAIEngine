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

            Vector operator+(float value);
            Vector operator-(float value);
            Vector operator*(float value);
            Vector operator/(float value);


            Vector operator+=(const Vector& vec);
            Vector operator-=(const Vector& vec);
            Vector operator*=(const Vector& vec);
            Vector operator/=(const Vector& vec);

            Vector operator+=(float value);
            Vector operator-=(float value);
            Vector operator*=(float value);
            Vector operator/=(float value);

            float length();
            float normalize();

    };

    
    std::ostream& operator<<(std::ostream& out , const Vector& vec);


};

#endif
