// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, Dosh dev's
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Dosh is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Dosh.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <ostream>
#include "IOutputStream.h"

namespace Common {

class StdOutputStream : public IOutputStream {
public:
  StdOutputStream(std::ostream& out);
  StdOutputStream& operator=(const StdOutputStream&) = delete;
  size_t writeSome(const void* data, size_t size) override;

private:
  std::ostream& out;
};

}
