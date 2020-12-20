// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// Copyright (c) 2019, The Goodness Project
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include <system_error>

#include "IWriteBatch.h"
#include "IReadBatch.h"

namespace CryptoNote {

class IDataBase {
public:
  virtual ~IDataBase() {}
  virtual std::error_code write(IWriteBatch& batch) = 0;
  virtual std::error_code writeSync(IWriteBatch& batch) = 0;
  virtual std::error_code read(IReadBatch& batch) = 0;
};
}
