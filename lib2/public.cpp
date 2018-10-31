#include "public.h"
#include "private.h"

Public::Public() {
  private_ = new Private();
}

Public::~Public() {
  delete private_;
}
