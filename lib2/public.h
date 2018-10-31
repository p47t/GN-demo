#pragma once

class Private;

struct Public {
  Public();
  ~Public();

private:
  Private* private_;
};