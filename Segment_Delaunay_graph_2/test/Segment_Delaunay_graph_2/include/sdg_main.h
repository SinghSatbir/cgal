#ifndef SDG_MAIN_H
#define SDG_MAIN_H

#include <CGAL/basic.h>
#include <iostream>
#include <cassert>

#include "test.h"

int main(int argc, char* argv[])
{
  CGAL::test_x(std::cin, "bizarre");
  CGAL::test_no_x(std::cin, "bizarre");

  CGAL::test_x(std::cin, "sitesx", false);
  CGAL::test_no_x(std::cin, "sitesx", false);

  CGAL::test_x(std::cin, "sitesxx", false);
  CGAL::test_no_x(std::cin, "sitesxx", false);

  return 0;
}

#endif // SDG_MAIN_H
