#pragma once

namespace Units
{
  inline constexpr double ft2m = 0.3048;
  inline constexpr double m2ft = 1.0 / ft2m;
  inline constexpr double sqft2sqm = ft2m * ft2m;
  inline constexpr double slug2kg = 14.5939;
  inline constexpr double slugftsq2kgmsq = slug2kg * ft2m * ft2m;

  constexpr double FeetToMeters(double ft) { return ft * ft2m; }
  constexpr double MetersToFeet(double m) { return m * m2ft; }
  constexpr double SqFeetToSqMeters(double sqft) { return sqft * sqft2sqm; }
  constexpr double SlugsToKg(double slugs) { return slugs * slug2kg; }
  constexpr double SlugFtSqToKgMSq(double slugftsq) { return slugftsq * slugftsq2kgmsq; }
}
