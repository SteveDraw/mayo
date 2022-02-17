/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <algorithm>
#include <cmath>
#include <utility>

namespace Mayo {

struct BndBoxCoords;

namespace MathUtils {

double mappedValue(double val, double omin, double omax, double nmin, double nmax);

bool isReversedStandardDir(const gp_Dir& n);
double planePosition(const gp_Pln& plane);
std::pair<double, double> planeRange(const BndBoxCoords& bbc, const gp_Dir& planeNormal);

template<typename T, typename U> static T lerp(T a, T b, U t);

inline bool fuzzyIsNull(float f) { return std::abs(f) <= 0.00001f; }
inline bool fuzzyIsNull(double d) { return std::abs(d) <= 0.000000000001; }

inline bool fuzzyEqual(float f1, float f2) {
    return (std::abs(f1 - f2) * 100000.f <= std::min(std::abs(f1), std::abs(f2)));
}
inline bool fuzzyEqual(double d1, double d2) {
    return (std::abs(d1 - d2) * 1000000000000. <= std::min(std::abs(d1), std::abs(d2)));
}



// --
// -- Implementation
// --

template<typename T, typename U> T lerp(T a, T b, U t)
{
    // TODO Call std::lerp() when available(C++20)
    return T(a * (1 - t) + b * t);
}

} // namespace MathUtils
} // namespace Mayo
