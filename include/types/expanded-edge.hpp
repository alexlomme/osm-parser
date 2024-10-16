#pragma once

#include <osmpbf/osmformat.pb.h>

namespace ngosm {
namespace types {

struct ExpandedEdge {
  google::protobuf::int64 id;
  long sourcePart;
  uint64_t sourceEdgeOffset;
  long targetPart;
  uint64_t targetEdgeOffset;
  double cost;
};

}  // namespace types
}  // namespace ngosm