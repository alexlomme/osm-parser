#pragma once

#include <osmpbf/osmformat.pb.h>

#include <boost/unordered/unordered_flat_map.hpp>
#include <boost/unordered/unordered_node_map.hpp>
#include <tables/ska/flat_hash_map.hpp>
#include <types/node.hpp>
#include <types/relation.hpp>
#include <types/way.hpp>

namespace parser {

namespace primitive_block {

void parse(OSMPBF::PrimitiveBlock& block, std::vector<parser::Node>& nodeBuffer,
           std::vector<parser::Way>& wayBuffer,
           std::unordered_multimap<google::protobuf::int64,
                                   parser::Restriction>& restrictionBuffer);

double convertCoord(google::protobuf::int64 offset,
                    google::protobuf::int32 granularity,
                    google::protobuf::int64 coord);

// };
}  // namespace primitive_block

}  // namespace parser